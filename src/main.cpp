#include <Arduino.h>

#define PWMLED 6
#define Lichtsensor 2^
#define Anderung 3

void setup()
{
  Serial.begin(115200);
  pinMode(PWMLED, OUTPUT);
  
}

void loop()
{
  analogWrite(PWMLED, 128);
  
}
