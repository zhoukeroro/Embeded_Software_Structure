/**
  ******************************************************************************
  * @file    user_hal_dac.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer DAC drivers.
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


#include "user_hal_dac.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_dac_init(USER_DAC_TypeDef dac)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (dac)
    {
        case USER_DAC_INSTANCE0:
            //user code ...           
            break;
            
        case USER_DAC_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_dac_deInit(USER_DAC_TypeDef dac)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (dac)
    {
        case USER_DAC_INSTANCE0:
            //user code ...           
            break;
            
        case USER_DAC_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_dac_setValue(USER_DAC_TypeDef dac, U32 data)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (dac)
    {
        case USER_DAC_INSTANCE0:
            //user code ...           
            break;
            
        case USER_DAC_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
