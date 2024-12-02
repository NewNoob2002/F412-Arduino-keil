#include "HAL.h"
#include <cm_backtrace.h>

void HAL::HAL_HardFault_init()
{
    cm_backtrace_init();
}