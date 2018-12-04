/*
  Entrada Pull-up Serial

  Esse exemplo demonstra o uso do pinMode(INPUT_PULLUP). Ele faz a leitura digital da 
  porta 2 e imprime o resultado no Monitor Serial.

  O Circuito:
  - botao conectado ao GND e a porta 2
  - LED interno da porta 13

  Diferentemente do pinMode(INPUT), nao ha a necessidade de um resistor pull-down.                               U 
m resistor interno de 20K-ohm e conectado entre a porta e a alimentacao 5V. Essa 
  configuracao faz com que a leitura seja de HIGH quando o botao nao esta aberto e LOW 
  quando esta fechado.

  criado em 14 Mar 2012
  por Scott Fitzgerald

  Esse exemplo esta em dominio publico.

  http://www.arduino.cc/en/Tutorial/InputPullupSerial
*/

void setup() {
  // inicia a comunicacao Serial 
  Serial.begin(9600);
  // configura a porta 2 como uma entrada e aciona o resistor pull-up interno
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  // faz a leitura do botao e salva o resultado em uma variavel
  int sensorVal = digitalRead(2);
  // mostra a variavel no Monitor Serial
  Serial.println(sensorVal);

  // Tenha em mente que a logica do botao e invertida ao usar o pull-up, assim como 
  // descrito anteriormente 
  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
