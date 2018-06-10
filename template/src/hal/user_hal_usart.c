/**
  ******************************************************************************
  * @file    user_hal_usart.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer USART drivers.
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


#include "user_hal_usart.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_usart_init(USER_USART_TypeDef usart)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (usart)
    {
        case USER_USART_INSTANCE0:
            //user code ...           
            break;
            
        case USER_USART_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_usart_deInit(USER_USART_TypeDef usart)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (usart)
    {
        case USER_USART_INSTANCE0:
            //user code ...           
            break;
            
        case USER_USART_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_usart_sendOneByte(USER_USART_TypeDef usart, U8 ch)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (usart)
    {
        case USER_USART_INSTANCE0:
            //user code ...           
            break;
            
        case USER_USART_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
