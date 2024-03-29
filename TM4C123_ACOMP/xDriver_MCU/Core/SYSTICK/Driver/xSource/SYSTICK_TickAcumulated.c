/*
 * SYSTICK_TickAcumulated.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/SYSTICK/Driver/xHeader/SYSTICK_TickAccumulated.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/SYSTICK/Peripheral/SYSTICK_Peripheral.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_FreeCount.h>
#include <xDriver_MCU/Core/SYSTICK/Driver/Intrinsics/xHeader/SYSTICK_TickCount.h>

static uint32_t SysTick_u32GetCurrentRegisterTick(void);

static uint32_t SysTick_u32GetCurrentRegisterTick(void)
{
    volatile uint32_t u32Tick = 0UL;
    u32Tick = MCU__u32ReadRegister(SysTick_BASE, SysTick_CVR_OFFSET, SysTick_CVR_CURRENT_MASK, SysTick_CVR_R_CURRENT_BIT);
    return (uint32_t) u32Tick;
}

uint64_t SysTick__u64GetTickAccumulated(void)
{
    uint64_t u64CountTick = SysTick__u32GetTickCount();
    u64CountTick *= SysTick__u32GetFreeCount();

    u64CountTick += SysTick__u32GetTickCount();
    u64CountTick -= SysTick_u32GetCurrentRegisterTick();
    u64CountTick--;

    return (uint64_t) u64CountTick;
}
