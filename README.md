# Serial_LCD_Driver
LCD Screen Driver with 74HC595.
This uses the 74HC595 to drive LCD displays such as 1602, 1604, 2002, or 2004 with 5V, GND and three Arduino pins (DIN, CS, and CLK). 
Compatible with screens that have 1x16 header.
It is recommended to use a 1x16 male header on the LCD and 1x16 female socket on the Serial_LCD_Driver
The LED (D1) and R2 are optional. You can populate for diagnostics (test the hardware), or connect a panel LED with wires to the Serial_LCD_Driver.
It is recommended to use a resistance value for R2 no lower than 470 Ohms (preferably use 1K with high efficiency LEDs).
The Q1 is used to provide current for the LCD back-light, so that the 74HC595 does not bear the burden to provide the required back-light current (some LCD back-lights draw as much as 200mA). The R1 can be adjusted (1K to 10K) to achieve Q1 saturation for or reduce the current to a desired brightness.
This design has been built and tested with the code provided in this repository. It works! 
![Image](https://github.com/DCelectronics/Serial_LCD_Driver/blob/master/Serial_LCD_Driver_front.png)
![Image](https://github.com/DCelectronics/Serial_LCD_Driver/blob/master/Serial_LCD_Driver_back.png)
