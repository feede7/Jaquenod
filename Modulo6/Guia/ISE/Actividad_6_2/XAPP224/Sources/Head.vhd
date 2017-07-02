library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity En_Head is
    Port ( CLK : in  STD_LOGIC;
           Data_In : in  STD_LOGIC;
           Data_Out : out  STD_LOGIC;
           Rdy : out  STD_LOGIC);
end En_Head;

architecture Arq_Head of En_Head is
	signal CLK0 : STD_LOGIC;
	signal CLK90: STD_LOGIC;
	signal LOCKED: STD_LOGIC;
	signal RST: STD_LOGIC;
	
	signal AZ,BZ,CZ,DZ : STD_LOGIC_VECTOR(3 downto 0);
	signal CTRL : STD_LOGIC_VECTOR(1 downto 0);
	signal USEA,USEB,USEC,USED : STD_LOGIC;
	signal AA0,BB0,CC0,DD0 : STD_LOGIC;
	signal Data : STD_LOGIC;
	
	signal AAP,BBP,CCP,DDP : STD_LOGIC;
	signal AAN,BBN,CCN,DDN : STD_LOGIC;
begin

   DCM_SP_inst : DCM_SP
   generic map (
      CLKDV_DIVIDE => 2.0, --  Divide by: 1.5,2.0,2.5,3.0,3.5,4.0,4.5,5.0,5.5,6.0,6.5
                           --     7.0,7.5,8.0,9.0,10.0,11.0,12.0,13.0,14.0,15.0 or 16.0
      CLKFX_DIVIDE => 1,   --  Can be any interger from 1 to 32
      CLKFX_MULTIPLY => 4, --  Can be any integer from 1 to 32
      CLKIN_DIVIDE_BY_2 => FALSE, --  TRUE/FALSE to enable CLKIN divide by two feature
      CLKIN_PERIOD => 25.0, --  Specify period of input clock
      CLKOUT_PHASE_SHIFT => "NONE", --  Specify phase shift of "NONE", "FIXED" or "VARIABLE" 
      CLK_FEEDBACK => "1X",         --  Specify clock feedback of "NONE", "1X" or "2X" 
      DESKEW_ADJUST => "SYSTEM_SYNCHRONOUS", -- "SOURCE_SYNCHRONOUS", "SYSTEM_SYNCHRONOUS" or
                                             --     an integer from 0 to 15
      DLL_FREQUENCY_MODE => "LOW",     -- "HIGH" or "LOW" frequency mode for DLL
      DUTY_CYCLE_CORRECTION => TRUE, --  Duty cycle correction, TRUE or FALSE
      PHASE_SHIFT => 0,        --  Amount of fixed phase shift from -255 to 255
      STARTUP_WAIT => FALSE) --  Delay configuration DONE until DCM_SP LOCK, TRUE/FALSE
   port map (
      CLK0 => CLK0,     -- 0 degree DCM CLK ouptput
      CLK180 => open,--CLK180, -- 180 degree DCM CLK output
      CLK270 => open,--CLK270, -- 270 degree DCM CLK output
      CLK2X => open,--CLK2X,   -- 2X DCM CLK output
      CLK2X180 => open,--CLK2X180, -- 2X, 180 degree DCM CLK out
      CLK90 => CLK90,   -- 90 degree DCM CLK output
      CLKDV => open,--CLKDV,   -- Divided DCM CLK out (CLKDV_DIVIDE)
      CLKFX => open,--CLKFX,   -- DCM CLK synthesis out (M/D)
      CLKFX180 => open,--CLKFX180, -- 180 degree CLK synthesis out
      LOCKED => LOCKED, -- DCM LOCK status output
      PSDONE => open,--PSDONE, -- Dynamic phase adjust done output
      STATUS => open,--STATUS, -- 8-bit DCM status bits output
      CLKFB => CLK0,   -- DCM clock feedback
      CLKIN => CLK,   -- Clock input (from IBUFG, BUFG or DCM)
      PSCLK => open,--PSCLK,   -- Dynamic phase adjust clock input
      PSEN => open,--PSEN,     -- Dynamic phase adjust enable input
      PSINCDEC => open,--PSINCDEC, -- Dynamic phase adjust increment/decrement
      RST => '0'--RST        -- DCM asynchronous reset input
   );
	
	RST <= not LOCKED;
	
	-- Registro de la entrada con los 4 posibles dominios de reloj
	process(CLK0,RST)
	begin
		if RST = '1' then
			AZ <= "0000";
			BZ(3 downto 1) <= "000";
			CZ(3 downto 2) <= "00";
			DZ(3) <= '0';
		elsif rising_edge(CLK0) then
			AZ(0) <= Data_In;
			AZ(1) <= AZ(0);
			AZ(2) <= AZ(1);
			AZ(3) <= AZ(2);
			
			BZ(1) <= BZ(0);
			BZ(2) <= BZ(1);
			BZ(3) <= BZ(2);
			
			CZ(2) <= CZ(1);
			CZ(3) <= CZ(2);
			
			DZ(3) <= DZ(2);
		end if;
	end process;
	
	process(CLK0,RST)
	begin
		if RST = '1' then
			CZ(0) <= '0';
			DZ(1) <= '0';
		elsif falling_edge(CLK0) then
			CZ(0) <= Data_In;
			
			DZ(1) <= DZ(0);
		end if;
	end process;
	
	process(CLK90,RST)
	begin
		if RST = '1' then
			BZ(0) <= '0';
			CZ(1) <= '0';
			DZ(2) <= '0';
		elsif rising_edge(CLK90) then
			BZ(0) <= Data_In;
			
			CZ(1) <= CZ(0);
			
			DZ(2) <= DZ(1);
		end if;
	end process;
	
	process(CLK90,RST)
	begin
		if RST = '1' then
			DZ(0) <= '0';
		elsif falling_edge(CLK90) then
			DZ(0) <= Data_In;
		end if;
	end process;

	AAP <= AZ(2) and (AZ(2) XOR AZ(3));
	BBP <= BZ(2) and (BZ(2) XOR BZ(3));
	CCP <= CZ(2) and (CZ(2) XOR CZ(3));
	DDP <= DZ(2) and (DZ(2) XOR DZ(3));
	AAN <= (not AZ(2)) and (AZ(2) XOR AZ(3));
	BBN <= (not BZ(2)) and (BZ(2) XOR BZ(3));
	CCN <= (not CZ(2)) and (CZ(2) XOR CZ(3));
	DDN <= (not DZ(2)) and (DZ(2) XOR DZ(3));

	-- Detección de flancos
	process(CLK0,RST)
	begin
		if RST = '1' then
			CTRL <= "10";
			USEA <= '0';
			USEB <= '0';
			USEC <= '0';
			USED <= '0';
		elsif rising_edge(CLK0) then
			USEA <= '0';
			USEB <= '0';
			USEC <= '0';
			USED <= '0';
			
			if (AAP and BBP and CCP and DDP) = '1' or (AAN and BBN and CCN and DDN) = '1' then
				USEC <= '1';
			elsif (AAP and (not BBP) and (not CCP) and (not DDP)) = '1' or (AAN and (not BBN) and (not CCN) and (not DDN)) = '1' then
				USED <= '1';
				if USEA = '1' then
					if CTRL = "01" then
						CTRL <= "10";
					else
						CTRL <= "11";
					end if;
				end if;
			elsif (AAP and BBP and (not CCP) and (not DDP)) = '1' or (AAN and BBN and (not CCN) and (not DDN)) = '1' then
				USEA <= '1';
				if USED = '1' then
					if CTRL = "11" then
						CTRL <= "10";
					else
						CTRL <= "01";
					end if;
				end if;
			elsif (AAP and BBP and CCP and (not DDP)) = '1' or (AAN and BBN and CCN and (not DDN)) = '1' then
				USEB <= '1';
			end if;
		end if;
	end process;

