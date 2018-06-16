/**
  ******************************************************************************
  * @file    user_hal_exti.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer EXTI drivers.
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


USER_HAL_StatusTypeDef user_hal_exti_init(USER_EXTI_TypeDef exti)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    GPIO_InitTypeDef  GPIO_InitStruct;
    
    switch (exti)
    {
        case USER_EXTI_INSTANCE0:
            EXAMPLE_EXTI0_GPIO_CLK_ENABLE();
            GPIO_InitStruct.Pin = EXAMPLE_EXTI0_PIN;
            GPIO_InitStruct.Pull = GPIO_NOPULL;
            GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_MEDIUM;
            GPIO_InitStruct.Mode   = GPIO_MODE_IT_FALLING; 
            HAL_GPIO_Init(EXAMPLE_EXTI0_GPIO_PORT, &GPIO_InitStruct);

            /* Enable and set Button EXTI Interrupt to the lowest priority */
            HAL_NVIC_SetPriority(EXAMPLE_EXTI0_EXTI_IRQn, 0x0F, 0);
            HAL_NVIC_EnableIRQ(EXAMPLE_EXTI0_EXTI_IRQn);
            break;
            
        case USER_EXTI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_exti_deInit(USER_EXTI_TypeDef exti)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (exti)
    {
        case USER_EXTI_INSTANCE0:
            HAL_GPIO_DeInit(EXAMPLE_EXTI0_GPIO_PORT, EXAMPLE_EXTI0_PIN);
            break;
            
        case USER_EXTI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_FlagTypeDef user_hal_exti_getITFlag(USER_EXTI_TypeDef exti)
{
    USER_HAL_FlagTypeDef flag = USER_HAL_RESET;
    
    switch (exti)
    {
        case USER_EXTI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_EXTI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return flag;
}


USER_HAL_StatusTypeDef user_hal_exti_clearITFlag(USER_EXTI_TypeDef exti)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (exti)
    {
        case USER_EXTI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_EXTI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
