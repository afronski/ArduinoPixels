







#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif
#ifndef ARDUINOGAME
 #define ARDUINOGAME
#endif

//#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoPixel.h>
#include <Adafruit_NeoMatrix.h>

#include <Hero.h>
#include <PixelMain.h>
#include <PixelGameInclude.h>
#include <NeopixelPixelRenderer.h>
#include <NeuroPixelRenderer.h>

PixelRenderer *renderer;
PixelMain *pixelMain;

int count =0;
unsigned long secTime=0;
unsigned long lastTime=0;
boolean chekBrightness = true;
void setup(){
    Serial.begin(57600);
    Serial3.begin(57600);
    Serial.println("start2");

    renderer = new NeopixelPixelRenderer();
    pixelMain = new PixelMain(renderer);

    pixelMain->setup();
    secTime =millis();
    lastTime =millis();
}

int incomingByte = 0;
void loop() {

  if(chekBrightness)
  {
       pixelMain->brightness = analogRead(0)/4;
  }
  
  unsigned long  currentTime =millis();
  float timestep  = currentTime-lastTime;
  lastTime = currentTime;
  
  
  
  
   if (Serial3.available() > 0) 
   {
              // chekBrightness =false;
                incomingByte = Serial3.read();
                pixelMain->setInput((int)incomingByte);
    }

    pixelMain->update(timestep /200);
    pixelMain->draw();
}
  

