//test_WakeLight
//Author: Mitchell Ciupak
//Date: 2020-05-03

#include <FastLED.h>

#define NUM_LEDS 60
#define DATA_PIN 2

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void setRGB(int red, int green, int blue) {
  for (int i=0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(red,green,blue); //RGB
  }
  FastLED.show();
}


void loop() {
  //Target RGB is 252,212,64
  //Linear increase of rgb, no idea how this will look
  
  int g = 0;
  int b = 0;
  for (int r=0; r < 252; r++) {
    if(r > (252 - 212)){
      g++;
    }
    
    if(r > (252 - 64)){
      b++;
    }
    
    setRGB(r,g,b);
    delay(3570); //miliseconds //Delayed to work for 15 minutes
  }
  


}
