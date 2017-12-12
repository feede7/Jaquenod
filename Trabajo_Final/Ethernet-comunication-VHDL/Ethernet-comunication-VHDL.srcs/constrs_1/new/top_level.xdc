set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]

# Internos del SOM
#set_property PACKAGE_PIN B2   [get_ports PLL_INT];			set_property IOSTANDARD DIFF_SSTL15 [get_ports PLL_INT];		# TE0712 = PLL_INT		KIT ARTIX = Interna SOM
set_property PACKAGE_PIN G4   [get_ports PLL_CLK_N];		set_property IOSTANDARD DIFF_SSTL15 [get_ports PLL_CLK_N]; 		# TE0712 = PLL_CLK_N	KIT ARTIX = Interna SOM
set_property PACKAGE_PIN H4   [get_ports PLL_CLK_P];		set_property IOSTANDARD DIFF_SSTL15 [get_ports PLL_CLK_P]; 		# TE0712 = PLL_CLK_P	KIT ARTIX = Interna SOM
#NO EXISTE EN RV01 set_property PACKAGE_PIN J4   [get_ports CLK0_N];			set_property IOSTANDARD LVCMOS25 [get_ports CLK0_N]; 			# TE0712 = CLK0_N		KIT ARTIX = Interna SOM
#NO EXISTE EN RV01 set_property PACKAGE_PIN K4   [get_ports CLK0_P];			set_property IOSTANDARD LVCMOS25 [get_ports CLK0_P]; 			# TE0712 = CLK0_P		KIT ARTIX = Interna SOM
#NO EXISTE EN RV01 set_property PACKAGE_PIN R4   [get_ports CLK50M2];			set_property IOSTANDARD LVCMOS25 [get_ports CLK50M2]; 			# TE0712 = CLK50M2		KIT ARTIX = Interna SOM
#set_property PACKAGE_PIN T20  [get_ports PLL_SDA];			set_property IOSTANDARD LVCMOS25 [get_ports PLL_SDA]; 			# TE0712 = PLL_SDA		KIT ARTIX = Interna SOM
#set_property PACKAGE_PIN U22  [get_ports FPGA_IO];			set_property IOSTANDARD LVCMOS25 [get_ports FPGA_IO]; 			# TE0712 = FPGA_IO		KIT ARTIX = Interna SOM
#set_property PACKAGE_PIN V22  [get_ports ONEWIRE];			set_property IOSTANDARD LVCMOS25 [get_ports ONEWIRE]; 			# TE0712 = ONEWIRE		KIT ARTIX = Interna SOM
#set_property PACKAGE_PIN W21  [get_ports PLL_SCL];			set_property IOSTANDARD LVCMOS25 [get_ports PLL_SCL]; 			# TE0712 = PLL_SCL		KIT ARTIX = Interna SOM
#set_property PACKAGE_PIN W22  [get_ports ULI_SYSTEM];		set_property IOSTANDARD LVCMOS25 [get_ports ULI_SYSTEM]; 		# TE0712 = ULI_SYSTEM	KIT ARTIX = Interna SOM
set_property PACKAGE_PIN P21  [get_ports SPI_IO2];			set_property IOSTANDARD LVCMOS25 [get_ports SPI_IO2]; 			# TE0712 = spi_io_2		KIT ARTIX = Interna SOM
set_property PACKAGE_PIN P22  [get_ports SPI_MOSI];			set_property IOSTANDARD LVCMOS25 [get_ports SPI_MOSI]; 			# TE0712 = spi_io_0		KIT ARTIX = Interna SOM
set_property PACKAGE_PIN R21  [get_ports SPI_IO1];			set_property IOSTANDARD LVCMOS25 [get_ports SPI_IO1]; 			# TE0712 = spi_io_3		KIT ARTIX = Interna SOM
set_property PACKAGE_PIN R22  [get_ports SPI_MISO];			set_property IOSTANDARD LVCMOS25 [get_ports SPI_MISO]; 			# TE0712 = spi_io_1		KIT ARTIX = Interna SOM
set_property PACKAGE_PIN T19  [get_ports SPI_CS];			set_property IOSTANDARD LVCMOS25 [get_ports SPI_CS]; 			# TE0712 = spi_ss		KIT ARTIX = Interna SOM

# Internos de Ethernet
set_property PACKAGE_PIN P14  [get_ports {ETH_TX_D[0]}];    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_TX_D[0]}]; 		 # TE0712 = ETH_TX_D0	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN P15  [get_ports {ETH_TX_D[1]}];    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_TX_D[1]}]; 		 # TE0712 = ETH_TX_D1	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN R14  [get_ports ETH_TX_EN];	    set_property IOSTANDARD LVCMOS25 [get_ports ETH_TX_EN]; 		 # TE0712 = ETH_TX_EN	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN N13  [get_ports {ETH_RX_D[0]}];    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_RX_D[0]}]; 		 # TE0712 = ETH_RX_D0	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN N14  [get_ports {ETH_RX_D[1]}];    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_RX_D[1]}]; 		 # TE0712 = ETH_RX_D1	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN P20  [get_ports ETH_RX_DV];	    set_property IOSTANDARD LVCMOS25 [get_ports ETH_RX_DV]; 		 # TE0712 = ETH_RX_DV	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN N17  [get_ports ETH_RST];	        set_property IOSTANDARD LVCMOS25 [get_ports ETH_RST];    		 # TE0712 = ETH_RST   	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN P17  [get_ports MDIO];	            set_property IOSTANDARD LVCMOS25 [get_ports MDIO];    		     # TE0712 = MDIO      	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN R16  [get_ports MDC];	            set_property IOSTANDARD LVCMOS25 [get_ports MDC];    		     # TE0712 = MDC      	KIT ARTIX = Interna SOM Ethernet
set_property PACKAGE_PIN N15  [get_ports LINK_LED];		    set_property IOSTANDARD LVCMOS25 [get_ports LINK_LED]; 		     # TE0712 = LINK_LED	KIT ARTIX = Interna SOM Ethernet

