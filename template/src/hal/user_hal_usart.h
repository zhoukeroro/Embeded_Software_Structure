/**
  ******************************************************************************
  * @file    user_hal_usart.h
  * @author  William Zhou
  * @version V0.1.0
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


#ifndef __USER_HAL_USART_H__
#define __USER_HAL_USART_H__


#include "user_hal.h"

typedef enum
{
    USER_USART_INSTANCE0 = 0,
    USER_USART_INSTANCE1,
    USER_USART_INSTANCE_NUM
}USER_USART_TypeDef;


USER_HAL_StatusTypeDef user_hal_usart_init(USER_USART_TypeDef usart);
USER_HAL_StatusTypeDef user_hal_usart_deInit(USER_USART_TypeDef usart);

USER_HAL_StatusTypeDef user_hal_usart_sendByte(USER_USART_TypeDef usart, U8 ch);



#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
