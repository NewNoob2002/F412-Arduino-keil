#ifndef __HAL_H
#define __HAL_H

#include <stdint.h>
#include <stdarg.h>
#include "../Arduino_API/Arduino.h"
#define LED_RED   PC0
namespace HAL {
	
void HAL_Init();

void HAL_HardFault_init();
	
//led
void HAL_Power_led();
	
void HAL_Update();

}


#endif