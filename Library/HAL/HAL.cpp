#include "HAL/HAL.h"

#include "MillisTaskManager/MillisTaskManager.h"

static MillisTaskManager taskM;
int i =0;
void HAL::HAL_Init()
{
	Delay_Init();
	Serial.begin(115200);
	Serial.println("test");
	
	HAL_HardFault_init();

	taskM.Register(HAL_Power_led,100);
}

void HAL::HAL_Power_led()
{
	pinMode(LED_RED,OUTPUT);
	GPIO_TOGGLE(GPIOC,GPIO_Pin_0);
	Serial.printf("%d\r\n",i++);
//		Serial.println("test");
	delay_ms(111);
}
void HAL::HAL_Update()
{
	taskM.Running(millis());
}