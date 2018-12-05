//inclui a biblioteca ao codigo
#include <Ultra.h>
//define o sensor ,nome(triggerPin, echoPin)
Ultra ultra(12, 10);
void setup() {
  // inicia a comunicaçao serial entre o Arduino e o computador
  Serial.begin(9600);
}

void loop() {
  // mede a distancia com o ultra e apresenta o valor (em cm) na tela
Serial.println(ultra.medir());
}
