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

entity En_Head is
    PORT (
            -- PortMap para grabado de Flash
            SPI_MOSI      : out STD_LOGIC;
            SPI_MISO      : in  STD_LOGIC;
            SPI_IO1       : out STD_LOGIC;
            SPI_IO2       : out STD_LOGIC;
            SPI_CS        : out STD_LOGIC;
            
            -- PortMap CLK del SOM
            PLL_CLK_P     : in  STD_LOGIC;
            PLL_CLK_N     : in  STD_LOGIC;
            
            -- Pines para el manejo de cosas
            ETH_LED1      : out STD_LOGIC;
            ETH_LED2      : out STD_LOGIC;
            
            -- Pines Ethernet 100mbps
            ETH_TX_D      : out STD_LOGIC_VECTOR(1 downto 0);
            ETH_TX_EN     : out STD_LOGIC;
            ETH_RX_D      : in  STD_LOGIC_VECTOR(1 downto 0);
            ETH_RX_DV     : in  STD_LOGIC;
            ETH_RST       : out STD_LOGIC := '0';
            MDIO          : inout  STD_LOGIC;
            MDC           : out STD_LOGIC;
            LINK_LED      : in  STD_LOGIC;
            
            -- Pines Ethernet 1000mbps
            ETH_TXCK      : out STD_LOGIC;
            ETH_TXCTL     : out STD_LOGIC;
            ETH_TXD       : out STD_LOGIC_VECTOR(3 downto 0);
            ETH_RXCK      : in  STD_LOGIC;
            ETH_RXCTL     : in  STD_LOGIC;
            ETH_RXD       : in  STD_LOGIC_VECTOR(3 downto 0);
            ETH_RST_1G    : out STD_LOGIC := '1';
            ETH_MDC       : out STD_LOGIC;
            ETH_MDIO      : inout  STD_LOGIC;
            ETH_CLK_REF   : in STD_LOGIC;
--            PHY_INT       : in  STD_LOGIC;
            CONFIG        : out STD_LOGIC;
            
            -- Pines Debug
            LEDS            : out STD_LOGIC_VECTOR(2 downto 0);
            Serie_TX_1Gbps  : out STD_LOGIC;
            debug           : out STD_LOGIC_VECTOR(4 downto 0)
    );
end En_Head;

architecture Arq_Head of En_Head is

    COMPONENT Phasing_CLK_125MHz IS
    PORT(
            CLK_IN      : In  STD_LOGIC;
            CLK_OUT1    : out STD_LOGIC;
            CLK_OUT2    : out STD_LOGIC;
            locked 		: out STD_LOGIC;
            reset 		: In  STD_LOGIC
            );
    END COMPONENT;

    signal CLK_50MHz_IN : STD_LOGIC;
    signal Locked_50MHz : STD_LOGIC;
    signal Locked_125MHz : STD_LOGIC;
    signal Reset        : STD_LOGIC;
    
    signal Toggle       : STD_LOGIC;
    signal count        : NATURAL;

    --------------------------------
    -- Clocking signals 
    -------------------------------- 
    signal CLK_50MHz    : STD_LOGIC;
    signal clk125MHz   : std_logic;
    signal clk125MHz90 : std_logic; -- for the TX clock
    signal clkfb       : std_logic;
    
    signal sLEDS       : std_logic_vector(3 downto 0);
    signal Serie_Tx_100Mbps       : std_logic;
    signal Send_1Gbps       : std_logic;

BEGIN

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
        DIFF_TERM        => TRUE,    -- Differential Termination
        IBUF_LOW_PWR    => TRUE,    -- Low power (TRUE) vs. performance (FALSE) setting for referenced I/O standards
        IOSTANDARD        => "DEFAULT")
    port map (
        O  => CLK_50MHz_IN,
        I  => PLL_CLK_P,
        IB => PLL_CLK_N
    );

