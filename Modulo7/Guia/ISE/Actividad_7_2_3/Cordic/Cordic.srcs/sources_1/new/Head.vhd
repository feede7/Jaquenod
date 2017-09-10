----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 08/02/2017 05:33:53 PM
-- Design Name: 
-- Module Name: En_Head - Arq_Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity En_Head is
	 Generic(Niter : NATURAL := 10);
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
			  ENA	: in  STD_LOGIC;
           X0  : in  STD_LOGIC_VECTOR(19 downto 0);
           Y0  : in  STD_LOGIC_VECTOR(19 downto 0);
           Z0  : in  STD_LOGIC_VECTOR(19 downto 0);
           Z1  : in  STD_LOGIC_VECTOR(19 downto 0);
           X1  : out STD_LOGIC_VECTOR(19 downto 0);
           Y1  : out STD_LOGIC_VECTOR(19 downto 0);
           RDY	: out STD_LOGIC;
			  RUN : out NATURAL
    );
end En_Head;

architecture Arq_Head of En_Head is

--component dist_mem_gen_0 IS
component arctan IS
  PORT (
    a : IN STD_LOGIC_VECTOR(4 downto 0);
    spo : OUT STD_LOGIC_VECTOR(19 downto 0)
  );
  end component;
  
  signal ang : STD_LOGIC_VECTOR(4 downto 0);
  signal State : STD_LOGIC_VECTOR(1 downto 0);
  signal atan_std_logic : STD_LOGIC_VECTOR(19 downto 0);
  signal atan : signed(19 downto 0);
  signal sZdiff : signed(19 downto 0);
  signal sX1 : signed(19 downto 0);
  signal sY1 : signed(19 downto 0);
  signal iter : NATURAL;
  signal sRUN : NATURAL;
begin

    -- ROM con valores de arctan(2^-i)
	 -- Los arctan tienen que ser lo ángulos que voy a ir restamndo, empezando desde 45°
	 -- 45			
	 -- 26.56505
	 -- 14.03624
	 --  7.12501
	 --  3.57633
	 --  1.78991
	 --  0.89517
	 --  0.44761
	 --  0.22381
	 --  0.11191
	 
	 -- Si los escalo en 10 puedo trabajarlos en manera entera con una precisión aceptable, es decir:
	 -- 450			
	 -- 266
	 -- 140
	 --  71
	 --  36
	 --  18
	 --   9
	 --   4
	 --   2
	 --   1
	 
	 -- Estos son los números que voy a llamar para ir llegando al ángulo deseado
	 
	 -- El nombre de la instanciación depende si estamos corriendo en ISE o Vivado
    Ins_arctan : arctan--dist_mem_gen_0
      PORT MAP(
        a   => ang,
        spo => atan_std_logic
      );

	atan <= signed(atan_std_logic);
	
    -- Z0 = arctan(Y0/X0)
    process(CLK,RST)
    begin
        if RST = '1' then
            ang <= (others=>'0');
				RDY <= '0';
				X1  <= (others=>'0');
				Y1  <= (others=>'0');
				State <= "00";
        elsif rising_edge(CLK) then
				case State is
					when "00"  => -- Espero ENA
						RDY <= '1';
						if ENA = '1' then
							sX1	<= signed(X0);
							sY1	<= signed(Y0);
							sZdiff<= signed(Z1) - signed(Z0); -- se toma como diferencia positiva aquella que conlleva un giro antihorario
							iter	<= 0;
							sRUN	<= 0;
							ang	<= (others => '0');
							RDY 	<= '0';
							State <= "01";
						end if;
						
					when "01" =>
						if iter < Niter then
							if sZdiff > 0 then
								sX1 <= sX1 - sY1(sY1'high downto iter);
								sY1 <= sY1 + sX1(sX1'high downto iter);
								sZdiff <= sZdiff - signed(atan);
								sRUN <= sRUN + 1;
							elsif sZdiff < 0 then
								sX1 <= sX1 + sY1(sY1'high downto iter);
								sY1 <= sY1 - sX1(sX1'high downto iter);
								sZdiff <= sZdiff + signed(atan);
								sRUN <= sRUN + 1;
							end if;
							iter	<= iter + 1;
							ang 	<= STD_LOGIC_VECTOR(unsigned(ang) + to_unsigned(1,ang'length));
						else
							RDY 	<= '1';
							X1		<= std_logic_vector(sX1);
							Y1		<= std_logic_vector(sY1);
							RUN	<= sRUN;
							State <= "00";
						end if;
						
					when others =>
						State <= "00";
						
				end case;
        end if;
    end process;
    
end Arq_Head;