#JB1
#set_property PACKAGE_PIN Y14 [get_ports {LVDS_SP3_N[16]}];      set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[16]}];  # TE0712 = B13_L6_N - KIT ARTIX = JB1-15
#set_property PACKAGE_PIN W14 [get_ports {LVDS_SP3_P[16]}];      set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[16]}];  # TE0712 = B13_L6_P - KIT ARTIX = JB1-17
#set_property PACKAGE_PIN AA13 [get_ports {LVDS_SP3_P[21]}];     set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[21]}];  # TE0712 = B13_L3_P - KIT ARTIX = JB1-18
#set_property PACKAGE_PIN AB13 [get_ports {LVDS_SP3_N[21]}];     set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[21]}];  # TE0712 = B13_L3_N - KIT ARTIX = JB1-20
#set_property PACKAGE_PIN AA14 [get_ports {LVDS_SP3_N[14]}];     set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[14]}];  # TE0712 = B13_L5_N - KIT ARTIX = JB1-21
#set_property PACKAGE_PIN Y12 [get_ports {LVDS_SP3_N[15]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[15]}];  # TE0712 = B13_L11_N - KIT ARTIX = JB1-22
#set_property PACKAGE_PIN Y13 [get_ports {LVDS_SP3_P[14]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[14]}];  # TE0712 = B13_L5_P - KIT ARTIX = JB1-23
#set_property PACKAGE_PIN Y11 [get_ports {LVDS_SP3_P[15]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[15]}];  # TE0712 = B13_L11_P - KIT ARTIX = JB1-24
#set_property PACKAGE_PIN AA11 [get_ports {LVDS_SP3_N[8]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[8]}];  # TE0712 = B13_L9_N - KIT ARTIX = JB1-26
#set_property PACKAGE_PIN AA10 [get_ports {LVDS_SP3_P[8]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[8]}];  # TE0712 = B13_L9_P - KIT ARTIX = JB1-28
#set_property PACKAGE_PIN E22 [get_ports {LVDS_SP3_P[22]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[22]}];  # TE0712 = B16_L22_P - KIT ARTIX = JB1-32
#set_property PACKAGE_PIN D22 [get_ports {LVDS_SP3_N[22]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[22]}];  # TE0712 = B16_L22_N - KIT ARTIX = JB1-34
#set_property PACKAGE_PIN B20 [get_ports {LVDS_SP3_P[23]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[23]}];  # TE0712 = B16_L16_P - KIT ARTIX = JB1-35
#set_property PACKAGE_PIN G22 [get_ports {LVDS_SP3_N[6]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[6]}];  # TE0712 = B16_L24_N - KIT ARTIX = JB1-36
#set_property PACKAGE_PIN A20 [get_ports {LVDS_SP3_N[23]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[23]}];  # TE0712 = B16_L16_N - KIT ARTIX = JB1-37
#set_property PACKAGE_PIN G21 [get_ports {LVDS_SP3_P[6]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[6]}];  # TE0712 = B16_L24_P - KIT ARTIX = JB1-38
#set_property PACKAGE_PIN C20 [get_ports {LVDS_SP3_N[13]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[13]}];  # TE0712 = B16_L19_N - KIT ARTIX = JB1-39
#set_property PACKAGE_PIN D20 [get_ports {LVDS_SP3_P[13]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[13]}];  # TE0712 = B16_L19_P - KIT ARTIX = JB1-41
#set_property PACKAGE_PIN E21 [get_ports {LVDS_SP3_P[24]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[24]}];  # TE0712 = B16_L23_P - KIT ARTIX = JB1-42
#set_property PACKAGE_PIN D21 [get_ports {LVDS_SP3_N[24]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[24]}];  # TE0712 = B16_L23_N - KIT ARTIX = JB1-44
#set_property PACKAGE_PIN A19 [get_ports {LVDS_SP3_N[7]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[7]}];  # TE0712 = B16_L17_N - KIT ARTIX = JB1-45
#set_property PACKAGE_PIN F18 [get_ports {LVDS_SP3_P[47]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[47]}];  # TE0712 = B16_L15_P - KIT ARTIX = JB1-46
#set_property PACKAGE_PIN A18 [get_ports {LVDS_SP3_P[7]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[7]}];  # TE0712 = B16_L17_P - KIT ARTIX = JB1-47
#set_property PACKAGE_PIN E18 [get_ports {LVDS_SP3_N[47]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[47]}];  # TE0712 = B16_L15_N - KIT ARTIX = JB1-48
#set_property PACKAGE_PIN F20 [get_ports {LVDS_SP3_N[5]}];    set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[5]}];  # TE0712 = B16_L18_N - KIT ARTIX = JB1-49
set_property PACKAGE_PIN C22 [get_ports {LEDS[1]}];                set_property IOSTANDARD LVCMOS25 [get_ports {LEDS[1]}];  # TE0712 = B16_L20_P - KIT ARTIX = JB1-50
#set_property PACKAGE_PIN F19 [get_ports {LVDS_SP3_P[5]}];    set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[5]}];  # TE0712 = B16_L18_P - KIT ARTIX = JB1-51
set_property PACKAGE_PIN B22 [get_ports { Serie_TX_1Gbps }];               set_property IOSTANDARD LVCMOS25 [get_ports { Serie_TX_1Gbps }];  # TE0712 = B16_L20_N - KIT ARTIX = JB1-52
#set_property PACKAGE_PIN A16 [get_ports {LVDS_SP3_N[46]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[46]}];  # TE0712 = B16_L9_N - KIT ARTIX = JB1-55
#set_property PACKAGE_PIN B21 [get_ports {LVDS_SP3_P[40]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[40]}];  # TE0712 = B16_L21_P - KIT ARTIX = JB1-56
#set_property PACKAGE_PIN A15 [get_ports Serie_TX];   set_property IOSTANDARD LVCMOS25 [get_ports Serie_TX];  # TE0712 = B16_L9_P - KIT ARTIX = JB1-57
set_property PACKAGE_PIN A21 [get_ports {debug[0]}];   set_property IOSTANDARD LVCMOS25 [get_ports {debug[0]}];  # TE0712 = B16_L21_N - KIT ARTIX = JB1-58
#set_property PACKAGE_PIN B16 [get_ports {LVDS_SP3_N[45]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[45]}];  # TE0712 = B16_L7_N - KIT ARTIX = JB1-59
#set_property PACKAGE_PIN C18 [get_ports CLK_SP3_P];   set_property IOSTANDARD BLVDS_25 [get_ports CLK_SP3_P];  # TE0712 = B16_L13_P - KIT ARTIX = JB1-60
#set_property PACKAGE_PIN B15 [get_ports {LVDS_SP3_P[45]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[45]}];  # TE0712 = B16_L7_P - KIT ARTIX = JB1-61
set_property PACKAGE_PIN C19 [get_ports {debug[1]}];   set_property IOSTANDARD LVCMOS25 [get_ports {debug[1]}];  # TE0712 = B16_L13_N - KIT ARTIX = JB1-62
#set_property PACKAGE_PIN B17 [get_ports {LVDS_SP3_P[29]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[29]}];  # TE0712 = B16_L11_P - KIT ARTIX = JB1-65
#set_property PACKAGE_PIN E19 [get_ports {LVDS_SP3_P[30]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[30]}];  # TE0712 = B16_L14_P - KIT ARTIX = JB1-66
#set_property PACKAGE_PIN B18 [get_ports {LVDS_SP3_N[29]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[29]}];  # TE0712 = B16_L11_N - KIT ARTIX = JB1-67
set_property PACKAGE_PIN D19 [get_ports {debug[2]}];   set_property IOSTANDARD LVCMOS25 [get_ports {debug[2]}];  # TE0712 = B16_L14_N - KIT ARTIX = JB1-68
#set_property PACKAGE_PIN A14 [get_ports {COL[5]}];   set_property IOSTANDARD LVCMOS25 [get_ports {COL[5]}];  # TE0712 = B16_L10_N - KIT ARTIX = JB1-69
#set_property PACKAGE_PIN C15 [get_ports {LVDS_SP3_N[38]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[38]}];  # TE0712 = B16_L3_N - KIT ARTIX = JB1-70
#set_property PACKAGE_PIN A13 [get_ports {COL[6]}];   set_property IOSTANDARD LVCMOS25 [get_ports {COL[6]}];  # TE0712 = B16_L10_P - KIT ARTIX = JB1-71
set_property PACKAGE_PIN C14 [get_ports {debug[3]}];   set_property IOSTANDARD LVCMOS25 [get_ports {debug[3]}];  # TE0712 = B16_L3_P - KIT ARTIX = JB1-72
#set_property PACKAGE_PIN D16 [get_ports {COL[7]}];   set_property IOSTANDARD LVCMOS25 [get_ports {COL[7]}];  # TE0712 = B16_L5_N - KIT ARTIX = JB1-75
#set_property PACKAGE_PIN D17 [get_ports {LVDS_SP3_P[31]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[31]}];  # TE0712 = B16_L12_P - KIT ARTIX = JB1-76
#set_property PACKAGE_PIN E16 [get_ports {COL[8]}];   set_property IOSTANDARD LVCMOS25 [get_ports {COL[8]}];  # TE0712 = B16_L5_P - KIT ARTIX = JB1-77
set_property PACKAGE_PIN C17 [get_ports {debug[4]}];   set_property IOSTANDARD LVCMOS25 [get_ports {debug[4]}];  # TE0712 = B16_L12_N - KIT ARTIX = JB1-78
#set_property PACKAGE_PIN E17 [get_ports {LVDS_SP3_N[39]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[39]}];  # TE0712 = B16_L2_N - KIT ARTIX = JB1-79
#set_property PACKAGE_PIN F16 [get_ports {LVDS_SP3_P[39]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[39]}];  # TE0712 = B16_L2_P - KIT ARTIX = JB1-81
#set_property PACKAGE_PIN B13 [get_ports {LVDS_SP3_N[37]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[37]}];  # TE0712 = B16_L8_N - KIT ARTIX = JB1-82
#set_property PACKAGE_PIN C13 [get_ports {debug[5]}];   set_property IOSTANDARD LVCMOS25 [get_ports {debug[5]}];  # TE0712 = B16_L8_P - KIT ARTIX = JB1-84
#set_property PACKAGE_PIN D15 [get_ports {LVDS_SP3_N[32]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[32]}];  # TE0712 = B16_L6_N - KIT ARTIX = JB1-85
#set_property PACKAGE_PIN U18 [get_ports RST_SP3];            set_property IOSTANDARD LVCMOS25 [get_ports RST_SP3];  # TE0712 = B14_L18_N - KIT ARTIX = JB1-86
#set_property PACKAGE_PIN D14 [get_ports {LVDS_SP3_P[32]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[32]}];  # TE0712 = B16_L6_P - KIT ARTIX = JB1-87
#set_property PACKAGE_PIN U17 [get_ports NCAB2];   set_property IOSTANDARD LVCMOS25 [get_ports NCAB2];  # TE0712 = B14_L18_P - KIT ARTIX = JB1-88
#set_property PACKAGE_PIN P16 [get_ports FTDI_TX];   set_property IOSTANDARD LVCMOS25 [get_ports FTDI_TX];  # TE0712 = B14_L24_P - KIT ARTIX = JB1-91
#set_property PACKAGE_PIN Y21 [get_ports NCAB1];   set_property IOSTANDARD LVCMOS25 [get_ports NCAB1];  # TE0712 = B14_L9_P - KIT ARTIX = JB1-92
#set_property PACKAGE_PIN E14 [get_ports FTDI_RX];   set_property IOSTANDARD LVCMOS25 [get_ports FTDI_RX];  # TE0712 = B16_L4_N - KIT ARTIX = JB1-93
#set_property PACKAGE_PIN Y22 [get_ports NCAB0];   set_property IOSTANDARD LVCMOS25 [get_ports NCAB0];  # TE0712 = B14_L9_N - KIT ARTIX = JB1-94
#set_property PACKAGE_PIN E13 [get_ports SINCRO_ROW_2];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_2];  # TE0712 = B16_L4_P - KIT ARTIX = JB1-95
#set_property PACKAGE_PIN T21 [get_ports SINCRO_ROW_8];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_8];  # TE0712 = B14_L4_P - KIT ARTIX = JB1-96
#set_property PACKAGE_PIN F14 [get_ports SINCRO_ROW_6];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_6];  # TE0712 = B16_L1_N - KIT ARTIX = JB1-97
#set_property PACKAGE_PIN U21 [get_ports SINCRO_ROW_10];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_10];  # TE0712 = B14_L4_N - KIT ARTIX = JB1-98
#set_property PACKAGE_PIN F13 [get_ports SINCRO_ROW_4];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_4];  # TE0712 = B16_L1_P - KIT ARTIX = JB1-99
#set_property PACKAGE_PIN R17 [get_ports SINCRO_ROW_12];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_12];  # TE0712 = B14_L24_N - KIT ARTIX = JB1-100

