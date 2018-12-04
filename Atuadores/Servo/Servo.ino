#include <Servo.h>
 
#define SERVO 6 // Porta Digital 6
 
Servo s; // Variavel Servo
int pos=0; // Posicao do Servo
 
void setup (){
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(pos); // Inicia motor posição zero
}
 
void loop(){
  for(pos = 0; pos < 90; pos++){
    s.write(pos);
    delay(15);
  }
  delay(1000);
  for(pos = 90; pos >= 0; pos--){
    s.write(pos);
    delay(15);
  }
}
