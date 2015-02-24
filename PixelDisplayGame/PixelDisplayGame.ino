/////////////////////////
// BEGIN CONFIGURATION //
/////////////////////////

#define RENDERER NeuroPixelRenderer       // NeuroPixelRenderer | NeopixelPixelRenderer
#define SERIAL_PORT Serial3               // Serial1 | Serial2 | Serial3

const boolean check_brightness = true;    // Read potentiometer to adjust display brightness
const unsigned int target_frametime = 33; // Limit the screen refresh rate (33ms ~= 30FPS)
const unsigned int max_frametime = 50;    // Drop frames if updating slower (50ms = 20FPS)
const float game_speed_div = 500;         // Higher number -> slower game

///////////////////////
// END CONFIGURATION //
///////////////////////


#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif
#ifndef ARDUINOGAME
 #define ARDUINOGAME
#endif

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#include <Hero.h>
#include <PixelMain.h>
#include <PixelGameInclude.h>
#include <NeopixelPixelRenderer.h>
#include <NeuroPixelRenderer.h>

PixelRenderer *renderer;
PixelMain *pixelMain;

const int ledPin = 13;
unsigned long lastTime = 0;

void setup(){
    pinMode(ledPin, OUTPUT);

    SERIAL_PORT.begin(57600);

    renderer = new RENDERER();
    pixelMain = new PixelMain(renderer);

    pixelMain->setup();

    lastTime =millis();
}

int incomingByte = 0;
void loop() {
  unsigned long currentTime;
  unsigned long frametime;
  unsigned long lastUpdate = lastTime;

  if (check_brightness)
    pixelMain->brightness = analogRead(0)/4;

  // Wait for target_frametime
  do
  {
    delay(1); // Avoid 0ms timestep (currentTime - lastUpdate)
    currentTime = millis();
    frametime  = currentTime-lastTime;

    // Read the input controls
    if (SERIAL_PORT.available() > 0)
    {
      incomingByte = SERIAL_PORT.read();
      pixelMain->setInput((int)incomingByte);
      pixelMain->update((currentTime - lastUpdate) / game_speed_div);
      lastUpdate = currentTime;
    }
  }
  while (frametime < target_frametime);

  // Update the game
  if (currentTime > lastUpdate)
    pixelMain->update((currentTime - lastUpdate) / game_speed_div);
  lastTime = currentTime;

  // Drop frames if slower than max_frametime
  if (frametime > max_frametime)
  {
    digitalWrite(ledPin, HIGH); // Indicate frame dropping by lighting up LED
  }
  else
  {
    digitalWrite(ledPin, LOW); // Disable frame drop indication
    pixelMain->draw(); // Draw frame
  }
}
