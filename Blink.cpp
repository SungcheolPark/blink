#include "Arduino.h"
#include "blink.h"
 
Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}
 
void Blink::on(int time)
{
  digitalWrite(_pin, HIGH);
  _time = time;
  delay(_time);
}
 
void Blink::off(int time)
{
  digitalWrite(_pin, LOW);
  _time = time;
  delay(_time);
}
