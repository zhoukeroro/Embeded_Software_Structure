#ifndef __USER_HAL_TIMER_H__
#define __USER_HAL_TIMER_H__


#include "user_hal.h"

typedef enum
{
    USER_TIMER_INSTANCE0 = 0,
    USER_TIMER_INSTANCE1,
    USER_TIMER_INSTANCE_NUM
}USER_TIMER_TypeDef;


USER_HAL_StatusTypeDef user_hal_timer_init(USER_TIMER_TypeDef timer);
USER_HAL_StatusTypeDef user_hal_timer_deInit(USER_TIMER_TypeDef timer);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
