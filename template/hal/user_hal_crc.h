#ifndef __USER_HAL_CRC_H__
#define __USER_HAL_CRC_H__


#include "user_hal.h"

typedef enum
{
    USER_CRC_INSTANCE = 0,
    USER_CRC_INSTANCE_NUM
}USER_CRC_TypeDef;


USER_HAL_StatusTypeDef user_hal_crc_init(USER_CRC_TypeDef crc);
USER_HAL_StatusTypeDef user_hal_crc_deInit(USER_CRC_TypeDef crc);
U32 user_hal_getValue(USER_CRC_TypeDef crc, U32 pBuffer[], U32 length);

#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
