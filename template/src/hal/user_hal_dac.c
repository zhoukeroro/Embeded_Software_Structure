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

#include "user_hal.h"


DAC_HandleTypeDef    DacHandle;
static DAC_ChannelConfTypeDef sConfig;

void User_DAC_Error_Handler(void)
{
    while(1);
}

void HAL_DAC_MspInit(DAC_HandleTypeDef *hdac)
{
    GPIO_InitTypeDef          GPIO_InitStruct;
    static DMA_HandleTypeDef  hdma_dac1;

    /*##-1- Enable peripherals and GPIO Clocks #################################*/
    /* Enable GPIO clock ****************************************/
    EXAMPLE_DAC0_GPIO_CLK_ENABLE();
    EXAMPLE_DAC1_GPIO_CLK_ENABLE();
    /* DAC Periph clock enable */
    EXAMPLE_DAC_CLK_ENABLE();

    /*##-2- Configure peripheral GPIO ##########################################*/
    /* DAC Channel1 GPIO pin configuration */
    GPIO_InitStruct.Pin = EXAMPLE_DAC0_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(EXAMPLE_DAC0_GPIO_PORT, &GPIO_InitStruct);
    GPIO_InitStruct.Pin = EXAMPLE_DAC1_PIN;
    HAL_GPIO_Init(EXAMPLE_DAC1_GPIO_PORT, &GPIO_InitStruct);
}


void HAL_DAC_MspDeInit(DAC_HandleTypeDef *hdac)
{
  /*##-1- Reset peripherals ##################################################*/
  EXAMPLE_DAC_FORCE_RESET();
  EXAMPLE_DAC_RELEASE_RESET();

  /*##-2- Disable peripherals and GPIO Clocks ################################*/
  /* De-initialize the DAC Channel1 GPIO pin */
  HAL_GPIO_DeInit(EXAMPLE_DAC0_GPIO_PORT, EXAMPLE_DAC0_PIN);
  HAL_GPIO_DeInit(EXAMPLE_DAC1_GPIO_PORT, EXAMPLE_DAC1_PIN);
}


USER_HAL_StatusTypeDef user_hal_dac_init(USER_DAC_TypeDef dac)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    DacHandle.Instance = EXAMPLE_DAC_PER;
    if (HAL_DAC_Init(&DacHandle) != HAL_OK)
    {
        User_DAC_Error_Handler();
    }
    sConfig.DAC_Trigger = DAC_TRIGGER_NONE;
    sConfig.DAC_OutputBuffer = DAC_OUTPUTBUFFER_DISABLE;
    
    switch (dac)
    {
        case USER_DAC_INSTANCE0:
            if (HAL_DAC_ConfigChannel(&DacHandle, &sConfig, EXAMPLE_DAC0_CHANNEL) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
            break;
            
        case USER_DAC_INSTANCE1:
            if (HAL_DAC_ConfigChannel(&DacHandle, &sConfig, EXAMPLE_DAC1_CHANNEL) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
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
            if (HAL_DAC_DeInit(&DacHandle) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
            break;
            
        case USER_DAC_INSTANCE1:
            if (HAL_DAC_DeInit(&DacHandle) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
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
            if (HAL_DAC_Stop(&DacHandle, EXAMPLE_DAC0_CHANNEL) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
            
            if (HAL_DAC_SetValue(&DacHandle, EXAMPLE_DAC0_CHANNEL, DAC_ALIGN_12B_R, data) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }

            if (HAL_DAC_Start(&DacHandle, EXAMPLE_DAC0_CHANNEL) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
            break;
            
        case USER_DAC_INSTANCE1:
            if (HAL_DAC_Stop(&DacHandle, EXAMPLE_DAC1_CHANNEL) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
            
            if (HAL_DAC_SetValue(&DacHandle, EXAMPLE_DAC1_CHANNEL, DAC_ALIGN_12B_R, data) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }

            if (HAL_DAC_Start(&DacHandle, EXAMPLE_DAC1_CHANNEL) != HAL_OK)
            {
                User_DAC_Error_Handler();
            }
            break;

        default:
            break;
    }

    return status;
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
