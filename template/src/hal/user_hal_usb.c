/**
  ******************************************************************************
  * @file    user_hal_usb.c
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


#include "user_hal_usb.h"
#include "user_hal.h"


USER_HAL_StatusTypeDef user_hal_usb_init(USER_USB_TypeDef usb)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (usb)
    {
        case USER_USB_INSTANCE0:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


USER_HAL_StatusTypeDef user_hal_usb_deInit(USER_USB_TypeDef usb)
{
    USER_HAL_StatusTypeDef status = USER_HAL_OK;

    switch (usb)
    {
        case USER_USB_INSTANCE0:
            //user code ...           
            break;

        default:
            break;
    }

    return status;
}


/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
