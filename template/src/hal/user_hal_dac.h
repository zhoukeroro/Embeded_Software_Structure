/**
  ******************************************************************************
  * @file    user_hal_dac.h
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


#ifndef __USER_HAL_DAC_H__
#define __USER_HAL_DAC_H__


#include "user_hal.h"

typedef enum
{
    USER_DAC_INSTANCE0 = 0,
    USER_DAC_INSTANCE1,
    USER_DAC_INSTANCE_NUM
}USER_DAC_TypeDef;


USER_HAL_StatusTypeDef user_hal_dac_init(USER_DAC_TypeDef dac);
USER_HAL_StatusTypeDef user_hal_dac_deInit(USER_DAC_TypeDef dac);

USER_HAL_StatusTypeDef user_hal_dac_setValue(USER_DAC_TypeDef dac, U32 data);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
