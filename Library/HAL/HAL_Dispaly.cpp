#include "HAL.h"
#include "Adafruit_ST7789.h"

typedef Adafruit_ST7789 Screen_class;

static Screen_class Screen(Screen_CS_PIN, Screen_DC_PIN, Screen_RST_PIN, &Screen_SPI, SCREEN_HOR_RES, SCREEN_VER_RES);


void HAL::Dispaly_init()
{
    Serial.println("Display:init");
    Screen.begin();
    Screen.setRotation(0);
    Screen.fillScreen(Screen_class::COLOR_BLUE);
}
