/* LED piscante
 * ------------
 *
 * liga e desliga um LED conectado a um pino digital
 * em intervalos de 2 segundos. Idealmente usa-se o pino 13 da
 * placa do Arduino porque ele já possui um resistor ligado a ele
 *
 * Criado em 1 de Junho 2005
 * copyleft 2005 DojoDave <http://www.0j0.org>
 * http://arduino.berlios.de
 * Modificado em 4 de dezembro de 2018
 * 
 * baseado no original de H. Barragan para a placa de e/s Wiring
 * modificado por Mateus Berardo
 */

int ledPin = 9;                // LED conectado ao pino digital 9

void setup()
{
  pinMode(ledPin, OUTPUT);      // configura pino digital como saída
}

void loop()
{
  digitalWrite(ledPin, HIGH);   // liga o LED
  delay(1000);                  // temporiza 1 segundo
  digitalWrite(ledPin, LOW);    // desliga o LED
  delay(1000);                  // aguarda mais um segundo
}
