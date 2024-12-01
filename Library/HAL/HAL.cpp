#include "HAL/HAL.h"

#include "MillisTaskManager/MillisTaskManager.h"

static MillisTaskManager taskM;

void HAL::HAL_Init()
{
	Serial.begin(115200);
	Serial.println("test");
	
}