#JB2
#set_property PACKAGE_PIN AA21 [get_ports {LVDS_SP3_N[20]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[20]}];  # TE0712 = B14_L8_N - KIT ARTIX = JB2-12
#set_property PACKAGE_PIN AB22 [get_ports {LVDS_SP3_N[9]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[9]}];  # TE0712 = B14_L10_N - KIT ARTIX = JB2-13
#set_property PACKAGE_PIN AA20 [get_ports {LVDS_SP3_P[20]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[20]}];  # TE0712 = B14_L8_P - KIT ARTIX = JB2-14
#set_property PACKAGE_PIN AB21 [get_ports {LVDS_SP3_P[9]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[9]}];  # TE0712 = B14_L10_P - KIT ARTIX = JB2-15
#set_property PACKAGE_PIN AB18 [get_ports {LVDS_SP3_N[19]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[19]}];  # TE0712 = B14_L17_N - KIT ARTIX = JB2-16
#set_property PACKAGE_PIN AA18 [get_ports {LVDS_SP3_P[19]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[19]}];  # TE0712 = B14_L17_P - KIT ARTIX = JB2-18
#set_property PACKAGE_PIN W19 [get_ports {LVDS_SP3_P[10]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[10]}];  # TE0712 = B14_L12_P - KIT ARTIX = JB2-21
#set_property PACKAGE_PIN V18 [get_ports CLK_CAB_P];   set_property IOSTANDARD LVCMOS25 [get_ports CLK_CAB_P];  # TE0712 = B14_L14_P - KIT ARTIX = JB2-22
#set_property PACKAGE_PIN W20 [get_ports {LVDS_SP3_N[10]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[10]}];  # TE0712 = B14_L12_N - KIT ARTIX = JB2-23
#set_property PACKAGE_PIN V19 [get_ports CLK_CAB_N];   set_property IOSTANDARD LVCMOS25 [get_ports CLK_CAB_N];  # TE0712 = B14_L14_N - KIT ARTIX = JB2-24
set_property PACKAGE_PIN U20 [get_ports {LEDS[0]}];   set_property IOSTANDARD LVCMOS25 [get_ports {LEDS[0]}];  # TE0712 = B14_L11_P - KIT ARTIX = JB2-25
#set_property PACKAGE_PIN Y18 [get_ports CLK_CAB_AUX_P];   set_property IOSTANDARD LVCMOS25 [get_ports CLK_CAB_AUX_P];  # TE0712 = B14_L13_P - KIT ARTIX = JB2-26
set_property PACKAGE_PIN V20 [get_ports {LEDS[2]}];   set_property IOSTANDARD LVCMOS25 [get_ports {LEDS[2]}];  # TE0712 = B14_L11_N - KIT ARTIX = JB2-27
#set_property PACKAGE_PIN Y19 [get_ports CLK_CAB_AUX_N];   set_property IOSTANDARD LVCMOS25 [get_ports CLK_CAB_AUX_N];  # TE0712 = B14_L13_N - KIT ARTIX = JB2-28
#set_property PACKAGE_PIN K22 [get_ports {LVDS_SP3_N[18]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[18]}];  # TE0712 = B15_L9_N - KIT ARTIX = JB2-31
#set_property PACKAGE_PIN V17 [get_ports {LVDS_SP3_P[12]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[12]}];  # TE0712 = B14_L16_P - KIT ARTIX = JB2-32
#set_property PACKAGE_PIN K21 [get_ports {LVDS_SP3_P[18]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[18]}];  # TE0712 = B15_L9_P - KIT ARTIX = JB2-33
#set_property PACKAGE_PIN W17 [get_ports {LVDS_SP3_N[12]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[12]}];  # TE0712 = B14_L16_N - KIT ARTIX = JB2-34
#set_property PACKAGE_PIN G20 [get_ports {LVDS_SP3_N[17]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[17]}];  # TE0712 = B15_L8_N - KIT ARTIX = JB2-35
#set_property PACKAGE_PIN AA19 [get_ports {LVDS_SP3_P[1]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[1]}];  # TE0712 = B14_L15_P - KIT ARTIX = JB2-36
#set_property PACKAGE_PIN H20 [get_ports {LVDS_SP3_P[17]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[17]}];  # TE0712 = B15_L8_P - KIT ARTIX = JB2-37
#set_property PACKAGE_PIN AB20 [get_ports {LVDS_SP3_N[1]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[1]}];  # TE0712 = B14_L15_N - KIT ARTIX = JB2-38
#set_property PACKAGE_PIN H22 [get_ports {LVDS_SP3_N[41]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[41]}];  # TE0712 = B15_L7_N - KIT ARTIX = JB2-41
#set_property PACKAGE_PIN L16 [get_ports {LVDS_SP3_P[2]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[2]}];  # TE0712 = B15_L23_P - KIT ARTIX = JB2-42
#set_property PACKAGE_PIN J22 [get_ports {LVDS_SP3_P[41]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[41]}];  # TE0712 = B15_L7_P - KIT ARTIX = JB2-43
#set_property PACKAGE_PIN K16 [get_ports {LVDS_SP3_N[2]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[2]}];  # TE0712 = B15_L23_N - KIT ARTIX = JB2-44
#set_property PACKAGE_PIN K18 [get_ports {LVDS_SP3_P[42]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[42]}];  # TE0712 = B15_L13_P - KIT ARTIX = JB2-45
#set_property PACKAGE_PIN K13 [get_ports {LVDS_SP3_P[3]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[3]}];  # TE0712 = B15_L19_P - KIT ARTIX = JB2-46
#set_property PACKAGE_PIN K19 [get_ports {LVDS_SP3_N[42]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[42]}];  # TE0712 = B15_L13_N - KIT ARTIX = JB2-47
#set_property PACKAGE_PIN K14 [get_ports {LVDS_SP3_N[3]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[3]}];  # TE0712 = B15_L19_N - KIT ARTIX = JB2-48
set_property PACKAGE_PIN L19 [get_ports ETH_CLK_REF];   set_property IOSTANDARD LVCMOS25 [get_ports ETH_CLK_REF];  # TE0712 = B15_L14_P - KIT ARTIX = JB2-51
#set_property PACKAGE_PIN J20 [get_ports {LVDS_SP3_P[4]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[4]}];  # TE0712 = B15_L11_P - KIT ARTIX = JB2-52
#set_property PACKAGE_PIN L20 [get_ports ETH_CLK_REF_90];   set_property IOSTANDARD BLVDS_25 [get_ports ETH_CLK_REF_90];  # TE0712 = B15_L14_N - KIT ARTIX = JB2-53
#set_property PACKAGE_PIN J21 [get_ports {LVDS_SP3_N[4]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[4]}];  # TE0712 = B15_L11_N - KIT ARTIX = JB2-54
#set_property PACKAGE_PIN J19 [get_ports {LVDS_SP3_P[33]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[33]}];  # TE0712 = B15_L12_P - KIT ARTIX = JB2-55
#set_property PACKAGE_PIN J14 [get_ports {LVDS_SP3_P[44]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[44]}];  # TE0712 = B15_L3_P - KIT ARTIX = JB2-56
#set_property PACKAGE_PIN H19 [get_ports {LVDS_SP3_N[33]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[33]}];  # TE0712 = B15_L12_N - KIT ARTIX = JB2-57
#set_property PACKAGE_PIN H14 [get_ports {LVDS_SP3_N[44]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[44]}];  # TE0712 = B15_L3_N - KIT ARTIX = JB2-58
#set_property PACKAGE_PIN L21 [get_ports {LVDS_SP3_N[28]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[28]}];  # TE0712 = B15_L10_N - KIT ARTIX = JB2-61
#set_property PACKAGE_PIN N19 [get_ports {LVDS_SP3_N[27]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[27]}];  # TE0712 = B15_L17_N - KIT ARTIX = JB2-62
#set_property PACKAGE_PIN M21 [get_ports {LVDS_SP3_P[28]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[28]}];  # TE0712 = B15_L10_P - KIT ARTIX = JB2-63
#set_property PACKAGE_PIN N18 [get_ports {LVDS_SP3_P[27]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[27]}];  # TE0712 = B15_L17_P - KIT ARTIX = JB2-64
#set_property PACKAGE_PIN N20 [get_ports {LVDS_SP3_P[34]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[34]}];  # TE0712 = B15_L18_P - KIT ARTIX = JB2-65
#set_property PACKAGE_PIN M18 [get_ports {LVDS_SP3_P[26]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[26]}];  # TE0712 = B15_L16_P - KIT ARTIX = JB2-66
#set_property PACKAGE_PIN M20 [get_ports {LVDS_SP3_N[34]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[34]}];  # TE0712 = B15_L18_N - KIT ARTIX = JB2-67
#set_property PACKAGE_PIN L18 [get_ports {LVDS_SP3_N[26]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[26]}];  # TE0712 = B15_L16_N - KIT ARTIX = JB2-68
#set_property PACKAGE_PIN M13 [get_ports {LVDS_SP3_P[35]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[35]}];  # TE0712 = B15_L20_P - KIT ARTIX = JB2-71
#set_property PACKAGE_PIN H13 [get_ports S1];   set_property IOSTANDARD LVCMOS25 [get_ports S1];  # TE0712 = B15_L1_P - KIT ARTIX = JB2-72
#set_property PACKAGE_PIN L13 [get_ports {LVDS_SP3_N[35]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[35]}];  # TE0712 = B15_L20_N - KIT ARTIX = JB2-73
#set_property PACKAGE_PIN G13 [get_ports S2];   set_property IOSTANDARD LVCMOS25 [get_ports S2];  # TE0712 = B15_L1_N - KIT ARTIX = JB2-74
#set_property PACKAGE_PIN N22 [get_ports {LVDS_SP3_P[36]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[36]}];  # TE0712 = B15_L15_P - KIT ARTIX = JB2-75
#set_property PACKAGE_PIN G16 [get_ports {SEMI[12]}];   set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[12]}];  # TE0712 = B15_L2_N - KIT ARTIX = JB2-76
#set_property PACKAGE_PIN M22 [get_ports {LVDS_SP3_N[36]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[36]}];  # TE0712 = B15_L15_N - KIT ARTIX = JB2-77
#set_property PACKAGE_PIN G15 [get_ports {SEMI[10]}];   set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[10]}];  # TE0712 = B15_L2_P - KIT ARTIX = JB2-78
#set_property PACKAGE_PIN H18 [get_ports {LVDS_SP3_N[25]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_N[25]}];  # TE0712 = B15_L6_N - KIT ARTIX = JB2-81
#set_property PACKAGE_PIN G17 [get_ports {SEMI[8]}];   set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[8]}];  # TE0712 = B15_L4_P - KIT ARTIX = JB2-82
#set_property PACKAGE_PIN H17 [get_ports {LVDS_SP3_P[25]}];   set_property IOSTANDARD BLVDS_25 [get_ports {LVDS_SP3_P[25]}];  # TE0712 = B15_L6_P - KIT ARTIX = JB2-83
#set_property PACKAGE_PIN G18 [get_ports {SEMI[6]}];   set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[6]}];  # TE0712 = B15_L4_N - KIT ARTIX = JB2-84
#set_property PACKAGE_PIN K17 [get_ports LED];   set_property IOSTANDARD LVCMOS25 [get_ports LED];  # TE0712 = B15_L21_P - KIT ARTIX = JB2-85
#set_property PACKAGE_PIN H15 [get_ports {SEMI[4]}];   set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[4]}];  # TE0712 = B15_L5_N - KIT ARTIX = JB2-86
#set_property PACKAGE_PIN J17 [get_ports SINCRO_ROW_7];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_7];  # TE0712 = B15_L21_N - KIT ARTIX = JB2-87
#set_property PACKAGE_PIN J15 [get_ports {SEMI[2]}];   set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[2]}];  # TE0712 = B15_L5_P - KIT ARTIX = JB2-88
set_property PACKAGE_PIN J16 [get_ports ETH_LED1];          set_property IOSTANDARD LVCMOS25 [get_ports ETH_LED1];  # TE0712 = B15_IO0 - KIT ARTIX = JB2-90
#set_property PACKAGE_PIN M16 [get_ports SINCRO_ROW_11];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_11];  # TE0712 = B15_L24_N - KIT ARTIX = JB2-91
#set_property PACKAGE_PIN M15 [get_ports SINCRO_ROW_9];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_9];  # TE0712 = B15_L24_P - KIT ARTIX = JB2-93
#set_property PACKAGE_PIN L15 [get_ports SINCRO_ROW_1];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_1];  # TE0712 = B15_L22_N - KIT ARTIX = JB2-95
#set_property PACKAGE_PIN L14 [get_ports SINCRO_ROW_5];   set_property IOSTANDARD LVCMOS25 [get_ports SINCRO_ROW_5];  # TE0712 = B15_L22_P - KIT ARTIX = JB2-97
set_property PACKAGE_PIN M17 [get_ports ETH_LED2];          set_property IOSTANDARD LVCMOS25 [get_ports ETH_LED2];  # TE0712 = B15_IO25 - KIT ARTIX = JB2-99

