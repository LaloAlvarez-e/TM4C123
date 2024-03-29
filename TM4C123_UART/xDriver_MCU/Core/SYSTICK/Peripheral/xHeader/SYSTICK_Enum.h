/*
 * SYSTICK_Enum.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_ENUM_H_

typedef enum
{
    SysTick_enOK = 0UL,
    SysTick_enERROR = 1UL,
}SysTick_nSTATUS;

typedef enum
{
    SysTick_enPIOSC4 = 0UL,
    SysTick_enSYSCLK = 1UL,
}SysTick_nCLKSOURCE;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_ENUM_H_ */
