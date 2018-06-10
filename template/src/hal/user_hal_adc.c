/**
  ******************************************************************************
  * @file    user_hal_adc.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer ADC drivers.
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


#include "user_hal_adc.h"


USER_HAL_StatusTypeDef user_hal_adc_init(USER_ADC_TypeDef adc)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (adc)
    {
        case USER_ADC_INSTANCE0:
            //user code ...
            break;

        case USER_ADC_INSTANCE1:
            //user code ...
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_adc_deInit(USER_ADC_TypeDef adc)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (adc)
    {
        case USER_ADC_INSTANCE0:
            //user code ...
            break;

        case USER_ADC_INSTANCE1:
            //user code ...
            break;

        default:
            break;
    }

    return status;
}

U32 user_hal_adc_getValue(USER_ADC_TypeDef adc)
{
    U32 adcValue = 0;
    
    switch (adc)
    {
        case USER_ADC_INSTANCE0:
            //user code ...
            break;

        case USER_ADC_INSTANCE1:
            //user code ...
            break;

        default:
            break;
    }

    return adcValue;
}


/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
