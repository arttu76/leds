#include "./leds.h"

#define DITHER_0  1<<5 | 0b0
#define DITHER_20 5<<5 | 0b00100
#define DITHER_25 4<<5 | 0b0100
#define DITHER_33 3<<5 | 0b001
#define DITHER_50 2<<5 | 0b10
#define DITHER_66 3<<5 | 0b110
#define DITHER_75 4<<5 | 0b1011
#define DITHER_80 5<<5 | 0b11011

#define DITHER_LENGTH(dither) dither >> 5
#define DITHER_PATTERN(dither) 0b11111 & dither

const uint8_t PROGMEM gammaAndDither[] = {
  0, DITHER_0,
  0, DITHER_0,
  0, DITHER_0,
  0, DITHER_0,
  0, DITHER_0,
  0, DITHER_20,
  0, DITHER_20,
  0, DITHER_20,
  0, DITHER_20,
  0, DITHER_25,
  0, DITHER_25,
  0, DITHER_25,
  0, DITHER_25,
  0, DITHER_33,
  0, DITHER_33,
  0, DITHER_33,
  0, DITHER_50,
  0, DITHER_50,
  0, DITHER_50,
  0, DITHER_66,
  0, DITHER_66,
  0, DITHER_66,
  0, DITHER_75,
  0, DITHER_75,
  0, DITHER_75,
  0, DITHER_80,
  0, DITHER_80,
  0, DITHER_80,
  1, DITHER_0,
  1, DITHER_0,
  1, DITHER_20,
  1, DITHER_20,
  1, DITHER_25,
  1, DITHER_25,
  1, DITHER_33,
  1, DITHER_33,
  1, DITHER_50,
  1, DITHER_50,
  1, DITHER_66,
  1, DITHER_75,
  1, DITHER_80,
  2, DITHER_0,
  2, DITHER_20,
  2, DITHER_25,
  2, DITHER_33,
  2, DITHER_50,
  2, DITHER_66,
  2, DITHER_75,
  2, DITHER_80,
  3, DITHER_0,
  3, DITHER_25,
  3, DITHER_33,
  3, DITHER_50,
  3, DITHER_66,
  3, DITHER_75,
  3, DITHER_80,
  4, DITHER_0,
  4, DITHER_25,
  4, DITHER_50,
  4, DITHER_66,
  4, DITHER_80,
  5, DITHER_0,
  5, DITHER_25,
  5, DITHER_50,
  5, DITHER_75,
  6, DITHER_0,
  6, DITHER_25,
  6, DITHER_50,
  6, DITHER_75,
  7, DITHER_0,
  7, DITHER_25,
  7, DITHER_50,
  7, DITHER_75,
  8, DITHER_0,
  8, DITHER_33,
  8, DITHER_66,
  9, DITHER_0,
  9, DITHER_33,
  9, DITHER_66,
  10, DITHER_0,
  10, DITHER_33,
  10, DITHER_66,
  11, DITHER_0,
  11, DITHER_33,
  11, DITHER_66,
  12, DITHER_0,
  12, DITHER_50,
  13, DITHER_0,
  13, DITHER_33,
  13, DITHER_66,
  14, DITHER_0,
  14, DITHER_50,
  15, DITHER_0,
  15, DITHER_50,
  16, DITHER_0,
  16, DITHER_50,
  17, DITHER_0,
  17, DITHER_50,
  18, DITHER_0,
  18, DITHER_50,
  19, DITHER_0,
  19, DITHER_50,
  20, DITHER_0,
  20, DITHER_50,
  21, DITHER_0,
  21, DITHER_50,
  22, DITHER_0,
  22, DITHER_50,
  23, DITHER_0,
  24, DITHER_0,
  24, DITHER_50,
  25, DITHER_0,
  25, DITHER_50,
  26, DITHER_0,
  27, DITHER_50,
  27, DITHER_0,
  28, DITHER_0,
  29, DITHER_0,
  29, DITHER_0,
  30, DITHER_0,
  31, DITHER_0,
  32, DITHER_0,
  32, DITHER_50,
  33, DITHER_0,
  34, DITHER_0,
  35, DITHER_0,
  35, DITHER_50,
  36, DITHER_0,
  37, DITHER_0,
  38, DITHER_0,
  39, DITHER_0,
  39, DITHER_50,
  40, DITHER_0,
  41, DITHER_0,
  42, DITHER_0,
  43, DITHER_0,
  44, DITHER_0,
  45, DITHER_0,
  46, DITHER_0,
  47, DITHER_0,
  48, DITHER_0,
  49, DITHER_0,
  50, DITHER_0,
  50, DITHER_50,
  51, DITHER_0,
  52, DITHER_0,
  54, DITHER_0,
  55, DITHER_0,
  56, DITHER_0,
  57, DITHER_0,
  58, DITHER_0,
  59, DITHER_0,
  60, DITHER_0,
  61, DITHER_0,
  62, DITHER_0,
  63, DITHER_0,
  64, DITHER_0,
  66, DITHER_0,
  67, DITHER_0,
  68, DITHER_0,
  69, DITHER_0,
  70, DITHER_0,
  72, DITHER_0,
  73, DITHER_0,
  74, DITHER_0,
  75, DITHER_0,
  77, DITHER_0,
  78, DITHER_0,
  79, DITHER_0,
  81, DITHER_0,
  82, DITHER_0,
  83, DITHER_0,
  85, DITHER_0,
  86, DITHER_0,
  87, DITHER_0,
  89, DITHER_0,
  90, DITHER_0,
  92, DITHER_0,
  93, DITHER_0,
  95, DITHER_0,
  96, DITHER_0,
  98, DITHER_0,
  99, DITHER_0,
  101, DITHER_0,
  102, DITHER_0,
  104, DITHER_0,
  105, DITHER_0,
  107, DITHER_0,
  109, DITHER_0,
  110, DITHER_0,
  112, DITHER_0,
  114, DITHER_0,
  115, DITHER_0,
  117, DITHER_0,
  119, DITHER_0,
  120, DITHER_0,
  122, DITHER_0,
  124, DITHER_0,
  126, DITHER_0,
  127, DITHER_0,
  129, DITHER_0,
  131, DITHER_0,
  133, DITHER_0,
  135, DITHER_0,
  137, DITHER_0,
  138, DITHER_0,
  140, DITHER_0,
  142, DITHER_0,
  144, DITHER_0,
  146, DITHER_0,
  148, DITHER_0,
  150, DITHER_0,
  152, DITHER_0,
  154, DITHER_0,
  156, DITHER_0,
  158, DITHER_0,
  160, DITHER_0,
  162, DITHER_0,
  164, DITHER_0,
  167, DITHER_0,
  169, DITHER_0,
  171, DITHER_0,
  173, DITHER_0,
  175, DITHER_0,
  177, DITHER_0,
  180, DITHER_0,
  182, DITHER_0,
  184, DITHER_0,
  186, DITHER_0,
  189, DITHER_0,
  191, DITHER_0,
  193, DITHER_0,
  196, DITHER_0,
  198, DITHER_0,
  200, DITHER_0,
  203, DITHER_0,
  205, DITHER_0,
  208, DITHER_0,
  210, DITHER_0,
  213, DITHER_0,
  215, DITHER_0,
  218, DITHER_0,
  220, DITHER_0,
  223, DITHER_0,
  225, DITHER_0,
  228, DITHER_0,
  231, DITHER_0,
  233, DITHER_0,
  236, DITHER_0,
  239, DITHER_0,
  241, DITHER_0,
  244, DITHER_0,
  247, DITHER_0,
  249, DITHER_0,
  252, DITHER_0,
  255, DITHER_0
};

