// wifi module specific to Arduino UNO R4 WiFi, other arduino/arduino compatible boards
// may need a wifi module specific to that board
#include <WiFiS3.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int numSSID = WiFi.scanNetworks();
  
  for(int i = 0; i < numSSID; i++) {
    Serial.print(i);
    Serial.print(". ");
    Serial.print(WiFi.SSID(i));
    Serial.print(", Signal: ");
    Serial.print(WiFi.RSSI(i)); 
    Serial.println("");
  }
  Serial.println("");
}
