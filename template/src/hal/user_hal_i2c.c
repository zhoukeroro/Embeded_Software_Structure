/**
  ******************************************************************************
  * @file    user_hal_i2c.c
  * @author  William Zhou
  * @version V0.1.0
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


#include "user_hal_i2c.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_i2c_init(USER_I2C_TypeDef i2c)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (i2c)
    {
        case USER_I2C_INSTANCE0:
            //user code ...           
            break;
            
        case USER_I2C_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_i2c_deInit(USER_I2C_TypeDef i2c)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (i2c)
    {
        case USER_I2C_INSTANCE0:
            //user code ...           
            break;
            
        case USER_I2C_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/