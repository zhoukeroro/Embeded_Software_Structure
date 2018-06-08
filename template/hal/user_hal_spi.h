#ifndef __USER_HAL_SPI_H__
#define __USER_HAL_SPI_H__


#include "user_hal.h"

typedef enum
{
    USER_SPI_INSTANCE0 = 0,
    USER_SPI_INSTANCE1,
    USER_SPI_INSTANCE_NUM
}USER_SPI_TypeDef;


USER_HAL_StatusTypeDef user_hal_spi_init(USER_SPI_TypeDef spi);
USER_HAL_StatusTypeDef user_hal_spi_deInit(USER_SPI_TypeDef spi);


#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
