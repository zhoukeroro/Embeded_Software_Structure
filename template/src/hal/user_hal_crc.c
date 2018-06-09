/**
  ******************************************************************************
  * @file    user_hal_crc.c
  * @author  William Zhou
  * @version V0.1.0
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


#include "user_hal_crc.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_crc_init(USER_CRC_TypeDef crc)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (crc)
    {
        case USER_CRC_INSTANCE0:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_crc_deInit(USER_CRC_TypeDef crc)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (crc)
    {
        case USER_CRC_INSTANCE0:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


U32 user_hal_getValue(USER_CRC_TypeDef crc, U32 pBuffer[], U32 length)
{
    U32 crcValue = 0;
    
    switch (crc)
    {
        case USER_CRC_INSTANCE0:
            //user code ...           
            break;

        default:
            break;
    }

    return crcValue;
}


/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
