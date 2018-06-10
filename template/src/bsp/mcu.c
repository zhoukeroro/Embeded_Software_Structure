/**
  ******************************************************************************
  * @file    mcu.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   Abstract MCU interface driver.
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


#include "mcu.h"
#include "stm32f103.h"


void mcu_init(void)
{
    stm32f103_init();
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
