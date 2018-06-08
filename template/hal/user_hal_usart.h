#ifndef __USER_HAL_USART_H__
#define __USER_HAL_USART_H__


#include "user_hal.h"

typedef enum
{
    USER_USART_INSTANCE0 = 0,
    USER_USART_INSTANCE1,
    USER_USART_INSTANCE_NUM
}USER_USART_TypeDef;


USER_HAL_StatusTypeDef user_hal_usart_init(USER_USART_TypeDef usart);
USER_HAL_StatusTypeDef user_hal_usart_deInit(USER_USART_TypeDef usart);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
