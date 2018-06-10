/**
  ******************************************************************************
  * @file    user_hal_spi.c
  * @author  William Zhou
  * @version V0.1.1
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


#include "user_hal_spi.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_spi_init(USER_SPI_TypeDef spi)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_spi_deInit(USER_SPI_TypeDef spi)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_spi_nss_low(USER_SPI_TypeDef spi)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_spi_nss_high(USER_SPI_TypeDef spi)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


U8 user_hal_spi_SendOneByte(USER_SPI_TypeDef spi, U8 data)
{
    U8 ret = 0;
    
    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return ret;
}


U8 user_hal_spi_ReadOneByte(USER_SPI_TypeDef spi)
{
    U8 ret = 0;
    
    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return ret;
}


USER_HAL_FlagTypeDef user_hal_spi_GetSendStatus(USER_SPI_TypeDef spi)
{
    USER_HAL_FlagTypeDef flag = USER_HAL_RESET;

    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            //user code ...           
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }

    return flag;
}


USER_HAL_FlagTypeDef user_hal_spi_GetBusStatus(USER_SPI_TypeDef spi)
{
    USER_HAL_FlagTypeDef flag = USER_HAL_RESET;
    
        switch (spi)
        {
            case USER_SPI_INSTANCE0:
                //user code ...           
                break;
                
            case USER_SPI_INSTANCE1:
                //user code ...           
                break;
    
            default:
                break;
        }
    
        return flag;
}


/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
