----------------------------------------------------------------------------------
-- Engineer: Mike Field <hamster@snap.net.nz>
-- 
-- Description: Data for sending an empty UDP packet out over the MII interface.
--              "user_data" is asserted where you should replace 'byte' with 
--              data that you wish to send.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity byte_data is
    Port ( clk         : in  STD_LOGIC;
           start       : in  STD_LOGIC;
           advance     : in  STD_LOGIC;
           busy        : out STD_LOGIC := '0';
           new_frame   : out STD_LOGIC := '0';
           
           data        : out STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
           data_valid  : out STD_LOGIC                     := '0';
           data_enable : out STD_LOGIC                     := '0');
end byte_data;

architecture Behavioral of byte_data is
    constant ip_header_bytes   : integer := 20;
    constant udp_header_bytes  : integer := 8;
    constant data_bytes        : integer := 16+1024;
    constant ip_total_bytes    : integer := ip_header_bytes + udp_header_bytes + data_bytes;
    constant udp_total_bytes   : integer := udp_header_bytes + data_bytes;
    signal start_internal      : std_logic := '0';
    signal counter : unsigned(11 downto 0) := (others => '0');
    
    
    -- Ethernet frame header 
    Constant	Value_Preamble					:		STD_LOGIC_VECTOR(63 downto 0):= x"55555555555555D5";
    signal eth_src_mac       : std_logic_vector(47 downto 0) := x"50f0cad0caca";
    signal eth_dst_mac       : std_logic_vector(47 downto 0) := x"74d43558f21c";
    signal eth_type          : std_logic_vector(15 downto 0) := x"0800";

    Constant	Value_Protocol				: STD_LOGIC_VECTOR(15 downto 0):= x"0800";
    Constant	Constant_UDP_Version		: STD_LOGIC_VECTOR(95 downto 0) := x"4500007F2646000080114960";
    Constant	Constant_UDP_CheckSum		: STD_LOGIC_VECTOR(15 downto 0) := x"9999";

    -- IP header
    signal ip_version        : std_logic_vector( 3 downto 0) := x"4";
    signal ip_header_len     : std_logic_vector( 3 downto 0) := x"5";
    signal ip_dscp_ecn       : std_logic_vector( 7 downto 0) := x"00";
    signal ip_identification : std_logic_vector(15 downto 0) := x"0000";     -- Checksum is optional
    signal ip_length         : std_logic_vector(15 downto 0) := std_logic_vector(to_unsigned(ip_total_bytes, 16));
    signal ip_flags_and_frag : std_logic_vector(15 downto 0) := x"0000";     -- no flags48 bytes
    signal ip_ttl            : std_logic_vector( 7 downto 0)  := x"80";
    signal ip_protocol       : std_logic_vector( 7 downto 0)  := x"11";
    signal ip_checksum       : std_logic_vector(15 downto 0) := x"0000";   -- Calcuated later on
    
    signal ip_src_addr       : std_logic_vector(31 downto 0) := x"0A2A0001";--x"C0A40140"; -- 192.168.1.64
    signal ip_dst_addr       : std_logic_vector(31 downto 0) := x"C0A80101";--x"FFFFFFFF"; -- 255.255.255.255
    -- for calculating the checksum 
    signal ip_checksum1     : unsigned(31 downto 0) := (others => '0');
    signal ip_checksum2     : unsigned(15 downto 0) := (others => '0');
    
    -- UDP Header
    signal udp_src_port      : std_logic_vector(15 downto 0) := x"1000";     -- port 4096
    signal udp_dst_port      : std_logic_vector(15 downto 0) := x"1000";     -- port 4096
    --signal udp_length        : std_logic_vector(15 downto 0) := std_logic_vector(to_unsigned(udp_total_bytes, 16)); 
    signal udp_length        : std_logic_vector(15 downto 0) := std_logic_vector(to_unsigned(107, 16)); 
    signal udp_checksum      : std_logic_vector(15 downto 0) := x"0000";     -- Checksum is optional, and if present includes the data
