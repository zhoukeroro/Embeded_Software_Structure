/**
  ******************************************************************************
  * @file    stm32_IRQHandler.h
  * @author  William Zhou
  * @version V0.1.0
  * @brief   STM32f103 interrupt service routines.
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


#ifndef __STM32_IRQ_HANDLER_H__
#define __STM32_IRQ_HANDLER_H__


void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);


#endif

/************ Copyright (c) 2018 William Zhou. All rights reserved. ***********/
