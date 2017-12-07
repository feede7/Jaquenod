----------------------------------------------------------------------------------
-- Company:	 M�lardalen University - Robotic project
-- EngIneer: Mostafa - Nima
-- 
-- Create Date:    12:55:11 04/14/2010 
-- Design Name: 
-- Module Name:    	Top - Behavioral 
-- Project Name: 		Ethernet Comunication
-- Target Devices: 	Two Camera board
-- Tool versions: 	ISE 10.1
-- Description: 
--
-- Dependencies: 
-- 
-- Revision: 
-- Revision 0.01 - File Created 
-- Additional Comments: TODOI

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
library UNISIM;
use UNISIM.VComponents.all;

entity En_ETH_100mbps is
    PORT (
            -- PortMap CLK del SOM
            CLK_50MHz   : in  STD_LOGIC;
            Reset       : in  STD_LOGIC;
            
            -- Pines Ethernet
            ETH_TX_D     : out STD_LOGIC_VECTOR(1 downto 0);
            ETH_TX_EN    : out STD_LOGIC;
            ETH_RX_D     : in  STD_LOGIC_VECTOR(1 downto 0);
            ETH_RX_DV    : in  STD_LOGIC;
            ETH_RST      : out STD_LOGIC := '0';
            MDIO         : inout  STD_LOGIC;
            MDC          : out STD_LOGIC
    );
end En_ETH_100mbps;

architecture Arq_ETH_100mbps of En_ETH_100mbps is
    -- Control The Server Loop with this counters
    SIGNAL 		Init_Time					: STD_LOGIC_Vector(30 downto 0):= (Others=>'0');
    SIGNAL 		Init_Index					: INTEGER range 28 downto 0;
    SIGNAL 		Server_Time					: STD_LOGIC_Vector(20 downto 0):= (Others=>'0');
    SIGNAL 		Wait_Time					: STD_LOGIC_Vector(3 downto 0):= (Others=>'0');
    Constant 	Constant_Server_Index		: INTEGER 	:= 1;
    SIGNAL 		Ethernet_Pack_Count			: STD_LOGIC_Vector(31 downto 0):= (Others=>'0');
    SIGNAL 		Counter_img_From_Ethernet	: STD_LOGIC_Vector(31 downto 0):= (Others=>'0');
    
    -- For Receiver
    SIGNAL	Index_Data_Recieved		    	: INTEGER;
    SIGNAL 	Pick_Command				    : STD_LOGIC;
    
    --Signals For Communication
    SIGNAL 	Communication_In_Data			: STD_LOGIC_VECTOR(71  downto 0);	
    SIGNAL  Communication_In_Reply			: STD_LOGIC_VECTOR(71  downto 0):= (Others =>'0');
    SIGNAL  Communication_In_DataValid		: STD_LOGIC;
    SIGNAL  Communication_In_ReplyValid		: STD_LOGIC:='0';
    SIGNAL  Communication_Out_Data			: STD_LOGIC_VECTOR(71  downto 0);	
    SIGNAL  Communication_Out_Data_Ready	: STD_LOGIC;
    SIGNAL  Communication_Out_Command_Ready	: STD_LOGIC;
    SIGNAL  Communication_Out_Is_Sending	: STD_LOGIC;
    SIGNAL	ETH_TX_D_Enable	             	: STD_LOGIC;
    
    --PHY Manager
    SIGNAL 	PHY_Manager_Out_MDC				: STD_LOGIC;
    SIGNAL 	PHY_Manager_Out_MDIO			: STD_LOGIC;
    SIGNAL 	PHY_Manager_Out_IsActive		: STD_LOGIC;
    
    SIGNAL 		Pixel_Count					: INTEGER	:= 0;
    -- LEDs
    SIGNAL LED0					:		 STD_LOGIC:= '0';
    SIGNAL LED1					:		 STD_LOGIC:= '0';
    SIGNAL LED2					:		 STD_LOGIC:= '0';
    
    -- Test Pins 
    SIGNAL PIN_0				:		 STD_LOGIC:= '0';
    SIGNAL PIN_1				:		 STD_LOGIC:= '1';
    SIGNAL PIN_2				:		 STD_LOGIC:= '0';
    SIGNAL PIN_3				:		 STD_LOGIC:= '1';
    
    -- State for Control 
    TYPE 	Status_Control 		IS ( Server, Init_1);--, Start_Ethernet_Image_1, Right_Camera_GetPic_2); 
    SIGNAL 	sts_Control    		: Status_Control	:= Init_1;
    
    TYPE 	Status_Init			IS ( Init_Start, Init_Set, Init_Finish );
    SIGNAL 	sts_Init		    	: Status_Init	:= Init_Start;
    
    TYPE 	Status_GetPic			IS ( Reset_Camera_Controler, Enable_Camera_Controler, Send_Command, Wait_ForRDV, Read_Data );
    SIGNAL 	sts_GetPic		    	: Status_GetPic	:= Reset_Camera_Controler;
    
    
    SIGNAL TEMP:std_logic;
    
    signal Trama_Count  : STD_LOGIC_VECTOR(71 downto 0);
