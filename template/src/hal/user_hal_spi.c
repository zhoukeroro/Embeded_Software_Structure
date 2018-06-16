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

#include "user_hal.h"

SPI_HandleTypeDef SpiHandle;

void User_SPI_Error_Handler(void)
{

}


void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi)
{
    GPIO_InitTypeDef  GPIO_InitStruct;

    if(hspi->Instance == EXAMPLE_SPI0_PER)
    {     
        /*##-1- Enable peripherals and GPIO Clocks #################################*/
        /* Enable GPIO TX/RX clock */
        EXAMPLE_SPI0_NSS_CLK_ENABLE();
        EXAMPLE_SPI0_SCK_CLK_ENABLE();
        EXAMPLE_SPI0_MISO_CLK_ENABLE();
        EXAMPLE_SPI0_MOSI_CLK_ENABLE();
        /* Enable SPI clock */
        EXAMPLE_SPI0_CLK_ENABLE(); 

        /*##-2- Configure peripheral GPIO ##########################################*/  
        /* SPI SCK GPIO pin configuration  */
        GPIO_InitStruct.Pin       = EXAMPLE_SPI0_SCK_PIN;
        GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
        GPIO_InitStruct.Pull      = GPIO_PULLDOWN;
        GPIO_InitStruct.Speed     = GPIO_SPEED_FREQ_HIGH;
        HAL_GPIO_Init(EXAMPLE_SPI0_SCK_PORT, &GPIO_InitStruct);

        /* SPI MISO GPIO pin configuration  */
        GPIO_InitStruct.Pin = EXAMPLE_SPI0_MISO_PIN;
        HAL_GPIO_Init(EXAMPLE_SPI0_MISO_PORT, &GPIO_InitStruct);

        /* SPI MOSI GPIO pin configuration  */
        GPIO_InitStruct.Pin = EXAMPLE_SPI0_MOSI_PIN;
        HAL_GPIO_Init(EXAMPLE_SPI0_MOSI_PORT, &GPIO_InitStruct);

        /* SPI NSS GPIO pin configuration  */
        GPIO_InitStruct.Pin = EXAMPLE_SPI0_NSS_PIN;
        GPIO_InitStruct.Mode      = GPIO_MODE_OUTPUT_PP;
        GPIO_InitStruct.Pull      = GPIO_PULLUP;
        HAL_GPIO_Init(EXAMPLE_SPI0_NSS_PORT, &GPIO_InitStruct);
    }
}

void HAL_SPI_MspDeInit(SPI_HandleTypeDef *hspi)
{
    if(hspi->Instance == EXAMPLE_SPI0_PER)
    {   
        /*##-1- Disable peripherals and GPIO Clocks ################################*/
        /* Configure SPI SCK as alternate function  */
        HAL_GPIO_DeInit(EXAMPLE_SPI0_SCK_PORT, EXAMPLE_SPI0_SCK_PIN);
        /* Configure SPI MISO as alternate function  */
        HAL_GPIO_DeInit(EXAMPLE_SPI0_MISO_PORT, EXAMPLE_SPI0_MISO_PIN);
        /* Configure SPI MOSI as alternate function  */
        HAL_GPIO_DeInit(EXAMPLE_SPI0_MOSI_PORT, EXAMPLE_SPI0_MOSI_PIN);
        /* Configure SPI NSS as alternate function  */
        HAL_GPIO_DeInit(EXAMPLE_SPI0_NSS_PORT, EXAMPLE_SPI0_NSS_PIN);
    }
}

USER_HAL_StatusTypeDef user_hal_spi_init(USER_SPI_TypeDef spi)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            SpiHandle.Instance               = EXAMPLE_SPI0_PER;
            SpiHandle.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_64;
            SpiHandle.Init.Direction         = SPI_DIRECTION_2LINES;
            SpiHandle.Init.CLKPhase          = SPI_PHASE_1EDGE;
            SpiHandle.Init.CLKPolarity       = SPI_POLARITY_LOW;
            SpiHandle.Init.DataSize          = SPI_DATASIZE_8BIT;
            SpiHandle.Init.FirstBit          = SPI_FIRSTBIT_MSB;
            SpiHandle.Init.TIMode            = SPI_TIMODE_DISABLE;
            SpiHandle.Init.CRCCalculation    = SPI_CRCCALCULATION_DISABLE;
            SpiHandle.Init.CRCPolynomial     = 7;
            SpiHandle.Init.NSS               = SPI_NSS_SOFT;
            SpiHandle.Init.Mode = SPI_MODE_MASTER;
            
            if(HAL_SPI_Init(&SpiHandle) != HAL_OK)
            {
                User_SPI_Error_Handler();
            }

            __HAL_SPI_ENABLE(&SpiHandle);
            
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
            if(HAL_SPI_DeInit(&SpiHandle) != HAL_OK)
            {
                User_SPI_Error_Handler();
            }
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
            HAL_GPIO_WritePin(EXAMPLE_SPI0_NSS_PORT, EXAMPLE_SPI0_NSS_PIN, GPIO_PIN_RESET);
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
            HAL_GPIO_WritePin(EXAMPLE_SPI0_NSS_PORT, EXAMPLE_SPI0_NSS_PIN, GPIO_PIN_SET);
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

USER_HAL_StatusTypeDef user_hal_spi_TransmitReceive(USER_SPI_TypeDef spi, U8 aTxBuffer[], U8 aRxBuffer[], U16 size)

{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;
    
    switch (spi)
    {
        case USER_SPI_INSTANCE0:
            if (HAL_SPI_TransmitReceive(&SpiHandle, aTxBuffer, aRxBuffer, size, 5000) != HAL_OK)
            {
                User_SPI_Error_Handler();
            }
            break;
            
        case USER_SPI_INSTANCE1:
            //user code ...           
            break;

        default:
            break;
    }
    
    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
