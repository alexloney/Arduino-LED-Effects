#include "Utilities.h"
#include "FadeInOut.h"
#include "Strobe.h"
#include "HalloweenEyes.h"
#include "Cylon.h"
#include "KITT.h"
#include "Twinkle.h"
#include "Sparkle.h"
#include "RunningLights.h"
#include "ColorWipe.h"
#include "RainbowCycle.h"
#include "TheatreChase.h"
#include "Fire.h"
#include "BouncingBalls.h"
#include "MeteorRain.h"

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1:
#define LED_PIN    6

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

void setup() {
  Serial.begin(9600);
  
  strip.begin();
  strip.clear();
  strip.show(); // Initialize all pixels to 'off'

  randomSeed(analogRead(0));

  random(100);
  delay(100);

}

void loop() {

  // do_static_random_glow_itteration();
  
  // RGBLoop();
  // FadeInOut(0xff, 0x77, 0x00);
  // Strobe(0xff, 0xff, 0xff, 10, 50, 1000);
  // HalloweenEyes(0xff, 0x00, 0x00,
  //               1, 4,
  //               true, random(5,50), random(50,150),
  //               random(1000, 10000));
  // CylonBounce(0xff, 0, 0, 4, 10, 50);
  // NewKITT(0xff, 0, 0, 8, 10, 50);
  // Twinkle(0xff, 0, 0, 10, 100, false);
  // TwinkleRandom(20, 100, false);
  // Sparkle(0xff, 0xff, 0xff, 0);
  // SnowSparkle(0x10, 0x10, 0x10, 20, random(100,1000));
  // RunningLights(0xff,0xff,0x00, 50);
  // colorWipe(0x00,0xff,0x00, 50);
  // colorWipe(0x00,0x00,0x00, 50);
  rainbowCycle(20);
  // theaterChase(0xff,0,0,50);
  // theaterChaseRainbow(50);
  // Fire(55,120,15);
  // BouncingBalls(0xff,0,0, 3);
  // meteorRain(0xff,0xff,0xff,10, 64, true, 30);
}
