library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

--use work.Common_Types_Pck.all;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity En_Head is
    Port (
        -- PortMap para grabado de Flash
        SPI_MOSI    : out STD_LOGIC;
        SPI_MISO    : in  STD_LOGIC;
        SPI_IO1     : out STD_LOGIC;
        SPI_IO2     : out STD_LOGIC;
        SPI_CS      : out STD_LOGIC;
        
        -- PortMap CLK del SOM
        PLL_CLK_P 	: in  STD_LOGIC;
        PLL_CLK_N 	: in  STD_LOGIC;
        
        -- Pines para el manejo de cosas
        ETH_LED1    : out STD_LOGIC;
        ETH_LED2    : out STD_LOGIC;
        
        -- Pines Ethernet
        ETH_TX_D     : out STD_LOGIC_VECTOR(1 downto 0);
        ETH_TX_EN    : out STD_LOGIC;
        ETH_RX_D     : in  STD_LOGIC_VECTOR(1 downto 0);
        ETH_RX_DV    : in  STD_LOGIC;
        ETH_RST      : out STD_LOGIC := '0';
        MDIO         : inout  STD_LOGIC;
        MDC          : out STD_LOGIC;
        LINK_LED     : in  STD_LOGIC;
        
        -- Pines Debug
        LED          : out STD_LOGIC;
        nLED         : out STD_LOGIC
        
		);
end En_Head;

architecture Arq_Head of En_Head is
    signal CLK_PLL_50MHz : STD_LOGIC;
    signal CLK_1_2GHz_50 : STD_LOGIC;
    signal LOCKED_PLL_50MHz : STD_LOGIC;
    signal Reset            : STD_LOGIC;

    signal CLK_80MHz_INT    : STD_LOGIC;
    signal CLK_50MHz_INT    : STD_LOGIC;
    signal CLK_25MHz_INT    : STD_LOGIC;
    signal Toggle           : STD_LOGIC;
    signal count            : unsigned(31 downto 0);
    signal DATA             : STD_LOGIC_VECTOR(95 downto 0) := x"000000000000000001234567";
    signal DATA_Aux         : STD_LOGIC_VECTOR(95 downto 0) := Data;
    signal RST              : STD_LOGIC;
    signal Toggle_En        : STD_LOGIC;
    
--    Type   States_Send is (Init,Idle,Write_Command,Write_Command_2,Write_Command_3,Write_Command_4,Write_Command_5,Write_Data,Write_Data_2,Write_Data_3,Write_Data_4,Write_Data_5,Command_Write,Command_Write_2,Command_Write_3,Command_Write_4,Command_Write_5,Command_Write_6,Command_Write_7);
--    signal State_Send    : States_Send;
    
    signal  Bytes_to_Send   : NATURAL;
    signal  Sent_Two_Bits   : NATURAL;
    signal  Send            : STD_LOGIC;
    signal  Sending         : STD_LOGIC;
    signal  sETH_TX_EN      : STD_LOGIC;
    signal  sEth_TX_EN_Ant  : STD_LOGIC;
