/**
  ******************************************************************************
  * @file    application.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User application.
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

#include "platform.h"

#define VOLTAGE_OUTPUT_EN_GPIO  EXAMPLE_GPIO2   

#define PASS_LED_GPIO           EXAMPLE_GPIO0
#define FAIL_LED_GPIO           EXAMPLE_GPIO1


void voltage_output_init(void)
{
    user_hal_gpio_init(VOLTAGE_OUTPUT_EN_GPIO);
}

void voltage_output_enable(void)
{
    user_hal_gpio_low(VOLTAGE_OUTPUT_EN_GPIO);
}


void voltage_output_disable(void)
{
    user_hal_gpio_high(VOLTAGE_OUTPUT_EN_GPIO);
}


void application_init(void)
{
    voltage_output_init();
    voltage_output_disable();

    user_hal_dac_init(USER_DAC_INSTANCE0);
    user_hal_dac_init(USER_DAC_INSTANCE1);

    user_hal_dac_setValue(USER_DAC_INSTANCE0, 2200*(3.3/4.095));
    user_hal_dac_setValue(USER_DAC_INSTANCE1, 2200*(3.3/4.095));

    voltage_output_enable();
    
    user_hal_gpio_init(PASS_LED_GPIO);
    user_hal_gpio_high(PASS_LED_GPIO);

}


void application_loop(void)
{

}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
