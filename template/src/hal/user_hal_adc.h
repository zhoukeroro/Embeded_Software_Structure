/**
  ******************************************************************************
  * @file    user_hal_adc.h
  * @author  William Zhou
  * @version V0.1.0
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


#ifndef __USER_HAL_ADC_H__
#define __USER_HAL_ADC_H__


#include "user_hal.h"


typedef enum
{
    USER_ADC_INSTANCE0 = 0,
    USER_ADC_INSTANCE1,
    USER_ADC_INSTANCE_NUM
}USER_ADC_TypeDef;


USER_HAL_StatusTypeDef user_hal_adc_init(USER_ADC_TypeDef adc);
USER_HAL_StatusTypeDef user_hal_adc_deInit(USER_ADC_TypeDef adc);

U32 user_hal_adc_getValue(USER_ADC_TypeDef adc);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
