/**
  ******************************************************************************
  * @file    user_hal_usb.h
  * @author  William Zhou
  * @version V0.1.0
  * @brief   User hardware abstract layer USB drivers.
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


#ifndef __USER_HAL_USB_H__
#define __USER_HAL_USB_H__


#include "user_hal.h"

typedef enum
{
    USER_USB_INSTANCE0 = 0,
    USER_USB_INSTANCE_NUM
}USER_USB_TypeDef;


USER_HAL_StatusTypeDef user_hal_usb_init(USER_USB_TypeDef usb);
USER_HAL_StatusTypeDef user_hal_usb_deInit(USER_USB_TypeDef usb);


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
