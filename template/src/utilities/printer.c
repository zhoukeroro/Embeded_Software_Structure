/**
  ******************************************************************************
  * @file    printer.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   Print function for debug.
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

#include "platform.h"
#include "stdio.h"


#ifdef PRINTER_ENALBE
int fputc(int ch, FILE *f)
{
    user_hal_usart_sendByte(USER_USART_INSTANCE0, ch);
    return (ch);
}
#endif


void printer_init(void)
{
#ifdef PRINTER_ENALBE
    user_hal_usart_init(USER_USART_INSTANCE0);
#endif
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
