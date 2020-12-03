#include <Arduino.h>

int light = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  light = analogRead(A0);
  Serial.println(light);
  if(light > 450) {
    Serial.println("It is quite light");
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
    else if(light > 229 && light < 451) { 
        Serial.println("It is average light!");
       digitalWrite(13, LOW);
       digitalWrite(12,HIGH);
    }
     else {
        Serial.println("It is pretty dark!");
        digitalWrite(13,HIGH);
        digitalWrite(12,HIGH);
    }  
    delay(1000);
}