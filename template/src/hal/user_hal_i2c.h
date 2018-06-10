/**
  ******************************************************************************
  * @file    user_hal_i2c.h
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer I2C drivers.
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


#ifndef __USER_HAL_I2C_H__
#define __USER_HAL_I2C_H__


#include "user_hal.h"

typedef enum
{
    USER_I2C_INSTANCE0 = 0,
    USER_I2C_INSTANCE1,
    USER_I2C_INSTANCE_NUM
}USER_I2C_TypeDef;


USER_HAL_StatusTypeDef user_hal_i2c_init(USER_I2C_TypeDef i2c);
USER_HAL_StatusTypeDef user_hal_i2c_deInit(USER_I2C_TypeDef i2c);

USER_HAL_StatusTypeDef user_hal_i2c_StartSignal(USER_I2C_TypeDef i2c);
USER_HAL_StatusTypeDef user_hal_i2c_StopSignal(USER_I2C_TypeDef i2c);
USER_HAL_StatusTypeDef user_hal_i2c_SendOneByte(USER_I2C_TypeDef i2c, U8 data);
U8 user_hal_i2c_RecvOneByte(USER_I2C_TypeDef i2c, USER_HAL_StatusTypeDef ack);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
