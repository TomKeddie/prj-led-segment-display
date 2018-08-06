/*
  Fading

  This example shows how to fade an LED using the analogWrite() function.

  The circuit:
  - LED attached from digital pin 9 to ground.

  created 1 Nov 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fading
*/

int led_v_pin = 9;
int led_h_pin = 10;
int led_s_pin = 11;

void setup() {
  // nothing happens in setup
  pinMode(led_v_pin, OUTPUT);
  pinMode(led_h_pin, OUTPUT);
  pinMode(led_s_pin, OUTPUT);
}

void fade_pin(int pin) {
  // fade in from min to max in increments of 5 points:
  for (int fade = 0 ; fade <= 255; fade += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(pin, fade);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fade = 255 ; fade >= 0; fade -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(pin, fade);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}

void loop()
{
  fade_pin(led_v_pin);
  fade_pin(led_h_pin);
  fade_pin(led_s_pin);
}

