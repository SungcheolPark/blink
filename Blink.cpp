#include "Arduino.h"
#include "Blink.h"
 
Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}
 
void Blink::on()
{
  digitalWrite(_pin, HIGH);
}
 
void Blink::off()
{
  digitalWrite(_pin, LOW);
}
