ArduinoPixels
=============

This is the Code for an Arduino based video game, originally designed by 
Kris Temmerman (@neuroprod).

See this blog post for details of the original implementation:
http://www.neuroproductions.be/arduino/arduino-video-game/

Getting started
===============

The game code can be run on an Arduino Due or, using Cinder, on a Mac or Windows PC.

Arduino
-------

Prerequisites:

- 2 Arduino Due boards (one running the game, one handling input and music)
- Arduino IDE 1.5.x (must support Arduino Due)


1. Copy the folders "PixelGame" and "PixelShared" from the "libraries" into your Arduino library folder (usually ~/Arduino/libraries).
2. Open the PixelDisplayGame/PixelDisplayGame.ino sketch in the Arduino IDE
3. Set Tools -> Board -> Arduino Due
4. Compile and upload the sketch to the first Arduino Due - the one that will run the display and game logic.
5. Open the pixelGameController/pixelGameController.ino sketch in the Arduino IDE
6. Compile and upload the sketch to the second Arduino Due - this will handle the joysticks and music playback.

Now build the hardware as described here:
http://www.neuroproductions.be/arduino/arduino-video-game/ 
and enjoy the game!

Windows
-------

Prerequisites:

- Visual Studio Express 2012 for Windows Desktop (http://www.microsoft.com/de-de/download/details.aspx?id=34673)
- Cinder for Visual C++ 2012 (http://libcinder.org/download/)

TODO describe Windows  setup

Mac
---

Prerequisites:

- XCode
- Cinder for Mac (http://libcinder.org/download/)

TODO describe Mac setup

License
=======

The code is licensed under an MIT license, assets are licensed under Creative-Commons Attribution.

Contributors
============

- Kris Temmerman - original design and implementation
