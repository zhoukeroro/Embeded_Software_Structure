#ifndef __USER_HAL_RTC_H__
#define __USER_HAL_RTC_H__


#include "user_hal.h"

typedef enum
{
    USER_RTC_INSTANCE0 = 0,
    USER_RTC_INSTANCE1,
    USER_RTC_INSTANCE_NUM
}USER_RTC_TypeDef;


USER_HAL_StatusTypeDef user_hal_rtc_init(USER_RTC_TypeDef rtc);
USER_HAL_StatusTypeDef user_hal_rtc_deInit(USER_RTC_TypeDef rtc);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
