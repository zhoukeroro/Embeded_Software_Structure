/**
  ******************************************************************************
  * @file    printer.h
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

#ifndef __PRINTER_H__
#define __PRINTER_H__


//Uncomment this macro if there is no need to user debug printer
//#define PRINTER_ENALBE

#ifdef PRINTER_ENALBE
#define PRINT(format, ...) printf(format, ##__VA_ARGS__)
#else
#define PRINT(format, ...)
#endif


void printer_init(void);

#endif
/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
