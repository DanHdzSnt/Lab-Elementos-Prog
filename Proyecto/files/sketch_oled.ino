#include <TinyWireM.h>
#include <Tiny4kOLED.h>

  int c=0;
void prepareDisplay() {
  oled.clear();
  oled.begin();
  oled.setCursor(5,1);
  oled.print(("fondo falso"));
  oled.setCursor(5,3);
  oled.print((":)")); 
}
 


void setup() {
  pinMode(3, INPUT);
  pinMode(1,INPUT);
  pinMode(4,OUTPUT);
  int c=0;
  oled.begin(128, 64, sizeof(tiny4koled_init_128x64br), tiny4koled_init_128x64br);
 //oled.setRotation(0);
 // Two fonts are supplied with this library, FONT8X16 and FONT6X8
 // To clear all the memory
    oled.clear();
    oled.on();
    prepareDisplay();
    oled.setFont(FONT6X8);  
}

void loop() {
if(digitalRead(1)==HIGH){
  digitalWrite(4,HIGH);
}
if(digitalRead(1)==LOW){
  digitalWrite(4,LOW);
}
  
  if(digitalRead(3)==HIGH && c==0){
  oled.clear();
  oled.begin();
  oled.setCursor(5,1);
  oled.print(("Oxigenacion:"));
  oled.setCursor(5,3); 
  c=c+1;
  delay(500);
  }

  if(digitalRead(3)==HIGH && c==1){
  oled.clear();
  oled.begin();
  oled.setCursor(5,1);
  oled.print(("Temperatura:"));
  oled.setCursor(5,3); 
  c=c+1;
  delay(500);
  }

  if(digitalRead(3)==HIGH && c==2){
  oled.clear();
  oled.begin();
  oled.setCursor(5,1);
  oled.print(("Impacto:"));
  oled.setCursor(5,3); 
  c=c+1;
  delay(500);
  }

  if(digitalRead(3)==HIGH && c==3){
  oled.clear();
  oled.begin();
  oled.setCursor(5,1);
  oled.print(("Humedad:"));
  oled.setCursor(5,3); 
  c=c+1;
  delay(500);
  }

  if(digitalRead(3)==HIGH && c==4){
  oled.clear();
  oled.begin();
  oled.setCursor(5,1);
  oled.print(("Pulso:"));
  oled.setCursor(5,3); 
  c=c+1;
  delay(500);
  }

  if(digitalRead(3)==HIGH && c==5){
  oled.clear(); 
  c=0;
  delay(500);
  }
}