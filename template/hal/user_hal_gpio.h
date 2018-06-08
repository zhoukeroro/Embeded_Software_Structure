#ifndef __USER_HAL_GPIO_H__
#define __USER_HAL_GPIO_H__


#include "user_hal.h"

typedef enum
{
    USER_GPIO_INSTANCE0 = 0,
    USER_GPIO_INSTANCE1,
    USER_GPIO_INSTANCE_NUM
}USER_GPIO_TypeDef;


USER_HAL_StatusTypeDef user_hal_gpio_init(USER_GPIO_TypeDef gpio);
USER_HAL_StatusTypeDef user_hal_gpio_deInit(USER_GPIO_TypeDef gpio);

USER_HAL_StatusTypeDef user_hal_gpio_high(USER_GPIO_TypeDef gpio);
USER_HAL_StatusTypeDef user_hal_gpio_low(USER_GPIO_TypeDef gpio);
USER_HAL_StatusTypeDef user_hal_gpio_toogle(USER_GPIO_TypeDef gpio);
USER_HAL_FlagTypeDef user_hal_gpio_getLevel(USER_GPIO_TypeDef gpio);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