begin

    --------------------------------------- Configuración de Flash ------------------------------------------------
    Ins_Flash_SPI: entity work.En_Flash_SPI(Arq_Flash_SPI)
    port map (
        SPI_DQ0  => SPI_MOSI,
        SPI_DQ1  => SPI_MISO,
        SPI_DQ2  => SPI_IO1,
        SPI_DQ3  => SPI_IO2,
        SPI_CS   => SPI_CS
    );

    ---------------------------------------- Procesamiento Planar ------------------------------------------------------------
    ------------------------ Configuraciones CLK------------------------
    
    IBUFDS_inst : IBUFDS
    generic map (
        DIFF_TERM		=> TRUE,	-- Differential Termination
        IBUF_LOW_PWR	=> TRUE,	-- Low power (TRUE) vs. performance (FALSE) setting for referenced I/O standards
        IOSTANDARD		=> "DEFAULT")
    port map (
        O  => CLK_PLL_50MHz,
        I  => PLL_CLK_P,
        IB => PLL_CLK_N
    );

   PLLE2_50M_inst : PLLE2_BASE
   generic map (
      BANDWIDTH => "OPTIMIZED",  -- OPTIMIZED, HIGH, LOW
      CLKFBOUT_MULT     => 48,        -- Multiply value for all CLKOUT, (2-64)
      CLKFBOUT_PHASE    => 0.0,     -- Phase offset in degrees of CLKFB, (-360.000-360.000).
      CLKIN1_PERIOD     => 20.000,      -- Input clock period in ns to ps resolution (i.e. 33.333 is 30 MHz).
      -- CLKOUT0_DIVIDE - CLKOUT5_DIVIDE: Divide amount for each CLKOUT (1-128)
      CLKOUT0_DIVIDE    => 60,
      CLKOUT1_DIVIDE    => 48,
      CLKOUT2_DIVIDE    => 30,
      CLKOUT3_DIVIDE    => 24,
      CLKOUT4_DIVIDE    => 15,
      CLKOUT5_DIVIDE    => 12,
      -- CLKOUT0_DUTY_CYCLE - CLKOUT5_DUTY_CYCLE: Duty cycle for each CLKOUT (0.001-0.999).
      CLKOUT0_DUTY_CYCLE => 0.5,
      CLKOUT1_DUTY_CYCLE => 0.5,
      CLKOUT2_DUTY_CYCLE => 0.5,
      CLKOUT3_DUTY_CYCLE => 0.5,
      CLKOUT4_DUTY_CYCLE => 0.5,
      CLKOUT5_DUTY_CYCLE => 0.5,
      -- CLKOUT0_PHASE - CLKOUT5_PHASE: Phase offset for each CLKOUT (-360.000-360.000).
      CLKOUT0_PHASE     => 0.0,
      CLKOUT1_PHASE     => 0.0,
      CLKOUT2_PHASE     => 0.0,
      CLKOUT3_PHASE     => 0.0,
      CLKOUT4_PHASE     => 0.0,
      CLKOUT5_PHASE     => 0.0,
      DIVCLK_DIVIDE     => 2,        -- Master division value, (1-56)
      REF_JITTER1       => 0.0,        -- Reference input jitter in UI, (0.000-0.999).
      STARTUP_WAIT      => "FALSE"    -- Delay DONE until PLL Locks, ("TRUE"/"FALSE")
   )
   port map (
      -- Clock Outputs: 1-bit (each) output: User configurable clock outputs
      CLKOUT0   => open,--CLK_20MHz_INT,--CLKOUT0,   -- 1-bit output: CLKOUT0
      CLKOUT1   => CLK_25MHz_INT,
      CLKOUT2   => open,
      CLKOUT3   => CLK_50MHz_INT,
      CLKOUT4   => open,
      CLKOUT5   => open,--CLKOUT5,   -- 1-bit output: CLKOUT5
      -- Feedback Clocks: 1-bit (each) output: Clock feedback ports
      CLKFBOUT  => CLK_1_2GHz_50,--CLKFBOUT, -- 1-bit output: Feedback clock
      LOCKED    => LOCKED_PLL_50MHz,     -- 1-bit output: LOCK
      CLKIN1    => CLK_PLL_50MHz,     -- 1-bit input: Input clock
      -- Control Ports: 1-bit (each) input: PLL control ports
      PWRDWN    => '0',--PWRDWN,     -- 1-bit input: Power-down
      RST       => '0',--not_EnableDCM,--RST,           -- 1-bit input: Reset
      -- Feedback Clocks: 1-bit (each) input: Clock feedback ports
      CLKFBIN   => CLK_1_2GHz_50--FBIN    -- 1-bit input: Feedback clock
   );

    Reset   <= not LOCKED_PLL_50MHz;
    
    process
    begin
        if reset = '1' then
            Sending    <= '0';
            count <= to_unsigned(0,count'length);
        elsif rising_edge(CLK_50MHz_INT) then
--            Send    <= '0';
            if count = 50_000_000 then
                Sending  <= '1';
                Toggle <= not Toggle;
                count <= to_unsigned(0,count'length);
            elsif count = 20_00 then
                Sending  <= '0';
                Toggle <= not Toggle;
                count <= count + to_unsigned(1,count'length);
            else
                count <= count + to_unsigned(1,count'length);
            end if;
        end if;
    end process;

ETH_TX_D    <= Data_Aux(Data_Aux'high downto Data_Aux'high-1);
sETH_TX_EN  <= Sending and not sETH_TX_EN when falling_edge(CLK_50MHz_INT);
sEth_TX_EN_Ant <= sETH_TX_EN when rising_edge(CLK_50MHz_INT);
Data_Aux    <= Data_Aux(Data_Aux'high-2 downto 0) & Data_Aux(Data_Aux'high downto Data_Aux'high-1) when sEth_TX_EN_Ant = '1' and sEth_TX_EN = '0' else Data when falling_edge(Sending);


--    process
--    begin
--        if reset = '1' then
--            Sending         <= '0';
--            sETH_TX_EN      <= '0';
--        elsif rising_edge(CLK_50MHz_INT) then
--            Sending      <= '0';
--            sETH_TX_EN      <= '0';
--            Sent_Two_Bits   <= 0;
--            Bytes_to_Send   <= 40;
--            Data_Aux        <= Data;
--            if Send = '1' or Sending = '1' then
--                if Sent_Two_Bits < 100 then--Bytes_to_Send*4 then
--                    Sending <= '1';
--                    if sETH_TX_EN = '0' then
--                        Data_Aux    <= Data_Aux(Data_Aux'high-2 downto 0) & Data_Aux(Data_Aux'high downto Data_Aux'high-1);
--                        ETH_TX_D    <= Data_Aux(Data_Aux'high downto Data_Aux'high-1);
--                        Sent_Two_Bits <= Sent_Two_Bits + 1;
--                    end if;
--                    sETH_TX_EN <= not sETH_TX_EN;
--                else
--                    Sending <= '0';
--                end if;
--            end if;
--        end if;
--    end process;
    
    ETH_LED1    <= LINK_LED;
    ETH_LED2    <= Toggle xor ETH_RX_DV;
    ETH_TX_EN   <= sETH_TX_EN;
    ETH_RST     <= not Reset;
    LED         <= Sending;
    nLED        <= not Sending;

end Arq_Head;