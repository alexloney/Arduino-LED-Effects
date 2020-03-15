#include <Adafruit_NeoPixel.h>

// How many NeoPixels are attached to the Arduino?
#define LED_COUNT 60 * 4
#define NUM_LEDS LED_COUNT

void setAll(byte red, byte green, byte blue);
void showStrip();
void setPixel(int Pixel, byte red, byte green, byte blue);
byte * Wheel(byte WheelPos);
