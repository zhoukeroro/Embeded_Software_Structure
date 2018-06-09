/**
  ******************************************************************************
  * @file    user_hal_exti.c
  * @author  William Zhou
  * @version V0.1.0
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


#include "user_hal_exti.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_exti_init(USER_EXTI_TypeDef exti)
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


USER_HAL_StatusTypeDef user_hal_exti_deInit(USER_EXTI_TypeDef exti)
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


USER_HAL_ITStatusTypeDef user_hal_exti_getITFlag(USER_EXTI_TypeDef exti)
{
    USER_HAL_ITStatusTypeDef status = USER_HAL_RESET;
    
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
