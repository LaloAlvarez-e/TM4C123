/*
 * SYSTICK_FrequencyBase.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Driver/SYSTICK_Intrinsics/SYSTICK_FreqBase.h>

static uint32_t SysTick_u32FreqBase=0;



void SysTick__vClearFreqBase(void)
{
    SysTick_u32FreqBase=0u;
}

void SysTick__vSetFreqBase(uint32_t u32Base)
{
    SysTick_u32FreqBase=u32Base;
}


uint32_t SysTick__u32GetFreqBase(void)
{
    return (uint32_t) SysTick_u32FreqBase;
}




