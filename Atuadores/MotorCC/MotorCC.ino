#define in1 4
#define in2 5

void setup(){
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
}

void loop(){
    // Rotaciona o motor pra frente
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    // Espera 1 segundo
    delay(1000);
    // Para o motor
    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);
    // Espera meio segundo
    delay(500);
    // Rotaciona o motor para trás
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    // Espera 1 segundo
    delay(1000);
    // Para o motor
    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);
    // Espera meio segundo
    delay(500);
}
