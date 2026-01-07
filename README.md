# atmega328p-register-io
This C program controls LEDs based on button presses by directly accessing the microcontroller's registers and using a pull-down resistor circuit. 

### here is a circuit diagram created in Thinkercad, showing how the LED and button logic is connected using pull-down resistors.

![Bildschirmfoto_7-1-2026_182342_www tinkercad com](https://github.com/user-attachments/assets/9fa7c0e8-2fa9-4a4c-bf7a-a5d95d3918d4)




### Explanation:   
The pull-down resistors ensure that the input pins (PIND) stay at a stable 0V (LOW) when the button is not pressed. This prevents "floating" pins and accidental LED triggers.
