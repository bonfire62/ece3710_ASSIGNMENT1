`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:18:08 08/28/2016 
// Design Name: 
// Module Name:    BtnCountModule 
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
module BtnCountModule(
	input Clock,
	input Reset,
	input UP, DOWN, 
	output reg [15:0] bin_out
    );

	reg [1:0] NS, PS;
	localparam inc = 2'b01;
	localparam dec = 2'b10;
	localparam stall = 2'b00;
	initial PS = 2'b00;
	initial NS = 2'b00;
	initial bin_out = 16'b1111111111111111;

	always @(UP, DOWN, PS)begin
		//if present state
		case(PS)
			stall:
				if(UP)
					NS <= inc; 			
				else if(DOWN)
					NS <= dec;
				else
					NS <= stall;	
			inc:
				if(!UP)
					NS <= stall;
				else
					NS <= inc;			
			dec:
				if(!DOWN)
					NS <= stall;
				else
					NS <= dec;		
			default:begin NS <= stall; $display("Error");end
		endcase
		end
			
	always @(posedge Clock)begin
		if(PS == inc && NS == stall)		
			bin_out = bin_out + 16'd1;
			
		else if(PS == dec && NS == stall)
			bin_out = bin_out - 16'd1;
		
		if(Reset) begin
			PS <= stall;
			bin_out = 16'd0;end
		
		else
			PS <= NS;
		end

endmodule
