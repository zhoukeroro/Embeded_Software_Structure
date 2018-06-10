/**
  ******************************************************************************
  * @file    delay.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   Delay functions.
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


#include "delay.h"

//Under macro values depending on MCU frequency.
#define ONE_US_LOOP_TIMES   (9U)
#define ONE_MS_LOOP_TIMES   (1000U)


void Delay1us(void)
{
    U16 cnt = 0;

    for (cnt = 0; cnt < ONE_US_LOOP_TIMES; cnt++);
}


void DelayNus(U16 us)
{
    U16 cnt = 0;
    U16 loopTimes = us * ONE_US_LOOP_TIMES;

    for (cnt = 0; cnt < loopTimes; cnt++);
}


void Delay1ms(void)
{
    U16 cnt = 0;

    for (cnt = 0; cnt < ONE_MS_LOOP_TIMES; cnt++);
}


void DelayNms(U16 ms)
{
    U16 cnt = 0;
    U16 loopTimes = ms * ONE_MS_LOOP_TIMES;

    for (cnt = 0; cnt < loopTimes; cnt++);
}


/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
