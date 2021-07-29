#include <Arduino.h>

int sensorPin = A5;    // Select the input pin for the Analog Input
int sensorValue = 0;  // Store sensor value

void setup() {  
  Serial.begin(9600); // Set baudrate
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  
  delay(1000); // add delay in ms  
  
  Serial.print(sensorValue); // print sensor value
  Serial.print("\t");
  
}