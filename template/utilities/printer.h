#ifndef __PRINTER_H__
#define __PRINTER_H__


#include "stdio.h"

#define PRINTER_ENALBE

#ifdef PRINTER_ENALBE
#define PRINT(...) printf(__VA_ARGS__)
#else
#define PRINT(...)
#endif


void printer_init(void);

#endif
/************************ (C) COPYRIGHT William Zhou *****END OF FILE****/
