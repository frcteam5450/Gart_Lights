// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define UPPERSHELF            6
#define LOWERSHELF  5
#define UNDERCARRIAGE 8

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      16
#define LEDS_UNDER

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel upperShelf = Adafruit_NeoPixel(NUMPIXELS, UPPERSHELF, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel lowerShelf = Adafruit_NeoPixel(NUMPIXELS, LOWERSHELF, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel underCarriage = Adafruit_NeoPixel(LEDS_UNDER, UNDERCARRIAGE, NEO_GRB + NEO_KHZ800);


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
