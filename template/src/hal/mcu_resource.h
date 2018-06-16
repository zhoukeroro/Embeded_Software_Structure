/**
  ******************************************************************************
  * @file    mcu_resource.h
  * @author  William Zhou
  * @version V0.1.1
  * @brief   MCU resource assignment for current project, including pin resource 
             assignment and peripherals resource assignment.
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

#ifndef __MCU_RESOURCE_H__
#define __MCU_RESOURCE_H__

#include "stm32f1xx_hal.h"


/******************************************************************************/
/*                                GPIO example                               */
/******************************************************************************/
#define EXAMPLE_GPIO0      USER_GPIO_INSTANCE0
#define EXAMPLE_GPIO1      USER_GPIO_INSTANCE1
#define EXAMPLE_GPIO2      USER_GPIO_INSTANCE2

#define EXAMPLE_GPIO0_PIN                      GPIO_PIN_8
#define EXAMPLE_GPIO0_GPIO_PORT                GPIOA
#define EXAMPLE_GPIO0_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOA_CLK_ENABLE()
#define EXAMPLE_GPIO0_GPIO_CLK_DISABLE()       __HAL_RCC_GPIOA_CLK_DISABLE()
  
#define EXAMPLE_GPIO1_PIN                      GPIO_PIN_10
#define EXAMPLE_GPIO1_GPIO_PORT                GPIOA
#define EXAMPLE_GPIO1_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOA_CLK_ENABLE()
#define EXAMPLE_GPIO1_GPIO_CLK_DISABLE()       __HAL_RCC_GPIOA_CLK_DISABLE()

#define EXAMPLE_GPIO2_PIN                      GPIO_PIN_3
#define EXAMPLE_GPIO2_GPIO_PORT                GPIOB
#define EXAMPLE_GPIO2_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOB_CLK_ENABLE()
#define EXAMPLE_GPIO2_GPIO_CLK_DISABLE()       __HAL_RCC_GPIOB_CLK_DISABLE()



/******************************************************************************/
/*                                 DAC example                                */
/******************************************************************************/
#define EXAMPLE_DAC0                    USER_DAC_INSTANCE0
#define EXAMPLE_DAC1                    USER_DAC_INSTANCE1

#define EXAMPLE_DAC_PER                 DAC
#define EXAMPLE_DAC_CLK_ENABLE()        __HAL_RCC_DAC_CLK_ENABLE()
#define EXAMPLE_DAC_FORCE_RESET()       __HAL_RCC_DAC_FORCE_RESET()
#define EXAMPLE_DAC_RELEASE_RESET()     __HAL_RCC_DAC_RELEASE_RESET()

#define EXAMPLE_DAC0_CHANNEL            DAC_CHANNEL_1
#define EXAMPLE_DAC0_PIN                GPIO_PIN_4
#define EXAMPLE_DAC0_GPIO_PORT          GPIOA
#define EXAMPLE_DAC0_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOA_CLK_ENABLE()

#define EXAMPLE_DAC1_CHANNEL            DAC_CHANNEL_2
#define EXAMPLE_DAC1_PIN                GPIO_PIN_5
#define EXAMPLE_DAC1_GPIO_PORT          GPIOA
#define EXAMPLE_DAC1_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOA_CLK_ENABLE()



/******************************************************************************/
/*                                EXTI example                               */
/******************************************************************************/
#define EXAMPLE_EXTI0      USER_EXTI_INSTANCE0

#define EXAMPLE_EXTI0_PIN                      GPIO_PIN_2
#define EXAMPLE_EXTI0_GPIO_PORT                GPIOB
#define EXAMPLE_EXTI0_GPIO_CLK_ENABLE()        __HAL_RCC_GPIOB_CLK_ENABLE()
#define EXAMPLE_EXTI0_GPIO_CLK_DISABLE()       __HAL_RCC_GPIOB_CLK_DISABLE()
#define EXAMPLE_EXTI0_EXTI_IRQn                EXTI2_IRQn
#define EXAMPLE_EXTI0_EXTI_IRQHandler          EXTI2_IRQHandler



/******************************************************************************/
/*                                 I2C example                                */
/******************************************************************************/
#define EXAMPLE_I2C0         USER_I2C_INSTANCE0

#define EXAMPLE_I2C0_PER                        I2C1
#define EXAMPLE_I2C0_CLK_ENABLE()               __HAL_RCC_I2C1_CLK_ENABLE()
#define EXAMPLE_I2C0_SDA_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE()
#define EXAMPLE_I2C0_SCL_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOB_CLK_ENABLE() 

#define EXAMPLE_I2C0_FORCE_RESET()              __HAL_RCC_I2C1_FORCE_RESET()
#define EXAMPLE_I2C0_RELEASE_RESET()            __HAL_RCC_I2C1_RELEASE_RESET()

/* Definition for I2Cx Pins */
#define EXAMPLE_I2C0_SCL_PIN                    GPIO_PIN_6
#define EXAMPLE_I2C0_SCL_GPIO_PORT              GPIOB
#define EXAMPLE_I2C0_SDA_PIN                    GPIO_PIN_7
#define EXAMPLE_I2C0_SDA_GPIO_PORT              GPIOB


/******************************************************************************/
/*                                 SPI example                                */
/******************************************************************************/
#define EXAMPLE_SPI0         USER_SPI_INSTANCE0

#define EXAMPLE_SPI0_PER                        SPI2
#define EXAMPLE_SPI0_CLK_ENABLE()                __HAL_RCC_SPI2_CLK_ENABLE()


#define EXAMPLE_SPI0_NSS_PIN                GPIO_PIN_12
#define EXAMPLE_SPI0_NSS_PORT               GPIOB
#define EXAMPLE_SPI0_NSS_CLK_ENABLE()       __HAL_RCC_GPIOB_CLK_ENABLE()

#define EXAMPLE_SPI0_SCK_PIN                GPIO_PIN_13
#define EXAMPLE_SPI0_SCK_PORT               GPIOB
#define EXAMPLE_SPI0_SCK_CLK_ENABLE()       __HAL_RCC_GPIOB_CLK_ENABLE()

#define EXAMPLE_SPI0_MISO_PIN                GPIO_PIN_14
#define EXAMPLE_SPI0_MISO_PORT               GPIOB
#define EXAMPLE_SPI0_MISO_CLK_ENABLE()       __HAL_RCC_GPIOB_CLK_ENABLE()

#define EXAMPLE_SPI0_MOSI_PIN                GPIO_PIN_15
#define EXAMPLE_SPI0_MOSI_PORT               GPIOB
#define EXAMPLE_SPI0_MOSI_CLK_ENABLE()       __HAL_RCC_GPIOB_CLK_ENABLE()



/******************************************************************************/
/*                                TIMER example                               */
/******************************************************************************/
#define EXAMPLE_TIMER0         USER_TIMER_INSTANCE0

#define EXAMPLE_TIMER0_PER                       TIM3
#define EXAMPLE_TIMER0_CLK_ENABLE()              __HAL_RCC_TIM3_CLK_ENABLE()
#define EXAMPLE_TIMER0_IRQn                      TIM3_IRQn
#define EXAMPLE_TIMER0_IRQHandler                TIM3_IRQHandler


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