--	-- Implementación basada en XAPP225
--   SRL16_A : SRL16
--   generic map (
--      INIT => X"0000")
--   port map (
--      Q => AA0,       -- SRL data output
--      A0 => CTRL(0),     -- Select[0] input
--      A1 => CTRL(1),     -- Select[1] input
--      A2 => '0',     -- Select[2] input
--      A3 => '0',     -- Select[3] input
--      CLK => CLK0,   -- Clock input
--      D => AZ(2)        -- SRL data input
--   );
--	
--   SRL16_B : SRL16
--   generic map (
--      INIT => X"0000")
--   port map (
--      Q => BB0,       -- SRL data output
--      A0 => CTRL(0),     -- Select[0] input
--      A1 => CTRL(1),     -- Select[1] input
--      A2 => '0',     -- Select[2] input
--      A3 => '0',     -- Select[3] input
--      CLK => CLK0,   -- Clock input
--      D => BZ(2)        -- SRL data input
--   );
--	
--   SRL16_C : SRL16
--   generic map (
--      INIT => X"0000")
--   port map (
--      Q => CC0,       -- SRL data output
--      A0 => CTRL(0),     -- Select[0] input
--      A1 => CTRL(1),     -- Select[1] input
--      A2 => '0',     -- Select[2] input
--      A3 => '0',     -- Select[3] input
--      CLK => CLK0,   -- Clock input
--      D => CZ(2)        -- SRL data input
--   );
--	
--   SRL16_D : SRL16
--   generic map (
--      INIT => X"0000")
--   port map (
--      Q 	=> DD0,		-- SRL data output
--      A0 => CTRL(0),	-- Select[0] input
--      A1 => CTRL(1),	-- Select[1] input
--      A2 => '0',     -- Select[2] input
--      A3 => '0',     -- Select[3] input
--      CLK => CLK0,   	-- Clock input
--      D => DZ(2)		-- SRL data input
--   );
	
--	Data_Out <= CZ(3) when (USEA or USEB or USEC or USED) = '1' else '0' when RST = '1';

	-- Acción según dominio detectado
	process(CLK0,RST)
	begin
		if RST = '1' then
			Data_Out <= '0';
		elsif rising_edge(CLK0) then		
			if (USEA or USEB or USEC or USED) = '1' then
--				Data_Out <= (USEA and AA0) or (USEB and BB0) or (USEC and CC0) or (USED and DD0);
				Data_Out <= (USEA and AZ(3)) or (USEB and BZ(3)) or (USEC and CZ(3)) or (USED and DZ(3));
--				Data_Out <= AZ(1);--(USEA and AA0) or (USEB and BB0) or (USEC and CC0) or (USED and DD0);
			end if;
		end if;
	end process;
	
end Arq_Head;