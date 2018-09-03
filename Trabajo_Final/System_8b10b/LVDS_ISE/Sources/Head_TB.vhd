-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY Head_TB IS
  END Head_TB;

  ARCHITECTURE behavior OF Head_TB IS 

  -- Component Declaration
    component En_Head is
    Port (
        CLK     	: in  STD_LOGIC;
        RST     	: in  STD_LOGIC;
        Dato_In  	: in  STD_LOGIC_VECTOR(63 downto 0);
        Dato_Out 	: out STD_LOGIC_VECTOR(63 downto 0);
        Next_Data	: out STD_LOGIC;
        Ready_Rx  : out STD_LOGIC;
        SeisCeros	: out STD_LOGIC;
        SeisUnos 	: out STD_LOGIC
    );
    end component;

    signal Dato_In : unsigned(63 downto 0) := to_unsigned((16**7),64);
    signal Dato_Out : STD_LOGIC_VECTOR(63 downto 0);

    signal clk_aux_1 : std_logic := '0';
    constant OSC1_Period : time := 2 ps;

    signal RST : std_logic := '1';
    signal Next_data : std_logic;     

	 signal Counter_Reset : Natural := 0;
    signal equal : std_logic;    
	 
    signal Ready_Rx : std_logic;  
	 
    signal SeisCeros : std_logic;  
    signal SeisUnos : std_logic;  

	constant SUMA : unsigned := to_unsigned(16**7+443535,64);

  BEGIN

   -- Clock process definitions
   aux1_process :process
   begin
		clk_aux_1 <= '0';
		wait for OSC1_Period/2;
		clk_aux_1 <= '1';
		wait for OSC1_Period/2;
   end process;
	
  -- Component Instantiation
    Ins_Head: En_Head
    port map(
        CLK  		=> clk_aux_1,
        RST    	=> RST,--Data_In,
        Dato_In   => STD_LOGIC_VECTOR(Dato_In),
        Dato_Out  => Dato_Out,
        Next_data	=> Next_data,
		  Ready_Rx	=> Ready_Rx,
		  SeisCeros	=> SeisCeros,
		  SeisUnos 	=> SeisUnos
    );

	Dato_In <= Dato_In + unsigned(STD_LOGIC_VECTOR(SUMA(SUMA'high-16 downto 0)) & x"0000") when rising_edge(Next_data);
	Counter_Reset <= Counter_Reset + 1 when rising_edge(clk_aux_1);
	RST <= '1' when Counter_Reset < 10 and RST = '1' else '0';

	equal <= '1' when signed('0' & STD_LOGIC_VECTOR(Dato_In)) - signed('0' & Dato_Out) /= signed('0' & STD_LOGIC_VECTOR(SUMA(SUMA'high-16 downto 0)) & x"0000") and Ready_Rx = '1' else '0';
  END;