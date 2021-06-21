#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

long randNumber1;
long randNumber2;
long randNumber3;
long randNumber4;
long randNumber5;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  
lcd.begin();
Serial.begin(115200);
randomSeed(analogRead(0));
lcd.print("Esp32 Random ");
lcd.setCursor(0,1);
lcd.print("Number Generator");
delay(2000);
}

void loop() {

lcd.clear();
randNumber1 = random(10);
randNumber2 = random(100);
randNumber3 = random(1000);
randNumber4 = random(10000);
randNumber5 = random(100000);

Serial.println();
Serial.print("First Number is :- "); Serial.println(randNumber1);
Serial.print("Second  Number is :- "); Serial.println(randNumber2);
Serial.print("Third Number is :- "); Serial.println(randNumber3);
Serial.print("Fourth Number is :- "); Serial.println(randNumber4);
Serial.print("Fifth Number is :- "); Serial.println(randNumber5);
   
lcd.print("Random Number is :-");
lcd.setCursor (0,1);
lcd.print(randNumber1);
delay(2000);
lcd.clear();  

lcd.print("Random Number is :-");
lcd.setCursor (0,1);
lcd.print(randNumber2);
delay(2000);
lcd.clear();

lcd.print("Random Number is :-");
lcd.setCursor (0,1);
lcd.print(randNumber3);
delay(2000);
lcd.clear();

lcd.print("Random Number is :-");
lcd.setCursor (0,1);
lcd.print(randNumber4);
delay(2000);
lcd.clear();

lcd.print("Random Number is :-");
lcd.setCursor (0,1);
lcd.print(randNumber5);
delay(2000);
lcd.clear();
}
