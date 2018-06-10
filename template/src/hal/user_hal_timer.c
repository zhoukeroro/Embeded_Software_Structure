/**
  ******************************************************************************
  * @file    user_hal_timer.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer TIMER drivers.
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


#include "user_hal_timer.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_timer_init(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_timer_deInit(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

USER_HAL_StatusTypeDef user_hal_timer_stop(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_FlagTypeDef user_hal_timer_getITFlag(USER_TIMER_TypeDef timer)
{
    USER_HAL_FlagTypeDef flag = USER_HAL_RESET;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return flag;
}


USER_HAL_StatusTypeDef user_hal_timer_clearITFlag(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
