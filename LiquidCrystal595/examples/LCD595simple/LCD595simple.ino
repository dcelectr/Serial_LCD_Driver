#include <LiquidCrystal595.h>    // include the library
LiquidCrystal595 lcd(2,3,4);     // datapin, latchpin, clockpin

void setup() {
    
    
    lcd.begin(16,2);             // 16 characters, 2 rows
    lcd.setLED1Pin(HIGH);
    lcd.setLED2Pin(HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Hello");
    lcd.setCursor(0,1);
    lcd.print("World");
}

void loop() {
    // not used.
}
