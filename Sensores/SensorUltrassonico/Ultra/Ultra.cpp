#include "Arduino.h"
#include "Ultra.h"

Ultra::Ultra(int trigger, int echo){
	Trigger=trigger;
	Echo=echo;
pinMode(Trigger,OUTPUT);
pinMode(Echo,INPUT);
}

float Ultra::medir(){
  digitalWrite(Trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  long duration = pulseIn(Echo, HIGH);
  float distance = (duration / 1000.0)*17;
  return distance;
}