#JB3
#set_property PACKAGE_PIN U15  [get_ports {COL[3]}];			set_property IOSTANDARD LVCMOS25 [get_ports {COL[3]}]; 			# TE0712 = B13_L14_P	KIT ARTIX = JB3-1
#set_property PACKAGE_PIN T16  [get_ports AND_SP3];				set_property IOSTANDARD LVCMOS25 [get_ports AND_SP3]; 		# TE0712 = B13_L17_P	KIT ARTIX = JB3-2
#set_property PACKAGE_PIN V15  [get_ports {COL[4]}];			set_property IOSTANDARD LVCMOS25 [get_ports {COL[4]}]; 			# TE0712 = B13_L14_N	KIT ARTIX = JB3-3
#set_property PACKAGE_PIN U16  [get_ports OR_SP3];				set_property IOSTANDARD LVCMOS25 [get_ports OR_SP3]; 		# TE0712 = B13_L17_N	KIT ARTIX = JB3-4
#set_property PACKAGE_PIN A8   [get_ports MGT_RX0_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX0_N]; 		# TE0712 = MGT_RX0_N	KIT ARTIX = JB3-7
#set_property PACKAGE_PIN A4   [get_ports MGT_TX0_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX0_N]; 		# TE0712 = MGT_TX0_N	KIT ARTIX = JB3-8
#set_property PACKAGE_PIN B8   [get_ports MGT_RX0_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX0_P]; 		# TE0712 = MGT_RX0_P	KIT ARTIX = JB3-9
#set_property PACKAGE_PIN B4   [get_ports MGT_TX0_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX0_P]; 		# TE0712 = MGT_TX0_P	KIT ARTIX = JB3-10
#set_property PACKAGE_PIN C11  [get_ports MGT_RX1_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX1_N]; 		# TE0712 = MGT_RX1_N	KIT ARTIX = JB3-13
#set_property PACKAGE_PIN C5   [get_ports MGT_TX1_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX1_N]; 		# TE0712 = MGT_TX1_N	KIT ARTIX = JB3-14
#set_property PACKAGE_PIN D11  [get_ports MGT_RX1_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX1_P]; 		# TE0712 = MGT_RX1_P	KIT ARTIX = JB3-15
#set_property PACKAGE_PIN D5   [get_ports MGT_TX1_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX1_P]; 		# TE0712 = MGT_TX1_P	KIT ARTIX = JB3-16
#set_property PACKAGE_PIN A10  [get_ports MGT_RX2_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX2_N]; 		# TE0712 = MGT_RX2_N	KIT ARTIX = JB3-18
#set_property PACKAGE_PIN A6   [get_ports MGT_TX2_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX2_N]; 		# TE0712 = MGT_TX2_N	KIT ARTIX = JB3-20
#set_property PACKAGE_PIN B10  [get_ports MGT_RX2_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX2_P]; 		# TE0712 = MGT_RX2_P	KIT ARTIX = JB3-21
#set_property PACKAGE_PIN B6   [get_ports MGT_TX2_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX2_P]; 		# TE0712 = MGT_TX2_P	KIT ARTIX = JB3-22
#set_property PACKAGE_PIN C9   [get_ports MGT_RX3_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX3_N]; 		# TE0712 = MGT_RX3_N	KIT ARTIX = JB3-25
#set_property PACKAGE_PIN C7   [get_ports MGT_TX3_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX3_N]; 		# TE0712 = MGT_TX3_N	KIT ARTIX = JB3-26
#set_property PACKAGE_PIN D9   [get_ports MGT_RX3_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_RX3_P]; 		# TE0712 = MGT_RX3_P	KIT ARTIX = JB3-27
#set_property PACKAGE_PIN D7   [get_ports MGT_TX3_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_TX3_P]; 		# TE0712 = MGT_TX3_P	KIT ARTIX = JB3-28
#set_property PACKAGE_PIN E10  [get_ports MGT_CLK1_N];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_CLK1_N]; 		# TE0712 = MGT_CLK1_N	KIT ARTIX = JB3-32
#set_property PACKAGE_PIN F10  [get_ports MGT_CLK1_P];		set_property IOSTANDARD LVCMOS25 [get_ports MGT_CLK1_P]; 		# TE0712 = MGT_CLK1_P	KIT ARTIX = JB3-34
set_property PACKAGE_PIN W15  [get_ports {ETH_RXD[3]}];     set_property IOSTANDARD LVCMOS25 [get_ports {ETH_RXD[3]}]; 	# TE0712 = B13_L16_P	KIT ARTIX = JB3-37
set_property PACKAGE_PIN V10  [get_ports {ETH_TXD[3]}];		set_property IOSTANDARD LVCMOS25 [get_ports {ETH_TXD[3]}]; 			# TE0712 = B13_L10_P	KIT ARTIX = JB3-38
set_property PACKAGE_PIN W16  [get_ports {ETH_RXD[2]}];	    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_RXD[2]}]; 	# TE0712 = B13_L16_N	KIT ARTIX = JB3-39
set_property PACKAGE_PIN W10  [get_ports {ETH_TXD[2]}];		set_property IOSTANDARD LVCMOS25 [get_ports {ETH_TXD[2]}]; 			# TE0712 = B13_L10_N	KIT ARTIX = JB3-40
set_property PACKAGE_PIN Y16  [get_ports {ETH_RXD[1]}];	    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_RXD[1]}];	# TE0712 = B13_L1_P		KIT ARTIX = JB3-41
set_property PACKAGE_PIN T14  [get_ports {ETH_TXD[1]}];		set_property IOSTANDARD LVCMOS25 [get_ports {ETH_TXD[1]}]; 			# TE0712 = B13_L15_P	KIT ARTIX = JB3-42
set_property PACKAGE_PIN AA16 [get_ports {ETH_RXD[0]}];	    set_property IOSTANDARD LVCMOS25 [get_ports {ETH_RXD[0]}];	# TE0712 = B13_L1_N		KIT ARTIX = JB3-43
set_property PACKAGE_PIN T15  [get_ports {ETH_TXD[0]}];		set_property IOSTANDARD LVCMOS25 [get_ports {ETH_TXD[0]}]; 			# TE0712 = B13_L15_N	KIT ARTIX = JB3-44
set_property PACKAGE_PIN AA15 [get_ports ETH_RXCTL];		set_property IOSTANDARD LVCMOS25 [get_ports ETH_RXCTL]; 		# TE0712 = B13_L4_P		KIT ARTIX = JB3-47
#set_property PACKAGE_PIN P19  [get_ports {SEMI[7]}];			set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[7]}]; 			# TE0712 = B14_L5_P		KIT ARTIX = JB3-48
set_property PACKAGE_PIN AB15 [get_ports ETH_MDC];		    set_property IOSTANDARD LVCMOS25 [get_ports ETH_MDC]; 		# TE0712 = B13_L4_N		KIT ARTIX = JB3-49
#set_property PACKAGE_PIN R19  [get_ports {SEMI[5]}];			set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[5]}]; 			# TE0712 = B14_L5_N		KIT ARTIX = JB3-50
set_property PACKAGE_PIN AB17 [get_ports ETH_MDIO];	        set_property IOSTANDARD LVCMOS25 [get_ports ETH_MDIO];	# TE0712 = B13_L2_N		KIT ARTIX = JB3-51
#set_property PACKAGE_PIN R18  [get_ports {SEMI[3]}];			set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[3]}]; 			# TE0712 = B14_L20_P	KIT ARTIX = JB3-52
set_property PACKAGE_PIN AB16 [get_ports ETH_RST_1G];	    set_property IOSTANDARD LVCMOS25 [get_ports ETH_RST_1G];	# TE0712 = B13_L2_P		KIT ARTIX = JB3-53
#set_property PACKAGE_PIN T18  [get_ports {SEMI[1]}];			set_property IOSTANDARD LVCMOS25 [get_ports {SEMI[1]}]; 			# TE0712 = B14_L20_N	KIT ARTIX = JB3-54
set_property PACKAGE_PIN W11  [get_ports ETH_TXCK];		    set_property IOSTANDARD LVCMOS25 [get_ports ETH_TXCK];	 	# TE0712 = B13_L12_P	KIT ARTIX = JB3-57
set_property PACKAGE_PIN V13  [get_ports ETH_RXCK];		    set_property IOSTANDARD LVCMOS25 [get_ports ETH_RXCK]; 		# TE0712 = B13_L13_P	KIT ARTIX = JB3-58
set_property PACKAGE_PIN W12  [get_ports ETH_TXCTL];		set_property IOSTANDARD LVCMOS25 [get_ports ETH_TXCTL]; 		# TE0712 = B13_L12_N	KIT ARTIX = JB3-59
#set_property PACKAGE_PIN V14  [get_ports CONFIG];		    set_property IOSTANDARD LVCMOS25 [get_ports CONFIG]; 		# TE0712 = B13_L13_N	KIT ARTIX = JB3-60