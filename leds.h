#pragma once

#include <stdint.h>
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

void pixel(
  Adafruit_NeoPixel& strip,
  uint8_t ledIndex,
  uint8_t r,
  uint8_t g,
  uint8_t b
);

void all(
  Adafruit_NeoPixel& strip,
  uint8_t ledCount,
  uint8_t r,
  uint8_t g,
  uint8_t b
);
