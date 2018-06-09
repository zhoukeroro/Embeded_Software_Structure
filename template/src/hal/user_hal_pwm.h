/**
  ******************************************************************************
  * @file    user_hal_pwm.h
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


#ifndef __USER_HAL_PWM_H__
#define __USER_HAL_PWM_H__


#include "user_hal.h"

typedef enum
{
    USER_PWM_INSTANCE0 = 0,
    USER_PWM_INSTANCE1,
    USER_PWM_INSTANCE_NUM
}USER_PWM_TypeDef;


USER_HAL_StatusTypeDef user_hal_pwm_init(USER_PWM_TypeDef pwm);
USER_HAL_StatusTypeDef user_hal_pwm_deInit(USER_PWM_TypeDef pwm);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
