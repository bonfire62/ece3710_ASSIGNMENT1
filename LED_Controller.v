`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:01:53 08/28/2016 
// Design Name: 
// Module Name:    LED_Controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module LED_Controller(input Clock, input Reset, input [15:0] bin_in, output reg [3:0] bin_out, en_bus);   

reg [15:0] counter;
localparam regconst = 16'd32768;

always @(posedge Clock)begin
	if(counter < 16'd32768  && counter > 16'd24576)begin
		en_bus <= 4'b0111;
		bin_out <= bin_in[15:12];
		end
	else if(counter < 16'd24576 && counter > 16'd16379)begin
		en_bus <= 4'b1011;
		bin_out <= bin_in[11:8];
		end
	else if(counter < 16'd16379 && counter > 16'd8192)begin
		en_bus <= 4'b1101;
		bin_out <= bin_in[7:4];
		end
	else if(counter < 16'd8192 && counter > 16'd0)begin
		en_bus <= 4'b1110;
		bin_out <= bin_in[3:0];
		end
	if(Reset)
		counter <= 16'd32768;
	if(counter == 0)
		counter <= 16'd32768;
	else
		counter <= counter - 16'd1;
	end


endmodule
