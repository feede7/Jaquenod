`timescale 1 ps / 1ps

module tb_top_v2 ;

reg clkin ;
reg rstin ;
reg [7:0] datain ;
wire [7:0] outdata ;
reg [7:0] olddata ;
reg match ;
wire locked ;

always @(posedge clkin or rstin)
begin
if (rstin) begin
	olddata <= 8'h00 ;
	datain <= 8'h00 ;
	match <= 1'b0 ;
end 
else begin
    	olddata <= outdata ;
    	datain <= datain + 1 ;
    	if (outdata == olddata + 8'h01) 
      		match <= 1'b1 ;
      	else
      		match <= 1'b0 ;
end
end 


initial clkin = 0 ;

always #(500) clkin = ~clkin ;

top_v2 chip(
	.clkin(clkin),
        .rstin(rstin),
        .datainx(datain),
        .locked(locked),
        .outdata(outdata));

initial
begin
rstin = 1'b1 ;

#50000
rstin = 1'b0 ;

//$stop ;
end 

endmodule
