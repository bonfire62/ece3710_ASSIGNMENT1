`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Utah
// Engineer: Ken Bonar
// 
// Create Date:    15:58:18 08/26/2016 
// Design Name: 
// Module Name:    seg7 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//		Controller for 7 Segment display using hex
//		see below code for button correlation to binary
// Dependencies: 
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////


module seg7(	
    input [3:0] bin_out,
    output reg [7:0] leds
    );
	 
	 //Active Low for LED's (binary assignments are flipped)
	 always@(bin_out)
		case(bin_out)
			4'b0000: leds = 8'b00000011;  // Hexadecimal 0
			4'b0001: leds = 8'b10011111;  // Hexadecimal 1
			4'b0010: leds = 8'b00100101;  // Hexadecimal 2
			4'b0011: leds = 8'b00001101;  // Hexadecimal 3
			4'b0100: leds = 8'b10011001;  // Hexadecimal 4
			4'b0101: leds = 8'b01001001;  // Hexadecimal 5
			4'b0110: leds = 8'b01000001;  // Hexadecimal 6
			4'b0111: leds = 8'b00011111;  // Hexadecimal 7
			4'b1000: leds = 8'b00000001;  // Hexadecimal 8
			4'b1001: leds = 8'b00001001;  // Hexadecimal 9
			4'b1010: leds = 8'b00010001;  // Hexadecimal A
			4'b1011: leds = 8'b11000001;  // Hexadecimal B
			4'b1100: leds = 8'b01100011;  // Hexadecimal C
			4'b1101: leds = 8'b10000101;  // Hexadecimal D
			4'b1110: leds = 8'b01100001;  // Hexadecimal E
			4'b1111: leds = 8'b01110001;  // Hexadecimal F
			default: leds = 8'bx;
		endcase
endmodule

/////__segment correlation__/////////////
//    ___0___
//		|		|
//		5		1
//		|__6__|
//		|		|
//		4		2
//		|__3__| .7

