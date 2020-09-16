# LED dithering implementation for Adafruit NeoPixel Library

At the time of writing controlling LEDs and LED strips via NeoPixel library is trivial. However, the library does not take into account that LED brightness is not linear. What this means that with "regular code" the LEDs brighten too fast and it's impossible to do color fades and gradients by using linear RGB values.

The implementation found in this repository allows you to control:
- single LED by specifying linear RGB values:
The implementation will try to choose as good intensity values as possible
- multiple LEDS by specifying linear RGB values:
The implementation will automatically use dithering to achieve the optimum result

## How to use it
Just grab the leds.c and leds.h, include leds.h and initialize your LED strip as usual, for example ...
~~~
#include "./leds.h"
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(30, 10, NEO_GRB + NEO_KHZ800);
~~~
... then after your initialization code ...
~~~
strip.begin();
strip.show();
~~~
... simply set a single pixel:
~~~
// set led #7 to RGB 21, 41, 91
pixel(strip, 7, 21, 41, 91);
~~~
... or multiple pixels all at once (with dithering):
~~~
// 30 leds with RGB 110,44,201
all(strip, 30, 110, 44, 201); 
~~~

That's it!

