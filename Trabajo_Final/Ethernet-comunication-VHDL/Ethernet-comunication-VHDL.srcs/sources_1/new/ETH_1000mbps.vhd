----------------------------------------------------------------------------------
-- Engineer: Mike Field <hamster@snap.net.nz> 
-- 
-- Module Name: gigabit_test - Behavioral
-- 
-- Dependencies: Testing how Gigabit ethernet PHY transmits data. 
-- 
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

Library UNISIM;
use UNISIM.vcomponents.all;

entity En_ETH_1000mbps is
    Port ( CLK_50MHz : in    std_logic; -- system clock
           CLK125MHz   : in    std_logic; -- system clock
           CLK125MHz90 : in    std_logic; -- system clock
           switches  : in    std_logic_vector(3 downto 0);
           leds      : out   std_logic_vector(3 downto 0);
           
           -- Ethernet Control signals
           eth_rst_b : out   std_logic := '1'; -- reset
           -- Ethernet Management interface
           eth_mdc   : out   std_logic := '0'; 
           eth_mdio  : inout std_logic := '0';
           -- Ethernet Receive interface
           eth_rxck  : in    std_logic; 
           eth_rxctl : in    std_logic;
           eth_rxd   : in    std_logic_vector(3 downto 0);
           -- Ethernet Transmit interface
           eth_txck  : out   std_logic := '0';
           eth_txctl : out   std_logic := '0';
           eth_txd   : out   std_logic_vector(3 downto 0) := (others => '0')
    );
end En_ETH_1000mbps;

architecture Arq_ETH_1000mbps of En_ETH_1000mbps is
    signal max_count          : unsigned(26 downto 0)         := (others => '0');
    signal count              : unsigned(26 downto 0)         := (others => '0');
    signal speed              : STD_LOGIC_VECTOR (1 downto 0) := "11";
    signal adv_data           : STD_LOGIC := '0';
    signal CLK50MHz_buffered : STD_LOGIC := '0';

    signal de_count      : unsigned(6 downto 0)          := (others => '0');
    signal start_sending : std_logic                     := '0';
    signal reset_counter : unsigned(24 downto 0)         := (others => '0');
    signal debug         : STD_LOGIC_VECTOR (5 downto 0) := (others => '0');
    signal phy_ready     : std_logic                     := '0';
    signal user_data     : std_logic                     := '0';

    component byte_data is
        Port ( clk             : in STD_LOGIC;
               start           : in  STD_LOGIC;
               busy            : out STD_LOGIC;
               new_frame   : out STD_LOGIC;

               advance         : in  STD_LOGIC;               

               data            : out STD_LOGIC_VECTOR (7 downto 0);
               data_enable     : out STD_LOGIC;               
               data_valid      : out STD_LOGIC);
    end component;

    signal Value_CRC       : STD_LOGIC_VECTOR (31 downto 0);
    signal raw_data        : STD_LOGIC_VECTOR ( 7 downto 0) := (others => '0');
    signal raw_data_user   : std_logic                     := '0';
    signal raw_data_valid  : std_logic                     := '0';
    signal raw_data_enable : std_logic                     := '0';
    signal raw_busy        : std_logic                     := '0';
    signal raw_new_frame   : std_logic                     := '0';

    component add_crc32 is
        Port ( clk             : in  STD_LOGIC;
        
               data_in         : in  STD_LOGIC_VECTOR (7 downto 0);
               data_valid_in   : in  STD_LOGIC;
               data_enable_in  : in  STD_LOGIC;
               
               data_out        : out STD_LOGIC_VECTOR (7 downto 0);
               data_valid_out  : out STD_LOGIC;
               data_enable_out : out STD_LOGIC);
    end component;

    COMPONENT crc32_block IS
    PORT(   clk 		: In STD_LOGIC;
            rst 		: In STD_LOGIC;
            enable_s 	: In STD_LOGIC;
            newframe_s 	: In STD_LOGIC;
            data_crc_s 	: In STD_LOGIC_VECTOR(7 downto 0);          
            crc_s 		: Out STD_LOGIC_VECTOR(31 downto 0)
            );
    END COMPONENT;

    signal with_crc        : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal with_crc_valid  : std_logic                     := '0';
    signal with_crc_enable : std_logic                     := '0';
    
    component add_preamble is
        Port ( clk             : in  STD_LOGIC;

               data_in         : in  STD_LOGIC_VECTOR (7 downto 0);
               data_valid_in   : in  STD_LOGIC;
               data_enable_in  : in  STD_LOGIC;
               
               data_out        : out STD_LOGIC_VECTOR (7 downto 0);
               data_valid_out  : out STD_LOGIC;
               data_enable_out : out STD_LOGIC);
    end component;

    signal fully_framed        : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal fully_framed_valid  : std_logic                     := '0';
    signal fully_framed_enable : std_logic                     := '0';
    signal fully_framed_err    : std_logic                     := '0';

    component rgmii_tx is
    Port ( clk         : in STD_LOGIC;
           clk90       : in STD_LOGIC;
           phy_ready   : in STD_LOGIC;

           data        : in  STD_LOGIC_VECTOR (7 downto 0);
           data_valid  : in  STD_LOGIC;
           data_enable : in  STD_LOGIC;
           data_error  : in  STD_LOGIC;

           eth_txck    : out STD_LOGIC;
           eth_txctl   : out STD_LOGIC;
           eth_txd     : out STD_LOGIC_VECTOR (3 downto 0));
    end component;
    
    signal rx_fully_framed        : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal rx_fully_framed_valid  : std_logic                     := '0';
    signal rx_fully_framed_enable : std_logic                     := '0';
    signal rx_fully_framed_err    : std_logic                     := '0';

    component rgmii_rx is
    Port ( rx_clk           : in  STD_LOGIC;
           rx_ctl           : in  STD_LOGIC;
           rx_data          : in  STD_LOGIC_VECTOR (3 downto 0);
           link_10mb        : out STD_LOGIC;
           link_100mb       : out STD_LOGIC;
           link_1000mb      : out STD_LOGIC;
           link_full_duplex : out STD_LOGIC;
           data             : out STD_LOGIC_VECTOR (7 downto 0);
           data_valid       : out STD_LOGIC;
           data_enable      : out STD_LOGIC;
           data_error       : out STD_LOGIC);
    end component;
    signal link_10mb        : std_logic;
    signal link_100mb       : std_logic;
    signal link_1000mb      : std_logic;
    signal link_full_duplex : std_logic;
