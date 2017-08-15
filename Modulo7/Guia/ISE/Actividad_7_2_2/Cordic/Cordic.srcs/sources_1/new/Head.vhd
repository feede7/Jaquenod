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
    Port ( CLK : in STD_LOGIC;
           RST : in STD_LOGIC;
           X0  : in STD_LOGIC_VECTOR(19 downto 0);
           Y0  : in STD_LOGIC_VECTOR(19 downto 0);
           Z0  : in STD_LOGIC_VECTOR(19 downto 0);
           Z1  : in STD_LOGIC_VECTOR(19 downto 0);
           X1  : out STD_LOGIC_VECTOR(19 downto 0);
           Y1  : out STD_LOGIC_VECTOR(19 downto 0);
           salida : out STD_LOGIC_VECTOR(19 DOWNTO 0)
    );
end En_Head;

architecture Arq_Behavioral of En_Head is

component dist_mem_gen_0 IS
  PORT (
    a : IN STD_LOGIC_VECTOR(4 downto 0);
    spo : OUT STD_LOGIC_VECTOR(19 downto 0)
  );
  end component;
  
  signal ang : STD_LOGIC_VECTOR(4 downto 0);
begin

    -- ROM con valores de arctan(2^-i)
    -- Lo generé con los siguientes comandos en Matlab
    -- ang = 0:1:19;
    -- ang = 2.^(-ang)
    -- dec2hex(round(atan(ang)*500000))
    --5FDFB,38990,1DE79,0F2E1,079E9,03D04,01E84,00F42,007A1,003D1,001E8,000F4,0007A,0003D,0001F,0000F,00008,00004,00002,00001
    arctan : dist_mem_gen_0
      PORT MAP(
        a   => ang,
        spo => salida
      );

    -- Z0 = arctan(Y0/X0)
    process(CLK,RST)
    begin
        if RST = '1' then
            ang <= (others=>'1');
        elsif rising_edge(CLK) then
            ang <= STD_LOGIC_VECTOR(unsigned(ang) + to_unsigned(1,ang'length));
        end if;
    end process;
    
end Arq_Behavioral;
