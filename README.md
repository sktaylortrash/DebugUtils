# Enable Serial print Debug Levels

This library uses Pre-Compiler Directives to enable 4 different levels of serial output for debug testing during firmware development. Disabling Debug can eleminate un-needed serial output code from a finalized firmware

Enabled through the use of #define DEBUGLEVEL 0   {
    0-3} are acceptable values

The print statements that are included are

Serial.print(x)
Serial.println(x)
Serial.print (x, DEC)
Serial.print (x, HEX)

Additionally Serial.begin(x) is included in the 0 debug level


## Installation:
Copy DebugUtils folder into your Arduino Library folder

## Example:
An example sketch with a modified version of Blink to use 3 of the 4 debug levels in included



Modified from original library by Andreas Spiess as presented in this YouTube video: https://youtu.be/1eL8dXL3Wow

"# DebugUtils" 
