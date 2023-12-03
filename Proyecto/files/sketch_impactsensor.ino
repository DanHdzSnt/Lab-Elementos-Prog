#include <TinyWireM.h> 
#include <Tiny4kOLED.h>

//attiny85
#define IMPACT_SENSOR_PIN 2 
#define LED_PIN 3 

void setup() {
  TinyWireM.begin();         
  oled.begin();               
  oled.clear();               
  
  pinMode(IMPACT_SENSOR_PIN, INPUT);//sensor de impacto
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int sensorState = digitalRead(IMPACT_SENSOR_PIN);
  
  
  if (sensorState == LOW) { 
    oled.clear();
    oled.setFont(FONT8X16);
    oled.setCursor(0, 2);  
    oled.print("Impacto detectado!");
    
    digitalWrite(LED_PIN, HIGH); 
  } else {
    oled.clear();
    digitalWrite(LED_PIN, LOW); 
  }

  delay(100); 
}
