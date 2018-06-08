#ifndef __USER_HAL_USB_H__
#define __USER_HAL_USB_H__


#include "user_hal.h"

typedef enum
{
    USER_USB_INSTANCE = 0,
    USER_USB_INSTANCE_NUM
}USER_USB_TypeDef;


USER_HAL_StatusTypeDef user_hal_usb_init(USER_USB_TypeDef usb);
USER_HAL_StatusTypeDef user_hal_usb_deInit(USER_USB_TypeDef usb);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
