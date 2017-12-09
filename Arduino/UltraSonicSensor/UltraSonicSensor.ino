#include <Servo.h>

#define trig 2
#define echo 3
Servo sv;

float duration;
float distance;
int pos1 = 93;
int pos2 = 180;

void setup() 
{
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  sv.attach(9);
}

void loop() 
{
  digitalWrite(trig,HIGH);
  delay(10);
  digitalWrite(trig,LOW);
  boolean a = digitalRead(echo);
  if (a==1){
    duration = pulseIn(echo,HIGH);
    distance = ((34000*duration)/1000000)/2;
    /*Serial.print(distance);
    Serial.println("cm");
    delay(100);*/
    if (distance<=10){
      sv.write(pos2);
      delay(5000);
      sv.write(pos1);
    }
  }
}
