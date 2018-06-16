/**
  ******************************************************************************
  * @file    platform.h
  * @author  William Zhou
  * @version V0.1.1
  * @brief   Specific configuration file for platform.
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

#ifndef __PLATFORM_H__
#define __PLATFORM_H__


//utilities layer
#include "type_def.h"
#include "delay.h"
#include "printer.h"
#include "user_macro.h"

//app layer
#include "application.h"
#include "irq_callback.h"

//middleware layer


//bsp layer
#include "board.h"
#include "mcu.h"

//hal layer
#include "user_hal.h"


#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
