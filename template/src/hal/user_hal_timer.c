/**
  ******************************************************************************
  * @file    user_hal_timer.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer TIMER drivers.
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

TIM_HandleTypeDef    TimHandle;

void User_TIMER_Error_Handler(void)
{
    while(1);
}

void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htim)
{
  /*##-1- Enable peripheral clock #################################*/
  /* TIMx Peripheral clock enable */
  EXAMPLE_TIMER0_CLK_ENABLE();
  
  /*##-2- Configure the NVIC for TIMx ########################################*/
  /* Set the TIMx priority */
  HAL_NVIC_SetPriority(EXAMPLE_TIMER0_IRQn, 3, 0);

  /* Enable the TIMx global Interrupt */
  HAL_NVIC_EnableIRQ(EXAMPLE_TIMER0_IRQn);
}



USER_HAL_StatusTypeDef user_hal_timer_init(USER_TIMER_TypeDef timer, U16 period)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            /* Set TIMx instance */
            TimHandle.Instance = EXAMPLE_TIMER0_PER;
            TimHandle.Init.Period            = period;
            TimHandle.Init.Prescaler         = 1;
            TimHandle.Init.ClockDivision     = 0;
            TimHandle.Init.CounterMode       = TIM_COUNTERMODE_UP;
            TimHandle.Init.RepetitionCounter = 0;
            TimHandle.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;

            if (HAL_TIM_Base_Init(&TimHandle) != HAL_OK)
            {
                User_TIMER_Error_Handler();
            }
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_timer_deInit(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            if (HAL_TIM_Base_DeInit(&TimHandle) != HAL_OK)
            {
                User_TIMER_Error_Handler();
            }
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

USER_HAL_StatusTypeDef user_hal_timer_stop(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_FlagTypeDef user_hal_timer_getITFlag(USER_TIMER_TypeDef timer)
{
    USER_HAL_FlagTypeDef flag = USER_HAL_RESET;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return flag;
}


USER_HAL_StatusTypeDef user_hal_timer_clearITFlag(USER_TIMER_TypeDef timer)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (timer)
    {
        case USER_TIMER_INSTANCE0:
            //user code ...           
            break;
            
        case USER_TIMER_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