BEGIN
    MDC			<= PHY_Manager_Out_MDC;
    MDIO		<= PHY_Manager_Out_MDIO;
    ETH_RST		<=	'1';
    
    ---- Communication
    ETH_TX_EN				<=  ETH_TX_D_Enable;

    --=================================  Instance of components
    
    Instance_PHY_Manager : entity work.En_PHY_Manager(Arq_PHY_Manager)
    PORT MAP( In_CLK_50			=> CLK_50MHz,	
              Out_PHY_MDIO		=> PHY_Manager_Out_MDIO,
              Out_PHY_MDC		=> PHY_Manager_Out_MDC,					
              Out_IsActive		=> PHY_Manager_Out_IsActive
		);

    Instance_Communication : entity work.En_Ethernet_RMII(Arq_Ethernet_RMII)
    PORT MAP( In_CLK_50			=> CLK_50MHz,
              In_Data			=> Communication_In_Data,
              In_Reply			=> Communication_In_Reply,
              In_DataValid		=> Communication_In_DataValid,
              In_ReplyValid		=> Communication_In_ReplyValid,
              
              Out_Data			=> Communication_Out_Data,
              Out_Data_Ready	=> Communication_Out_Data_Ready,
              Out_Command_Ready	=> Communication_Out_Command_Ready,
              
              In_PHY_RX			=> ETH_RX_D,
              In_PHY_CRS_DV		=> ETH_RX_DV,
              Out_PHY_TX		=> ETH_TX_D,
              Out_PHY_TX_Enable	=> ETH_TX_D_Enable,
              Out_Is_Sending	=> Communication_Out_Is_Sending
            ); 
					 					
    -- Main Controller of the program
    PROCESS (CLK_50MHz)
    BEGIN
        IF  falling_edge(CLK_50MHz)THEN	
            --Set to Default Values
            Communication_In_ReplyValid	<=	'0';
            Communication_In_DataValid	<= '0';
            CASE sts_Control IS
                    WHEN Init_1	=>
                        --Actions
                        CASE sts_Init IS
                            WHEN Init_Start	=>
                                Init_Time  <=  ( Others=> '0');										
                                sts_Init 		<= Init_Set;
    
                            WHEN Init_Set	=>	
                                sts_Init 		<= Init_Finish;
    
                            WHEN Init_Finish	=>
                                -- Next State and Sub_State
                                IF  Init_Time(Init_Index)= '1' THEN
                                    -- LEDS
                                    LED0 <= '1';
                                    LED1 <= '1';
                                    LED2 <= '1';
                                    IF Communication_Out_Is_Sending = '0' THEN -- IF all init process goes well then we need to send data											
                                        Communication_In_Reply		<= x"12345678FFFFFFFFFF";
                                        Communication_In_ReplyValid	<=	'1';											
                                        sts_Init                    <= Init_Start;
                                        sts_Control                 <= Server;
                                    END IF;											
                                ELSE
                                    Init_Time <= Init_Time + 1;
                                END IF;	
                            END Case;						
                    WHEN Server	=>								
    --                    IF Communication_Out_Command_Ready = '1' THEN
                            IF Server_Time(Constant_Server_Index) = '1' THEN -- Wait to not receive a massage twice
                                
--                                CASE Communication_Out_Data(67 downto 64) IS									
--                                    WHEN "0001" =>		
--                                        Communication_In_Reply		<= x"01FFFFFFFF"&Communication_Out_Data(63 downto 32);
--                                        Communication_In_ReplyValid	<=	'1';											
--                                        sts_Control <= Start_Ethernet_Image_1; 
--                                        Counter_img_From_Ethernet <=Communication_Out_Data(63 downto 32);
--                                        -- LEDS
--                                        LED0 <= '1';
--                                        LED1 <= '0';
--                                        LED2 <= '0';							
--                                    WHEN "0010" =>	 
--                                        sts_Control <= Right_Camera_GetPic_2;	
--                                        IF Communication_Out_Is_Sending = '0' THEN 								
--                                            Communication_In_Reply		<= x"300000000000000000";
--                                            Communication_In_ReplyValid	<=	'1';
--                                        END IF;
--                                        -- LEDS
--                                        LED0 <= '0';
--                                        LED1 <= '1';
--                                        LED2 <= '0';							
--                                    when others =>    -- Siempre entra acá
--                                        LED0 <= '0';
--                                        LED1 <= '0';
--                                        LED2 <= '0';
                                        Communication_In_Reply		<= Trama_Count;--x"1E0000000005500000";
                                        Trama_Count <= Trama_Count + '1';
                                        Communication_In_ReplyValid	<=	'1';
