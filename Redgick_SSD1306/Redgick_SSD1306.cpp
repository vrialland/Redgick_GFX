#include Redgick_SSD1306.h

Redgick_SSD1306::Redgick_SSD1306(uint8_t sdaPin, uint8_t sclPin, uint8_t address, uint8_t geometry):
    _sdaPin(sdaPin), _sclPin(sclPin), _address(address)
{
    switch (geometry) {
        case GEOMETRY_128_64:
            this->_width = 128;
            this->_height = 64;
            this->_upscaleFactor = 4;
            break;
        case GEOMETRY_64_48:
            this->_width = 64;
            this->_height = 48;
            this->_upscaleFactor = 2;
            break;
    }
}

Redgick_SSD1306::init() {
    Wire.begin(this->_sdaPin, this->_sclPin);
    Wire.setClock(700000);
}

void Redgick_SSD1306::intensity(uint8_t value) {

}

void Redgick_SSD1306::clear() {

}

void Redgick::display(uint8_t* buffer64) {

}