begin
   ----------------------------------------------
   -- Calculate the TCP checksum using logic
   -- This should all collapse down to a constant
   -- at build-time (example was found on the web)
   -----------------------------------------------
   --- Step 1) 4500 + 0030 + 4422 + 4000 + 8006 + 0000 + (0410 + 8A0C + FFFF + FFFF) = 0002BBCF (32-bit sum)
   ip_checksum1 <= to_unsigned(0,32) 
                 + unsigned(ip_version & ip_header_len & ip_dscp_ecn)
                 + unsigned(ip_identification)
                 + unsigned(ip_length)
                 + unsigned(ip_flags_and_frag)
                 + unsigned(ip_ttl & ip_protocol)
                 + unsigned(ip_src_addr(31 downto 16))
                 + unsigned(ip_src_addr(15 downto  0))
                 + unsigned(ip_dst_addr(31 downto 16))
                 + unsigned(ip_dst_addr(15 downto  0));
   -- Step 2) 0002 + BBCF = BBD1 = 1011101111010001 (1's complement 16-bit sum, formed by "end around carry" of 32-bit 2's complement sum)
   ip_checksum2 <= ip_checksum1(31 downto 16) + ip_checksum1(15 downto 0);
   -- Step 3) ~BBD1 = 0100010000101110 = 442E (1's complement of 1's complement 16-bit sum)
   ip_checksum  <= NOT std_logic_vector(ip_checksum2);

   data_enable <= '1';

generate_nibbles: process (clk) 
    begin
        if rising_edge(clk) then
            -- Update the counter of where we are 
            -- in the packet
            if start = '1' then           
                start_internal <= '1';
            end if;
  
  --          data_enable <= '0';
  --          if advance = '1' then
  --              data_enable <= '1';
                if counter = 0 then
                    if start_internal = '1' or start = '1' then
                        counter         <= counter + 1;
                        start_internal  <= start;
                    end if;
                else
                    counter <= counter + 1;
                end if;            
  --          end if;
            
            -- Note, this uses the current value of counter, not the one assigned above!
            data <= "00000000";
            busy <= '0';
            case counter is 
              -- We pause at 0 count when idle (see below case statement)
              when x"000" => NULL;
              -----------------------------
              -- MAC Header 
              -----------------------------
              -- Preamble
              when x"001" => data <= Value_Preamble(63 downto 56); busy <= '1';
