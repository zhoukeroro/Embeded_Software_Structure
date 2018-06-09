/**
  ******************************************************************************
  * @file    user_hal_spi.h
  * @author  William Zhou
  * @version V0.1.0
  * @brief   User hardware abstract layer SPI drivers.
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


#ifndef __USER_HAL_SPI_H__
#define __USER_HAL_SPI_H__


#include "user_hal.h"

typedef enum
{
    USER_SPI_INSTANCE0 = 0,
    USER_SPI_INSTANCE1,
    USER_SPI_INSTANCE_NUM
}USER_SPI_TypeDef;


USER_HAL_StatusTypeDef user_hal_spi_init(USER_SPI_TypeDef spi);
USER_HAL_StatusTypeDef user_hal_spi_deInit(USER_SPI_TypeDef spi);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
