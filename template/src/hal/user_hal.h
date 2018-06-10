/**
  ******************************************************************************
  * @file    user_hal.h
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer drivers.
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


#ifndef __USER_HAL_H__
#define __USER_HAL_H__


typedef enum 
{
  USER_HAL_OK       = 0x00U,
  USER_HAL_ERROR    = 0x01U,
  USER_HAL_BUSY     = 0x02U,
  USER_HAL_TIMEOUT  = 0x03U
} USER_HAL_StatusTypeDef;

typedef enum
{
    USER_HAL_RESET = 0,
    USER_HAL_SET = !USER_HAL_RESET
} USER_HAL_FlagTypeDef;

#include "type_def.h"
#include "mcu_resource.h"
#include "user_hal_adc.h"
#include "user_hal_crc.h"
#include "user_hal_dac.h"
#include "user_hal_exti.h"
#include "user_hal_gpio.h"
#include "user_hal_i2c.h"
#include "user_hal_pwm.h"
#include "user_hal_rtc.h"
#include "user_hal_spi.h"
#include "user_hal_timer.h"
#include "user_hal_usart.h"
#include "user_hal_usb.h"

#endif

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
