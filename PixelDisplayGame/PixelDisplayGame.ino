/////////////////////////
// BEGIN CONFIGURATION //
/////////////////////////

#define RENDERER NeuroPixelRenderer // NeuroPixelRenderer | NeopixelPixelRenderer
#define SERIAL_PORT Serial3         // Serial1 | Serial2 | Serial3

const boolean check_brightness = true;   // Read potentiometer to adjust display brightness
const unsigned int target_timestep = 33; // Limit the update rate (33ms ~= 30FPS)
const unsigned int max_timestep = 50;    // Drop frames if updating slower (50ms = 20FPS)

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

    // Let's take a deep breath before diving in
    delay(100);
}

int incomingByte = 0;
void loop() {
  unsigned long currentTime;
  unsigned long timestep;

  if (check_brightness)
    pixelMain->brightness = analogRead(0)/4;

  // Wait for target_timestep
  do
  {
    delay(1); // some well deserved rest
    currentTime = millis();
    timestep  = currentTime-lastTime;
  }
  while (timestep < target_timestep);
  lastTime = currentTime;

  // Read the input controls
  if (SERIAL_PORT.available() > 0)
  {
    incomingByte = SERIAL_PORT.read();
    pixelMain->setInput((int)incomingByte);
  }

  // Update the game
  pixelMain->update(timestep / float(500));

  // Drop frames if slower than max_timestep
  if (timestep > max_timestep)
  {
    digitalWrite(ledPin, HIGH); // Indicate frame dropping by lighting up LED
  }
  else
  {
    digitalWrite(ledPin, LOW); // Disable frame drop indication
    pixelMain->draw(); // Draw frame
  }
}
