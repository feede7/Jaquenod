library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

--use IEEE.NUMERIC_STD.ALL;

--library UNISIM;
--use UNISIM.VComponents.all;

entity En_Head is
    Port ( CLKA : in  STD_LOGIC;
           CLKB : in  STD_LOGIC;
           RSTA : in  STD_LOGIC;
           RSTB : in  STD_LOGIC;
           SNDA : in  STD_LOGIC;
           SNDB : in  STD_LOGIC;
           RDYA : out  STD_LOGIC;
           RDYB : out  STD_LOGIC
			  );
end En_Head;

architecture Arq_Head of En_Head is

	signal RDA, RDB : STD_LOGIC; -- Clear To Send. Si está en alto es porque está habilitado para enviar
	signal TDA, TDB : STD_LOGIC; -- Clear To Send. Si está en alto es porque está habilitado para enviar
	signal RTSA, RTSB : STD_LOGIC; -- Clear To Send. Si está en alto es porque está habilitado para enviar
	signal CTSA, CTSB : STD_LOGIC; -- Clear To Send. Si está en alto es porque está habilitado para enviar
	signal DSRA, DSRB : STD_LOGIC; -- Data Terminal Ready. En estado alto significa que es estableció el link de sistemas
	signal DTRA, DTRB : STD_LOGIC; -- Data Terminal Ready. En estado alto significa que es estableció el link de sistemas
		
begin

--	Handshaking por hardware: El segundo método de handshaking utiliza líneas de 
--	hardware. De manera similar a las líneas Tx y Rx, las líneas RTS/CTS y DTR/DSR 
--	trabajan de manera conjunta siendo un par la entrada y el otro par la salida. 
--	El primer par de líneas es RTS (por sus siglas en inglés, Request to Send) y 
--	CTS (Clear to Send). Cuando el receptor está listo para recibir datos, cambia 
--	la línea RTS a estado alto; este valor será leído por el transmisor en la línea 
--	CTS, indicando que está libre para enviar datos. El siguiente par de líneas es 
--	DTR (por sus siglas en inglés, Data Terminal Ready) y DSR (Data Set Ready). 
--	Estas líneas se utilizan principalmente para comunicación por modem, permiten 
--	al puerto serial y modem indicarse mutuamente su estado. Por ejemplo, cuando el 
--	modem se encuentra preparado para que la PC envíe datos, cambia la línea DTR a 
--	estado alto indicando que se ha realizado una conexión por la línea de teléfono. 
--	Este valor se lee a través de la línea DSR y la PC comienza a enviar datos. 
--	Como regla general, las líneas DTR/DSR se utilizan para indicar que el sistema 
--	está listo para la comunicación, mientras que las líneas RTS/CTS se utilizan 
--	para paquetes individuales de datos.
--
-- Cuando la PC envía datos:
-- La librería de RS-232 debe de detectar que la línea CTS se encuentra en estado alto 
-- antes de enviar datos.
--
-- Cuando la PC recibe datos:
-- Si el puerto está abierto y el búfer de entrada puede contener más datos, la líbrería 
-- envía a RTS y DTR a estado alto.
-- Si el búfer de entrada está al 90% de su capacidad, la librería manda a estado bajo 
-- RTS pero mantiene DTR en alto.
-- Si el búfer de entrada está casi vacío, la librería manda a estado alto RTS y mantiene 
-- DTR en alto.
-- Si el puerto se cierra, la librería manda a estado bajo a RTS y DTR.

	INS_SYS_A: entity work.En_System(Arq_System)
	PORT MAP(
		CLK => CLKA,
		RST => RSTA,
		SND => SNDA,
		Data_In => (others => '0'),
		RDY => RDYA,
		Data_Out => open,
		TD  => RDB, -- Pin de transmisión
		RD  => TDB, -- Pin de recepción
		RTS => CTSB, -- Request To Send. Avisa que está listo para recibir
		CTS => RTSB, -- Clear To Send. Si está en alto es porque está habilitado para enviar
		DTR => DSRB, -- Data Terminal Ready. En estado alto significa que es estableció el link de sistemas
		DSR => DTRB -- Data Set Ready
	);

	INS_SYS_B: entity work.En_System(Arq_System)
	PORT MAP(
		CLK => CLKB,
		RST => RSTB,
		SND => SNDB,
		Data_In => (others => '0'),
		RDY => RDYB,
		Data_Out => open,
		TD  => RDA, -- Pin de transmisión
		RD  => TDA, -- Pin de recepción
		RTS => CTSA, -- Request To Send. Avisa que está listo para recibir
		CTS => RTSA, -- Clear To Send. Si está en alto es porque está habilitado para enviar
		DTR => DSRA, -- Data Terminal Ready. En estado alto significa que es estableció el link de sistemas
		DSR => DTRA -- Data Set Ready
	);

end Arq_Head;