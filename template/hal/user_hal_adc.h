#ifndef __USER_HAL_ADC_H__
#define __USER_HAL_ADC_H__


#include "user_hal.h"

typedef enum
{
    USER_ADC_INSTANCE0 = 0,
    USER_ADC_INSTANCE1,
    USER_ADC_INSTANCE2,
    USER_ADC_INSTANCE3,
    USER_ADC_INSTANCE4,
    USER_ADC_INSTANCE5,
    USER_ADC_INSTANCE6,
    USER_ADC_INSTANCE7,
    USER_ADC_INSTANCE_NUM
}USER_ADC_TypeDef;


USER_HAL_StatusTypeDef user_hal_adc_init(USER_ADC_TypeDef adc);
USER_HAL_StatusTypeDef user_hal_adc_deInit(USER_ADC_TypeDef adc);
U32 user_hal_adc_getValue(USER_ADC_TypeDef adc);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