--                                END CASE;
                                Server_Time <=	(Others =>'0');
                            ELSE    
                                Server_Time <= Server_Time + 1;								
                            END IF;
    
    --                    END IF;
                    --==**==--
                        
                    -- Receive Images from Ethernet Instead of Cams
--                    WHEN Start_Ethernet_Image_1	=> 
--                        -- Actions							
--                        IF Communication_Out_Data_Ready = '1' THEN
--                            CASE Wait_Time IS
--                                WHEN x"0" => 
--                                    Wait_Time <= Wait_Time + 1;
--    --										Communication_In_Data		<= Ethernet_Pack_Count &x"FF"& Counter_img_From_Ethernet;
--                                    Communication_In_Data		<= Communication_out_Data;
--                                    Communication_In_DataValid	<= '1';
--                                    IF Ethernet_Pack_Count = Counter_img_From_Ethernet -1 THEN
--                                        sts_Control <= Server;
--                                        LED0 <= '1';
--                                        LED1 <= '1';
--                                        LED2 <= '1';																	
--                                        Ethernet_Pack_Count 		<= (Others=>'0');
--                                    ELSE
--                                        Ethernet_Pack_Count 		<= Ethernet_Pack_Count + 1;
--                                    END IF;
--                                WHEN x"3" =>
--                                    Wait_Time <= x"0";
--                                WHEN OTHERS =>
--                                    Wait_Time <= Wait_Time + 1;
--                            END CASE;
--                            ELSE
--                                Wait_Time <= x"0";
--                        END IF;				
                        
--    --============================================================================================---------						
--                    WHEN Right_Camera_GetPic_2	=> -- Send a packet if Fifo has more than 5 * 72 ,360 Data + 8 bit counter
--                        --Actions							
--    --                    IF Camera_Manager_Out_Error = '1' THEN 								
--    --                        Communication_In_Reply		<= x"EEEEEEEEEEEEEEEEEE";
--    --                        Communication_In_ReplyValid	<=	'1';
--    --                        sts_Control <= Server;
--    --                    END IF;
                        
--                        CASE sts_GetPic IS
--                            WHEN Reset_Camera_Controler =>
--    --                            Camera_Manager_In_Reset	<='1';
--                                sts_GetPic					<=Enable_Camera_Controler;
--                            WHEN Enable_Camera_Controler =>
--     --                           Camera_Manager_In_Enable<='1';
--     --                           Camera_Manager_In_Reset	<='0';
--    --									LED1<='0';
--    --									LED2<=not LED2;
--                                sts_GetPic					<=Send_Command;
--                            WHEN Send_Command	=>
--    --									LED1<=not LED1;
--    --									LED2<='0';
--                                IF Communication_Out_Is_Sending = '0' THEN 	
--    --                                Pixel_Count	<= 0;
--    --                                Camera_Manager_In_Command	<=x"03";
--    --                                Camera_Manager_In_Call		<='1';
--                                    sts_GetPic					<=Wait_ForRDV;
--                                END IF;
--                            WHEN Wait_ForRDV	=>
--    --									LED1<=not LED1;
--    --									LED2<=not LED2;
--     --                           IF Camera_Manager_Out_RDV = '1' THEN
--     --                               Camera_Manager_In_Call		<='0';
--                                    sts_GetPic					<=Read_Data;
--     --                           END IF;
--                            WHEN Read_Data		=>
--                                IF Pixel_Count < 50 THEN
--                                    Communication_In_DataValid			<= '1';--Camera_Manager_Out_PixelR_CLK;
--                                    Communication_In_Data(71 downto 36) <= x"222333444";--Camera_Manager_Out_DataR_R & Camera_Manager_Out_DataR_G & Camera_Manager_Out_DataR_B;
--                                    Pixel_Count	<= Pixel_Count + 1 ;
--                                ELSE
--                                    Pixel_Count	<= 0;
--                                    sts_GetPic	<=Reset_Camera_Controler;
--                                    sts_Control <= Server;
--                                END IF;
--                        END CASE;
                        
            END CASE;
        END IF;
    END PROCESS;
    
end Arq_ETH_100mbps;