clocking : PLLE2_BASE
   generic map (
      BANDWIDTH          => "OPTIMIZED",
      CLKFBOUT_MULT      => 20,
      CLKFBOUT_PHASE     => 0.0,
      CLKIN1_PERIOD      => 20.0,

      -- CLKOUT0_DIVIDE - CLKOUT5_DIVIDE: Divide amount for each CLKOUT (1-128)
      CLKOUT0_DIVIDE     => 8,  CLKOUT1_DIVIDE     => 20, CLKOUT2_DIVIDE      => 40, 
      CLKOUT3_DIVIDE     => 8,  CLKOUT4_DIVIDE     => 16, CLKOUT5_DIVIDE      => 16,

      -- CLKOUT0_DUTY_CYCLE - CLKOUT5_DUTY_CYCLE: Duty cycle for each CLKOUT (0.001-0.999).
      CLKOUT0_DUTY_CYCLE => 0.5, CLKOUT1_DUTY_CYCLE => 0.5, CLKOUT2_DUTY_CYCLE => 0.5,
      CLKOUT3_DUTY_CYCLE => 0.5, CLKOUT4_DUTY_CYCLE => 0.5, CLKOUT5_DUTY_CYCLE => 0.5,

      -- CLKOUT0_PHASE - CLKOUT5_PHASE: Phase offset for each CLKOUT (-360.000-360.000).
      CLKOUT0_PHASE      =>    0.0, CLKOUT1_PHASE      => 0.0, CLKOUT2_PHASE      => 0.0,
      --CLKOUT3_PHASE      => -270.0, CLKOUT4_PHASE      => 0.0, CLKOUT5_PHASE      => 0.0,
      CLKOUT3_PHASE      => 90.0, CLKOUT4_PHASE      => 0.0, CLKOUT5_PHASE      => 0.0,

      DIVCLK_DIVIDE      => 1,
      REF_JITTER1        => 0.0,
      STARTUP_WAIT       => "FALSE"
   )
   port map (
      CLKIN1   => CLK_50MHz_IN,
      CLKOUT0 => open,--CLK125MHz,   
      CLKOUT1 => CLK_50MHz,  CLKOUT2 => open,  
      CLKOUT3 => open,--CLK125MHz90, 
      CLKOUT4 => open,       CLKOUT5 => open,
      LOCKED   => Locked_50MHz,
      PWRDWN   => '0', 
      RST      => '0',
      CLKFBOUT => clkfb,
      CLKFBIN  => clkfb
   );

--Ins_Phased_125MHz: Phasing_CLK_125MHz
--   port map (
--       CLK_IN   => ETH_CLK_REF,
--       CLK_OUT1 => CLK125MHz,  
--       CLK_OUT2 => CLK125MHz90,
--       LOCKED   => Locked_125MHz, 
--       Reset    => '0'
--    );

   BUFG_inst : BUFG
   port map (
      O => CLK125MHz, -- 1-bit output: Clock output
      I => ETH_CLK_REF  -- 1-bit input: Clock input
   );
  CLK125MHz90 <= CLK125MHz;

   Reset <= not Locked_50MHz;-- or not Locked_125MHz;
   
   --ETH_CLK_REF <= CLK125MHz;
   
    -- Instancio Ethernet 10/100Mbps
    Ins_ETH_100mbps: entity work.En_ETH_100mbps(Arq_ETH_100mbps)
    port map (
        CLK_50MHz   => CLK_50MHz,
        Reset       => Reset,
        ETH_TX_D    => ETH_TX_D,
        ETH_TX_EN   => ETH_TX_EN,
        ETH_RX_D    => ETH_RX_D,
        ETH_RX_DV   => ETH_RX_DV,
        ETH_RST     => ETH_RST,
        MDIO        => MDIO,
        MDC         => MDC,
        Serie_Tx    => Serie_Tx_100Mbps
    );

    -- Instancio Ethernet 1000Mbps
    Ins_ETH_1000mbps: entity work.En_ETH_1000mbps(Arq_ETH_1000mbps)
    port map (
        CLK_50MHz   => CLK_50MHz,
        CLK125MHz   => CLK125MHz,
        CLK125MHz90 => CLK125MHz90,
        Reset       => Reset, 
        Send        => Send_1Gbps,
        switches    => "0000",
        leds        => sLEDS,
        eth_rst_b   => ETH_RST_1G,
        eth_mdc     => ETH_MDC,
        eth_mdio    => ETH_MDIO,
        eth_rxck    => ETH_RXCK,
        eth_rxctl   => ETH_RXCTL,
        eth_rxd     => ETH_RXD,
        eth_txck    => ETH_TXCK,
        eth_txctl   => ETH_TXCTL,
        eth_txd     => ETH_TXD,
        Serie_TX    => Serie_TX_1Gbps,
        debug       => debug
    );

    CONFIG <= '0';

    process
    begin
        if Reset = '1' then
            count <= 0;
        elsif falling_edge(CLK125MHz) then
            Send_1Gbps <= '0';
            if count = 125000000 then
                Send_1Gbps <= '1';
                Toggle <= not Toggle;
                count <= 0;
            elsif CLK125MHz90 = '1' then
                count <= count + 1;
            end if;
        end if;
    end process;
    
    ETH_LED1    <= not LINK_LED;
    ETH_LED2    <= Toggle;--ETH_RX_DV;
    
    LEDS        <= sLEDS(2) & Serie_Tx_100Mbps & sLEDS(1);

end Arq_Head;