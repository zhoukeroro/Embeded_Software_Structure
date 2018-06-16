/**
  ******************************************************************************
  * @file    user_hal_gpio.h
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

#ifndef __USER_HAL_GPIO_H__
#define __USER_HAL_GPIO_H__


typedef enum {
  USER_GPIO_PIN_RESET = 0U,
  USER_GPIO_PIN_SET
} USER_GPIO_PinStatus;


typedef enum
{
    USER_GPIO_INSTANCE0 = 0,
    USER_GPIO_INSTANCE1,
    USER_GPIO_INSTANCE2,
    USER_GPIO_INSTANCE_NUM
} USER_GPIO_TypeDef;


USER_HAL_StatusTypeDef user_hal_gpio_init(USER_GPIO_TypeDef gpio);
USER_HAL_StatusTypeDef user_hal_gpio_deInit(USER_GPIO_TypeDef gpio);

USER_HAL_StatusTypeDef user_hal_gpio_high(USER_GPIO_TypeDef gpio);
USER_HAL_StatusTypeDef user_hal_gpio_low(USER_GPIO_TypeDef gpio);
USER_HAL_StatusTypeDef user_hal_gpio_toogle(USER_GPIO_TypeDef gpio);
USER_GPIO_PinStatus user_hal_gpio_getLevel(USER_GPIO_TypeDef gpio);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
