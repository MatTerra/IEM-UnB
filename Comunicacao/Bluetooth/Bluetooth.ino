#define LED 13

void setup(){
    //Inicializa o canal serial (USB ou Bluetooth)
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop(){
   //Avalia se ha dados disponiveis na porta serial
   while(Serial.available() > 0){
        char c = Serial.read();
        Serial.println(c);
        if(c == ‘0’){
               digitalWrite(LED, LOW);
        } else if(c == ‘1’) {
               digitalWrite(LED, HIGH);
        }
   }
}
