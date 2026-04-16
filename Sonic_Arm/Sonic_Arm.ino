#include "VarSpeedServo.h"

//VarSpeedServo servo1;
//VarSpeedServo servo2;
//VarSpeedServo servo3;
//VarSpeedServo servo4;
VarSpeedServo servo5;

const int trigPin = 4;
const int echoPin = 7;
long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
//  servo1.attach(11);               
//  servo2.attach(10);  
//  servo3.attach(9);               
//  servo4.attach(6);
  servo5.attach(5);
}
void loop()
{   
  int run1 = 0;
  int dist = 0;
  int co1 =0;
  int finals =0;
  for (int j=0;j<=2;j++){
      for(int i=15;i<=100;i++){  
      servo5.write(i);
      delay(50);
      distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree
      if (distance <=32){
        dist = dist + distance;
        co1++;
        run1=run1 + i;
      }
      }
      for(int i=100;i>15;i--){  
      servo5.write(i);
      delay(50);
      distance = calculateDistance();
      if (distance <=32){
        dist = dist + distance;
        co1++;
        run1=run1 + i;
      }
      }  
  }
  finals = run1/co1;
  servo5.write(finals);
  delay(5000);
}

int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance= duration*0.034/2;
  return distance;
}











