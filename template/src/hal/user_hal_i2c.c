/**
  ******************************************************************************
  * @file    user_hal_i2c.c
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

#include "user_hal.h"


I2C_HandleTypeDef I2cHandle;


static void User_I2C_Error_Handler(void)
{
    while(1);
}


USER_HAL_StatusTypeDef user_hal_i2c_init(USER_I2C_TypeDef i2c)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (i2c)
    {
        case USER_I2C_INSTANCE0:
        {
            I2cHandle.Instance             = EXAMPLE_I2C0_PER;
            I2cHandle.Init.ClockSpeed      = 400000;
            I2cHandle.Init.DutyCycle       = I2C_DUTYCYCLE_2;
            I2cHandle.Init.OwnAddress1     = 0x30F;
            I2cHandle.Init.AddressingMode  = I2C_ADDRESSINGMODE_7BIT;
            I2cHandle.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
            I2cHandle.Init.OwnAddress2     = 0xFF;
            I2cHandle.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
            I2cHandle.Init.NoStretchMode   = I2C_NOSTRETCH_DISABLE;  

            if(HAL_I2C_Init(&I2cHandle) != HAL_OK)
            {
                User_I2C_Error_Handler();
            }
        }
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
            HAL_I2C_DeInit(&I2cHandle);
            break;
            
        case USER_I2C_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_i2c_StartSignal(USER_I2C_TypeDef i2c)
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


USER_HAL_StatusTypeDef user_hal_i2c_StopSignal(USER_I2C_TypeDef i2c)
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


USER_HAL_StatusTypeDef user_hal_i2c_SendOneByte(USER_I2C_TypeDef i2c, U8 data)
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


U8 user_hal_i2c_RecvOneByte(USER_I2C_TypeDef i2c, USER_HAL_StatusTypeDef ack)
{
    U8 data = 0xFF;

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

    return data;
}


USER_HAL_StatusTypeDef user_hal_i2c_Transmit(USER_I2C_TypeDef i2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (i2c)
    {
        case USER_I2C_INSTANCE0:            
            while(HAL_I2C_Master_Transmit(&I2cHandle, DevAddress, pData, Size, 10000)!= HAL_OK)
            {
                if (HAL_I2C_GetError(&I2cHandle) != HAL_I2C_ERROR_AF)
                {
                    User_I2C_Error_Handler();
                }
            }
            break;

        case USER_I2C_INSTANCE1:

            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_i2c_Receive(USER_I2C_TypeDef i2c, uint16_t DevAddress, uint8_t *pData, uint16_t Size)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (i2c)
    {
        case USER_I2C_INSTANCE0:
            while(HAL_I2C_Master_Receive(&I2cHandle, DevAddress, pData, Size, 10000) != HAL_OK)
            {
                if (HAL_I2C_GetError(&I2cHandle) != HAL_I2C_ERROR_AF)
                {
                    User_I2C_Error_Handler();
                }
            }
            break;

        case USER_I2C_INSTANCE1:

            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
