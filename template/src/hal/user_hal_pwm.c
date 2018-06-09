/**
  ******************************************************************************
  * @file    user_hal_pwm.c
  * @author  William Zhou
  * @version V0.1.0
  * @brief   User hardware abstract layer PWM drivers.
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


#include "user_hal_pwm.h"
#include "user_hal.h"

USER_HAL_StatusTypeDef user_hal_pwm_init(USER_PWM_TypeDef pwm)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (pwm)
    {
        case USER_PWM_INSTANCE0:
            //user code ...           
            break;
            
        case USER_PWM_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_pwm_deInit(USER_PWM_TypeDef pwm)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (pwm)
    {
        case USER_PWM_INSTANCE0:
            //user code ...           
            break;
            
        case USER_PWM_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
