/**
  ******************************************************************************
  * @file    main.c
  * @author  William Zhou
  * @version V0.1.1
  * @brief   system initial and main loop.
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

int main(void)
{
    mcu_init();
    board_init();
    printer_init();
    
    application_init();
	while (1)
	{
	    application_loop();
	}
}

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