begin
   ---------------------------------------------------
    -- Strapping signals
    ----------------------------------------------------
    -- No pullups/pulldowns added
    -- eth_mdc <= '0';
     --eth_txer <= '0';
     --eth_int_n <= '0';
     --speed <= "11";
    eth_rst_b <= '1';

--    Instance_PHY_Manager : entity work.En_PHY_Manager(Arq_PHY_Manager)
--    PORT MAP( In_CLK_50			=> CLK_50MHz,	
--              Out_PHY_MDIO		=> ETH_MDIO,
--              Out_PHY_MDC		=> ETH_MDC,					
--              Out_IsActive		=> open
--       );
              
   ---------------------------------------------------
   -- Generate the timing signals for tri-mode
   -- operation (10/100/1000). The speed is set using
   -- switches 4 & 5
   ---------------------------------------------------
process(clk125Mhz)
    begin
        if rising_edge(clk125Mhz) then
            if de_count = 0 then
                adv_data <= '1';
            else
                adv_data <= '0';
            end if;

            case speed is 
                when "00" =>
                    de_count <= (others => '1');
                when "01" =>
                    if de_count > 98 then
                        de_count <= (others => '0');
                    else
                        de_count <= de_count + 1;
                    end if;
                when "10" =>
                    if de_count > 8 then
                        de_count <= (others => '0');
                    else
                        de_count <= de_count + 1;
                    end if;
                when others =>
                    de_count <= (others => '0');
            end case;
        end if;
    end process;
 
   ----------------------------------------------------
   -- Data for the packet packet 
   ----------------------------------------------------
data: byte_data port map ( 
      clk        => clk125MHz,
      start       => start_sending,
      advance     => adv_data,
      busy        => raw_busy,
      new_frame   => raw_new_frame,
      data        => raw_data,
      data_enable => raw_data_enable,
      Data_valid  => raw_data_valid);

--i_add_crc32: add_crc32 port map (
--      clk             => clk125MHz,
--      data_in         => raw_data,
--      data_valid_in   => raw_data_valid,
--      data_enable_in  => raw_data_enable,
--      data_out        => with_crc,
--      data_valid_out  => with_crc_valid,
--      data_enable_out => with_crc_enable);

    Instance_CRC : crc32_block PORT MAP (   
            clk 		=> '0',
            rst 		=> raw_busy,
            enable_s 	=> raw_data_enable,
            newframe_s 	=> raw_new_frame,
            data_crc_s 	=> with_crc,
            crc_s 		=> Value_CRC
        );
               
