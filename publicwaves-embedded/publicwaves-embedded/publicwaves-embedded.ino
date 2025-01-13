// wifi module specific to Arduino UNO R4 WiFi, other arduino/arduino compatible boards
// may need a wifi module specific to that board
#include <WiFiS3.h>



void setup() {
  // initiate serial port
  Serial.begin(9600);
  
  Serial.println("--Initiating publicwaves-embedded--");
}

void loop() {
  
  printWifiNetworks();

}

void printWifiNetworks() {

  // gets the number of wifi networks in the current scan
  int numSSID = WiFi.scanNetworks();
  
  // iterates through each network on current scan
  for(int i = 0; i < numSSID; i++) {

    // amount of milliseconds passed since program has started
    Serial.print(millis());
    Serial.print(" ");

    Serial.print(i);
    Serial.print(". ");

    Serial.print(WiFi.SSID(i));

    Serial.print(", Signal: ");
    Serial.print(WiFi.RSSI(i)); 

    Serial.println("");
  }
  Serial.println("");
}
