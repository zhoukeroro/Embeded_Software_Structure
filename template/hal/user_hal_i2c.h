#ifndef __USER_HAL_I2C_H__
#define __USER_HAL_I2C_H__


#include "user_hal.h"

typedef enum
{
    USER_I2C_INSTANCE0 = 0,
    USER_I2C_INSTANCE1,
    USER_I2C_INSTANCE_NUM
}USER_I2C_TypeDef;


USER_HAL_StatusTypeDef user_hal_i2c_init(USER_I2C_TypeDef i2c);
USER_HAL_StatusTypeDef user_hal_i2c_deInit(USER_I2C_TypeDef i2c);



#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
