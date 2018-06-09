/**
  ******************************************************************************
  * @file    user_hal_rtc.c
  * @author  William Zhou
  * @version V0.1.0
  * @brief   User hardware abstract layer RTC drivers.
  * @modification history
  *  Data                Name                  Description
  *  ================    ==================    =================================
  *  8-June-2018         William Zhou          Initial draft
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2018 William Zhou. All rights reserved.
  *
  ******************************************************************************
  */


#include "user_hal_rtc.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_rtc_init(USER_RTC_TypeDef rtc)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (rtc)
    {
        case USER_RTC_INSTANCE0:
            //user code ...           
            break;
            
        case USER_RTC_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_rtc_deInit(USER_RTC_TypeDef rtc)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (rtc)
    {
        case USER_RTC_INSTANCE0:
            //user code ...           
            break;
            
        case USER_RTC_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
