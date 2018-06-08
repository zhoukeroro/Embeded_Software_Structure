/**
  ******************************************************************************
  * @file    main.c
  * @author  William Zhou
  * @version V0.1.0
  * @brief   system initial and main loop.
  * @modification history
  *  Data                Name                  Description
  *  ================    ==================    =================================
  *  8-June-2018         William Zhou          Initial draft
  ******************************************************************************
  */

#include "mcu.h"
#include "board.h"
#include "printer.h"
#include "application.h"

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

/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