uint8_t getGammaCorrected(uint8_t value) {
  return pgm_read_byte(&gammaAndDither[(uint8_t)value << 1]);
}

uint8_t getDitherType(uint8_t value) {
  return pgm_read_byte(&gammaAndDither[((uint8_t)value << 1) + 1]);
}

void pixel(
  Adafruit_NeoPixel& strip,
  uint8_t ledIndex,
  uint8_t r,
  uint8_t g,
  uint8_t b
) {
  strip.setPixelColor(
    ledIndex,
    getGammaCorrected(r),
    getGammaCorrected(g),
    getGammaCorrected(b)
  );
}

uint8_t getDitheredValue(
  uint8_t baseColor,
  uint8_t ditherPattern,
  uint8_t ditherLength,
  uint8_t index) {
    return baseColor + ((ditherPattern >> index % ditherLength & 1) ? 1 : 0);
}

void all(
  Adafruit_NeoPixel& strip,
  uint8_t ledCount,
  uint8_t r,
  uint8_t g,
  uint8_t b) {
  const uint8_t redValue = getGammaCorrected(r);
  const uint8_t redDitherType = getDitherType(r);
  const uint8_t redDitherPattern = DITHER_PATTERN(redDitherType);
  const uint8_t redDitherLength = DITHER_LENGTH(redDitherType);

  if (g == r && b == r) {
    uint8_t tmp;
    for (uint8_t i = 0; i < ledCount; i++) {
      tmp = getDitheredValue(redValue, redDitherPattern, redDitherLength, i);
      strip.setPixelColor(i, tmp, tmp, tmp);
    }
  } else {
    const uint8_t greenValue = getGammaCorrected(g);
    const uint8_t greenDitherType = getDitherType(g);
    const uint8_t greenDitherPattern = DITHER_PATTERN(greenDitherType);
    const uint8_t greenDitherLength = DITHER_LENGTH(greenDitherType);

    const uint8_t blueValue = getGammaCorrected(b);
    const uint8_t blueDitherType = getDitherType(b);
    const uint8_t blueDitherPattern = DITHER_PATTERN(blueDitherType);
    const uint8_t blueDitherLength = DITHER_LENGTH(blueDitherType);

    for (uint8_t i = 0; i < ledCount; i++) {
      strip.setPixelColor(
        i,
        getDitheredValue(redValue, redDitherPattern, redDitherLength, i),
        getDitheredValue(greenValue, greenDitherPattern, greenDitherLength, i),
        getDitheredValue(blueValue, blueDitherPattern, blueDitherLength, i)
      );
    }
  }

  strip.show();
}