i_add_preamble: add_preamble port map (
      clk             => clk125MHz,
      data_in         => with_crc,
      data_valid_in   => with_crc_valid,
      data_enable_in  => raw_data_enable,
      data_out        => fully_framed,
      data_valid_out  => fully_framed_valid,
      data_enable_out => fully_framed_enable);

i_rgmii_tx:    rgmii_tx port map (
      clk         => clk125MHz,
      clk90       => clk125MHz90,
      phy_ready   => '1', --phy_ready,

      data        => fully_framed,
      data_valid  => fully_framed_valid,
      data_enable => fully_framed_enable,
      data_error  => '0',

      eth_txck    => eth_txck, 
      eth_txctl   => eth_txctl,
      eth_txd     => eth_txd);

    ----------------------------------------
    -- Control reseting the PHY
    ----------------------------------------
control_reset: process(clk125MHz)
    begin
       if rising_edge(clk125MHz) then           
          if reset_counter(reset_counter'high) = '0' then
              reset_counter <= reset_counter + 1;
          end if; 
          --eth_rst_b <= reset_counter(reset_counter'high) or reset_counter(reset_counter'high-1);
          phy_ready  <= reset_counter(reset_counter'high);
       end if;
    end process;
----------------------------------------------------------------------
-- The receive path
----------------------------------------------------------------------
i_rgmii_rx: rgmii_rx port map (
       rx_clk           => eth_rxck,
       rx_ctl           => eth_rxctl,
       rx_data          => eth_rxd,
       link_10mb        => link_10mb,
       link_100mb       => link_100mb,
       link_1000mb      => link_1000mb,
       link_full_duplex => link_full_duplex,
       data             => rx_fully_framed,
       data_valid       => rx_fully_framed_valid,
       data_enable      => rx_fully_framed_enable,
       data_error       => rx_fully_framed_err
       );
       
       leds(0) <= link_10mb;
       leds(1) <= link_100mb;
       leds(2) <= link_1000mb;
       leds(3) <= link_full_duplex;
       
choose_tx_speed: process(clk125MHz)
    begin
        if rising_edge(clk125MHz) then
            if link_1000mb = '1' then
                speed <= "11";
            elsif link_100mb = '1' then
                speed <= "10"; 
            elsif link_10mb = '1' then
                speed <= "01"; 
            end if;
        end if;
    end process;    



 when_to_send: process(clk125MHz) 
    begin  
        if rising_edge(clk125MHz) then
            case switches(3 downto 0) is
                when "0000" => max_count <= to_unsigned(124_999_999,27);  -- 1 packet per second
                when "0001" => max_count <= to_unsigned( 62_499_999,27);  -- 2 packet per second
                when "0010" => max_count <= to_unsigned( 12_499_999,27);  -- 10 packets per second 
                when "0011" => max_count <= to_unsigned(  6_249_999,27);  -- 20 packet per second
                when "0100" => max_count <= to_unsigned(  2_499_999,27);  -- 50 packets per second 
                when "0101" => max_count <= to_unsigned(  1_249_999,27);  -- 100 packets per second
                when "0110" => max_count <= to_unsigned(    624_999,27);  -- 200 packets per second 
                when "0111" => max_count <= to_unsigned(    249_999,27);  -- 500 packets per second 
                when "1000" => max_count <= to_unsigned(    124_999,27);  -- 1000 packets per second 
                when "1001" => max_count <= to_unsigned(     62_499,27);  -- 2000 packets per second 
                when "1010" => max_count <= to_unsigned(     24_999,27);  -- 5000 packets per second 
                when "1011" => max_count <= to_unsigned(     12_499,27);  -- 10,000 packests per second 
                when "1100" => max_count <= to_unsigned(      6_249,27);  -- 20,000 packets per second
                when "1101" => max_count <= to_unsigned(      2_499,27);  -- 50,000 packets per second 
                when "1110" => max_count <= to_unsigned(      1_249,27);  -- 100,000 packets per second
                when others => max_count <= to_unsigned(          0,27);  -- as fast as possible 152,439 packets
            end case;

            if count = max_count then
                count <= (others => '0');
                start_sending <= '1';
            else
                count <= count + 1;
                start_sending <= '0';
            end if;
        end if;
    end process;

end Arq_ETH_1000mbps;