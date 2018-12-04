/* Codigo adaptado por Mateus Berardo a partir do codigo disponibilizado por FilipeFlop */

#include <Stepper.h>

//Quantidade de passos que o motor deve dar para completar uma volta completa
const int stepsPerRevolution = 2038;

//Inicializa a biblioteca utilizando as portas de 8 a 11 para
//ligacao ao motor
Stepper myStepper(stepsPerRevolution, 8,10,9,11);
  
void setup(){
    //Determina a velocidade inicial do motor
    myStepper.setSpeed(60);
}
  
void loop(){
    //Gira o motor no sentido horario a 90 graus
    for (int i = 0; i<=3; i++){
        myStepper.step(-509);
        delay(2000);
    }
  
    //Gira o motor no sentido anti-horario a 120 graus
    for (int i = 0; i<=2; i++){
        myStepper.step(679);
        delay(2000);
    }
 
    //Gira o motor no sentido horario, aumentando a
    //velocidade gradativamente
    for (int i = 10; i<=60; i=i+10){
        myStepper.setSpeed(i);
        myStepper.step(40*i);
    }
    delay(2000);
}
