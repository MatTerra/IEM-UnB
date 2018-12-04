#define potPin 0   // Define o pino analogico em que o potenciometro vai ser conectado 
#define ledPin 9   // Define o pino que tera um LED e uma resistencia ligada ao terra 

int valPot = 0; //Variavel que armazena o valor da leitura do potenciometro 

void setup() { 
    pinMode(ledPin,OUTPUT); // Configura o pino do LED como saida 
} 

void loop() {    
    //Faz a leitura analogica do pino em que o potenciometro esta ligado
    valPot =  analogRead(potPin); 
    //Utilizando a funcao map() para transformar uma 
    //escala de 0-1023 em uma escala 0 a 255
    valPot = map(valPot,0,1023,0,255); 
    // Aciona o LED proporcionalmente ao 
    //valor da leitura analogica 
    analogWrite(ledPin,valPot );
}
