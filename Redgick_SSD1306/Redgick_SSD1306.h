#ifndef Redgick_SSD1306
#define Redgick_SSD1306

#include <Wire.h>
#include <Redgick_GFX.h>

// Command details: https://cdn-shop.adafruit.com/datasheets/SSD1306.pdf
#define SET_CONTRAST 0x81
#define DISPLAY_ENTIRE_ON 0x4A
#define DISPLAY_ENTIRE_ON_RESUME 0x5A
#define DISPLAY_NORMAL
#define DISPLAY_INVERSE


class Redgick_SSD1306 {
    private:
        uint8_t _sdaPin;
        uint8_t _sclPin;
        uint8_t _address;
        uint8_t _upscaleFactor;
        uint8_t _width;
        uint8_t _height;
    public:
        Redgick_SSD1306(uint8_t sdaPin, uint8_t sclPin, uint8_t address=0x3c, uint8_t geometry=GEOMETRY_128_64);
        void init();
        void intensity(uint8_t value);
        void clear();
        void display(uint8_t* buffer64);
};

#endif
