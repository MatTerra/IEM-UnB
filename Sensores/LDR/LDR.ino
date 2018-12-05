#define sensorPin 0

void setup(){
    // Inicializa a conexao serial
    Serial.begin(9600);
}

void loop(){
    // Mede a tensao no pino A0, ou seja luminosidade
    int luminosidade  = analogRead(sensorPin);
    // Envia luminosidade pela porta serial
    Serial.println(luminosidade);
    // Espera um segundo
    delay(1000);
}
