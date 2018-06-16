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

#include "user_hal.h"


GPIO_TypeDef *GPIO_PORT[USER_GPIO_INSTANCE_NUM] = {EXAMPLE_GPIO0_GPIO_PORT, EXAMPLE_GPIO1_GPIO_PORT, EXAMPLE_GPIO2_GPIO_PORT};
uint32_t GPIO_PIN[USER_GPIO_INSTANCE_NUM] = {EXAMPLE_GPIO0_PIN, EXAMPLE_GPIO1_PIN, EXAMPLE_GPIO2_PIN};


USER_HAL_StatusTypeDef user_hal_gpio_init(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    GPIO_InitTypeDef  GPIO_InitStruct;

    switch (gpio)
    {
        case USER_GPIO_INSTANCE0:
            EXAMPLE_GPIO0_GPIO_CLK_ENABLE();            
            GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
            GPIO_InitStruct.Pull  = GPIO_PULLUP;
            GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
            GPIO_InitStruct.Pin = EXAMPLE_GPIO0_PIN;
            HAL_GPIO_Init(EXAMPLE_GPIO0_GPIO_PORT, &GPIO_InitStruct);
            break;
            
        case USER_GPIO_INSTANCE1:
            EXAMPLE_GPIO1_GPIO_CLK_ENABLE();            
            GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
            GPIO_InitStruct.Pull  = GPIO_PULLUP;
            GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
            GPIO_InitStruct.Pin = EXAMPLE_GPIO1_PIN;
            HAL_GPIO_Init(EXAMPLE_GPIO1_GPIO_PORT, &GPIO_InitStruct);
            break;

        case USER_GPIO_INSTANCE2:
            EXAMPLE_GPIO2_GPIO_CLK_ENABLE();            
            GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
            GPIO_InitStruct.Pull  = GPIO_PULLUP;
            GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
            GPIO_InitStruct.Pin = EXAMPLE_GPIO2_PIN;
            HAL_GPIO_Init(EXAMPLE_GPIO2_GPIO_PORT, &GPIO_InitStruct);
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_deInit(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    HAL_GPIO_DeInit(GPIO_PORT[gpio], GPIO_PIN[gpio]);

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_high(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    HAL_GPIO_WritePin(GPIO_PORT[gpio], GPIO_PIN[gpio], GPIO_PIN_SET);

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_low(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    HAL_GPIO_WritePin(GPIO_PORT[gpio], GPIO_PIN[gpio], GPIO_PIN_RESET);

    return status;
}


USER_HAL_StatusTypeDef user_hal_gpio_toogle(USER_GPIO_TypeDef gpio)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    HAL_GPIO_TogglePin(GPIO_PORT[gpio], GPIO_PIN[gpio]);

    return status;
}


USER_GPIO_PinStatus user_hal_gpio_getLevel(USER_GPIO_TypeDef gpio)
{
    USER_GPIO_PinStatus status = USER_GPIO_PIN_RESET;

    if ((HAL_GPIO_ReadPin(GPIO_PORT[gpio], GPIO_PIN[gpio]) == GPIO_PIN_SET))
    {
        status = USER_GPIO_PIN_SET;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