--              when x"002" => data <= Value_Preamble(55 downto 48);
--              when x"003" => data <= Value_Preamble(47 downto 40);
--              when x"004" => data <= Value_Preamble(39 downto 32);
--              when x"005" => data <= Value_Preamble(31 downto 24);
--              when x"006" => data <= Value_Preamble(23 downto 16);
--              when x"007" => data <= Value_Preamble(15 downto  8);
              when x"008" => data <= Value_Preamble( 7 downto  0); new_frame <= '1';

              -- Ethernet destination
              when x"009" => data <= eth_dst_mac(47 downto 40);new_frame <= '0'; data_valid <= '1';
              when x"00A" => data <= eth_dst_mac(39 downto 32);
              when x"00B" => data <= eth_dst_mac(31 downto 24);
              when x"00C" => data <= eth_dst_mac(23 downto 16);
              when x"00D" => data <= eth_dst_mac(15 downto  8);
              when x"00E" => data <= eth_dst_mac( 7 downto  0);
              -- Ethernet source
              when x"00F" => data <= eth_src_mac(47 downto 40);
              when x"010" => data <= eth_src_mac(39 downto 32);
              when x"011" => data <= eth_src_mac(31 downto 24);
              when x"012" => data <= eth_src_mac(23 downto 16);
              when x"013" => data <= eth_src_mac(15 downto  8);
              when x"014" => data <= eth_src_mac( 7 downto  0);
              -- Protocol Type
              when x"015" => data <= Value_Protocol(15 downto  8);
              when x"016" => data <= Value_Protocol( 7 downto  0);
              -- UDP Version
              when x"017" => data <= Constant_UDP_Version(95 downto  88);
              when x"018" => data <= Constant_UDP_Version(87 downto  80);
              when x"019" => data <= Constant_UDP_Version(79 downto  72);
              when x"01A" => data <= Constant_UDP_Version(71 downto  64);
              when x"01B" => data <= Constant_UDP_Version(63 downto  56);
              when x"01C" => data <= Constant_UDP_Version(55 downto  48);
              when x"01D" => data <= Constant_UDP_Version(47 downto  40);
              when x"01E" => data <= Constant_UDP_Version(39 downto  32);
              when x"01F" => data <= Constant_UDP_Version(31 downto  24);
              when x"020" => data <= Constant_UDP_Version(23 downto  16);
              when x"021" => data <= Constant_UDP_Version(15 downto   8);
              when x"022" => data <= Constant_UDP_Version( 7 downto   0);
              -- source address
              when x"023" => data <= ip_src_addr(31 downto 24);
              when x"024" => data <= ip_src_addr(23 downto 16);
              when x"025" => data <= ip_src_addr(15 downto  8);
              when x"026" => data <= ip_src_addr( 7 downto  0);
              -- dest address
              when x"027" => data <= ip_dst_addr(31 downto 24);
              when x"028" => data <= ip_dst_addr(23 downto 16);
              when x"029" => data <= ip_dst_addr(15 downto  8);
              when x"02A" => data <= ip_dst_addr( 7 downto  0);
              -- No options in this packet
              
              ------------------------------------------------
              -- UDP/IP Header - from port 4096 to port 4096
              ------------------------------------------------
              -- Source port 4096
              when x"02B" => data <= udp_src_port(15 downto  8);
              when x"02C" => data <= udp_src_port( 7 downto  0);
              -- Target port 4096
              when x"02D" => data <= udp_dst_port(15 downto  8);
              when x"02E" => data <= udp_dst_port( 7 downto  0);
              -- UDP Length (header + data) 24 octets
              when x"02F" => data <= udp_length(15 downto  8);
              when x"030" => data <= udp_length( 7 downto  0);
              -- UDP Checksum not suppled
              when x"031" => data <= Constant_UDP_CheckSum(15 downto  8);
              when x"032" => data <= Constant_UDP_CheckSum( 7 downto  0);
              --------------------------------------------
              -- Finally! 16 bytes of user data (defaults 
              -- to "0000" due to assignement above CASE).
              ---------------------------------------------
              when x"033" => data <= x"f1";
              when x"034" => NULL; 
              when x"035" => NULL; 
              when x"036" => NULL; 
              when x"037" => NULL; 
              when x"038" => NULL; 
              when x"039" => NULL; 
              when x"03A" => NULL; 
              when x"03B" => NULL; 
              when x"03C" => NULL; 
              when x"03D" => NULL; 
              when x"03E" => NULL; 
              when x"03F" => NULL; 
              when x"040" => NULL; 
              when x"041" => NULL; 
              when x"042" => NULL; 
              --------------------------------------------
              -- Ethernet Frame Check Sequence (CRC) will 
              -- be added here, overwriting these nibbles
              --------------------------------------------
              when x"095" => data_valid <= '0';
              when x"500" => counter <= (others => '0');
              --when x"43B" => data_valid <= '0'; data_user <= '0';
              --when x"43C" => NULL;
              --when x"43D" => NULL;
              --when x"43E" => NULL;
              ----------------------------------------------------------------------------------
              -- End of frame - there needs to be at least 20 octets before  sending 
              -- the next packet, (maybe more depending  on medium?) 12 are for the inter packet
              -- gap, 8 allow for the preamble that will be added to the start of this packet.
              --
              -- Note that when the count of 0000 adds one  more nibble, so if start is assigned 
              -- '1' this should be minimum that is  within spec.
              ----------------------------------------------------------------------------------
              --when x"451" => counter <= (others => '0'); busy  <= '0';
              --when x"452" => counter <= (others => '0'); busy  <= '0';
              when others => data <= "00000000";
            end case;
         end if;    
    end process;
end Behavioral;