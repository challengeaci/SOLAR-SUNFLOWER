
#include <Servo.h>
int servopin=10;
Servo servo1;
int ldr1=0,ldr2=0,ldr3=0;
int ldrpin1=A0,ldrpin2=A1,ldrpin3=A2;
void setup()
{
  Serial.begin(9600);
  servo1.attach(servopin);
}
void loop()
{
  ldr1=analogRead(ldrpin1);
  ldr2=analogRead(ldrpin2);
  ldr3=analogRead(ldrpin3);
  if(ldr1>ldr2 && ldr1>ldr3)
  {
    Serial.println(ldr1);
    Serial.println("Turn 45");
    delay(1000);
    servo1.write(45);
  }
  else if(ldr2>ldr1 && ldr2>ldr3 )
  {
    Serial.println(ldr2);
    Serial.println("Turn 90");
    delay(1000);
    servo1.write(90);
  }
  else if(ldr3>ldr1 && ldr3>ldr2)
  {
    Serial.println(ldr3);
    Serial.println("Turn 145");
    delay(1000);
    servo1.write(145);
  }
}


