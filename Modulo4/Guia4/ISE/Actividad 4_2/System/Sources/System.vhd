library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

Library UNISIM;
use UNISIM.vcomponents.all;

entity En_System is
    Port ( 
		Data_In 	: in  STD_LOGIC;
		Reloj		: in  STD_LOGIC;
		Reloj8x	: in  STD_LOGIC;
		SndSync	: in  STD_LOGIC;
		Reset		: in  STD_LOGIC;
		EnaTx		: out STD_LOGIC;
		EnaRx		: out STD_LOGIC;
		SyncRx	: out STD_LOGIC;
      Data_Out : out  STD_LOGIC;
		Reloj_Rec: out  STD_LOGIC);
end En_System;

architecture Arq_System of En_System is
	signal DataCoded 	: STD_LOGIC := '0';
begin

	Ins_Cod: entity work.En_Cod_Stuffing(Arq_Cod_Stuffing)
	PORT MAP(
		Datos 	=> Data_In,
      Reloj 	=> Reloj,
      SndSync 	=> SndSync,
      Reset	 	=> Reset,
      EnaTx 	=> EnaTx,
      DataOut 	=> DataCoded);

	Ins_Deco: entity work.En_Deco_Stuffing(Arq_Deco_Stuffing)
	PORT MAP(
		Reloj8x 	=> Reloj8x,
      Reset 	=> Reset,
      DataIn 	=> DataCoded,
      Datos	 	=> Data_Out,
      EnaRx 	=> EnaRx,
      Sync	 	=> SyncRx,
		Reloj_Rec=> Reloj_Rec,
		Error		=> open);
		
end Arq_System;