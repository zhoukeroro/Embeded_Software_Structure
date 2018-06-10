/**
  ******************************************************************************
  * @file    user_hal_crc.h
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer CRC drivers.
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


#ifndef __USER_HAL_CRC_H__
#define __USER_HAL_CRC_H__


#include "user_hal.h"

typedef enum
{
    USER_CRC_INSTANCE0 = 0,
    USER_CRC_INSTANCE_NUM
}USER_CRC_TypeDef;


USER_HAL_StatusTypeDef user_hal_crc_init(USER_CRC_TypeDef crc);
USER_HAL_StatusTypeDef user_hal_crc_deInit(USER_CRC_TypeDef crc);
U32 user_hal_getValue(USER_CRC_TypeDef crc, U32 pBuffer[], U32 length);

#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
