/**
 *
 * @file TIMER_InterruptRoutine_ModuleA_16_Module4.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_ModuleA_16/TIMER_InterruptRoutine_ModuleA_16_Module4.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptRoutine/TIMER_InterruptRoutine_Array.h>

void TIMER4A__vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=(uint8_t)GPTM4_TA_GPTMTnMIS_R;
    if(u8Reg & (uint8_t)TIMER_enINT_TA_TIMEOUT)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_TIMEOUT;
        TIMER__vSOURCEISR[0][0][4][0]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER__vSOURCEISR[0][0][4][1]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER__vSOURCEISR[0][0][4][2]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TA_MATCH)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TA_MATCH;
        TIMER__vSOURCEISR[0][0][4][3]();
    }
    if(u8Reg & (uint8_t)TIMER_enINT_TW_RTC)
    {
        GPTM4_TA_GPTMTnICR_R=(uint32_t)TIMER_enINT_TW_RTC;
        TIMER__vSOURCEISR[0][0][4][4]();
    }
}




