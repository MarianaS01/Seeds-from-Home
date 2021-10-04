#include <dht.h>
dht DHT;
#define DHT11_PIN 9

void setup()
{
  Serial.begin(9600); /* Visualizar en monitor serie */
}

void loop()
{
  DHT.read11(DHT11_PIN);

 //Sensor de Temperatura//
 Serial.print("Temperatura =");
 Serial.print(DHT.temperature);
 Serial.print(" C");

 //Sensor de Humedad//
 Serial.print("Humedad =");
 Serial.print(DHT.humidity);
 Serial.println(" %");
 delay(1000);
}
