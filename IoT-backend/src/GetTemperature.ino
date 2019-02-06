// DHTLib - Version: Latest 
#include <dht.h>

dht DHT;

int pinDHT11 = 12;
int newPin = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int chk = DHT.read11(pinDHT11);
  int temp = DHT.temperature;
  (newPin, temp * 5);
  Serial.print("Temperature: ");
  //Serial.print(DHT.temperature);
  delay(300);
}
