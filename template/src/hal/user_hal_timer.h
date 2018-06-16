/**
  ******************************************************************************
  * @file    user_hal_timer.h
  * @author  William Zhou
  * @version V0.1.1
  * @brief   User hardware abstract layer TIMER drivers.
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

#ifndef __USER_HAL_TIMER_H__
#define __USER_HAL_TIMER_H__


typedef enum
{
    USER_TIMER_INSTANCE0 = 0,
    USER_TIMER_INSTANCE1,
    USER_TIMER_INSTANCE_NUM
}USER_TIMER_TypeDef;


USER_HAL_StatusTypeDef user_hal_timer_init(USER_TIMER_TypeDef timer, U16 period);
USER_HAL_StatusTypeDef user_hal_timer_deInit(USER_TIMER_TypeDef timer);

USER_HAL_StatusTypeDef user_hal_timer_stop(USER_TIMER_TypeDef timer);
USER_HAL_FlagTypeDef user_hal_timer_getITFlag(USER_TIMER_TypeDef timer);
USER_HAL_StatusTypeDef user_hal_timer_clearITFlag(USER_TIMER_TypeDef timer);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
