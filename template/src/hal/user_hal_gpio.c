/**
  ******************************************************************************
  * @file    user_hal_gpio.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer GPIO drivers.
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


#include "user_hal_gpio.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_gpio_init(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            //user code ...           
            break;
            
        case USER_GPIO_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_deInit(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            //user code ...           
            break;
            
        case USER_GPIO_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_high(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            //user code ...           
            break;
            
        case USER_GPIO_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_low(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            //user code ...           
            break;
            
        case USER_GPIO_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_toogle(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            //user code ...           
            break;
            
        case USER_GPIO_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_GPIO_PinStatus user_hal_gpio_getLevel(USER_GPIO_TypeDef gpio)
{
    USER_GPIO_PinStatus status = USER_GPIO_PIN_RESET;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            //user code ...           
            break;
            
        case USER_GPIO_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
