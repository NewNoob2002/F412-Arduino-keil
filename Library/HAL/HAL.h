#ifndef __HAL_H
#define __HAL_H

#include <stdint.h>
#include <stdarg.h>
#include "../Arduino_API/Arduino.h"
//led
#define LED_RED   PC0

/*Screen SCK-PA5 MISO-PA6 MOSI-PA7*/
#define Screen_CS_PIN PA15
#define Screen_DC_PIN  PB4
#define Screen_RST_PIN PB6
#define Screen_BLK_PIN PB7 //TIM4
#define Screen_SCK_PIN PB3
#define Screen_SDA_PIN PB5
#define Screen_SPI SPI_1

namespace HAL {
	
void HAL_Init();
//hard_fault
void HAL_HardFault_init();
	
//led
void HAL_Power_led();

//screen
void Dispaly_init();

//ALL_handle
void HAL_Update();

}


#endif