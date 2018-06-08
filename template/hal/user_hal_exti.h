#ifndef __USER_HAL_EXIT_H__
#define __USER_HAL_EXIT_H__


#include "user_hal.h"

typedef enum
{
    USER_EXTI_INSTANCE0 = 0,
    USER_EXTI_INSTANCE1,
    USER_EXTI_INSTANCE_NUM
}USER_EXTI_TypeDef;


USER_HAL_StatusTypeDef user_hal_exti_init(USER_EXTI_TypeDef exti);
USER_HAL_StatusTypeDef user_hal_exti_deInit(USER_EXTI_TypeDef exti);
USER_HAL_FlagTypeDef user_hal_exti_getITFlag(USER_EXTI_TypeDef exti);
USER_HAL_FlagTypeDef user_hal_exti_clearITFlag(USER_EXTI_TypeDef exti);



#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
