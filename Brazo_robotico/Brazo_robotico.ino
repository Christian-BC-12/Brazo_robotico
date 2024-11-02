
#include <ESP32Servo.h>
int potvalue = 0;
int potvalue2 = 0;
int potvalue3 = 0;
int potvalue4 = 0;
int pot = 34;
int pot2 = 35;
int pot3 = 32;
int pot4 = 4;  
Servo servo1;   
Servo servo2;  
Servo servo3;   
Servo servo4;   
void setup() 
{ 
servo1.attach(13);  
servo2.attach(12);  
servo3.attach(14);  
servo4.attach(27);      
}  
void loop() 
{ 
potvalue = analogRead(pot);
potvalue = map(potvalue, 0,  4096, 0, 100 );
servo1.write(potvalue);  
potvalue2 = analogRead(pot2);
potvalue2 = map(potvalue2, 0,  4096, 0, 100 );
servo2.write(potvalue2);
potvalue3 = analogRead(pot3);
potvalue3 = map(potvalue3, 0,  4096, 0, 100 );
servo3.write(potvalue3);
potvalue4 = analogRead(pot4);
potvalue4 = map(potvalue4, 0,  4096, 0, 100 );
servo4.write(potvalue4);
}