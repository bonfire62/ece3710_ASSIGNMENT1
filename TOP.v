`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:25 08/28/2016 
// Design Name: 
// Module Name:    TOP 
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
module TOP(extClock, Reset, UPpre, DOWNpre, seg, an);

input extClock;
input Reset;
input UPpre;
input DOWNpre;
output [7:0] seg;
wire [15:0] bin_out0;
wire [3:0] bin_out1;
output [3:0] an;
wire intClock, Clock;

IBUFG clockBuffer1(.I(extClock), .O(intClock));
BUFG clockBuffer2(.I(intClock), .O(Clock));

Debounce debouncerUp(Reset, Clock, UPpre, UP);
Debounce debouncerDown(Reset, Clock, DOWNpre, DOWN);

// Counts button presses and modifies the 16bit binary number
// 											 inc   dec  out to controller
BtnCountModule Counter0(Clock, Reset, UP, DOWN, bin_out0);
// Controls timing for the LED display
//  												input(16bit) out(4 bit) enable (4 bit)
LED_Controller LEDcont0(Clock, Reset, bin_out0, bin_out1, an);
seg7 LEDDisplay(bin_out1, seg);

endmodule
