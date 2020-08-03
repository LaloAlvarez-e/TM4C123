/**
 *
 * @file TIMER_AltMode.c
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <stdint.h>
#include <xDriver_MCU/TIMER/Header/Driver/Mode/TIMER_AltMode.h>
#include <xDriver_MCU/TIMER/Header/Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/TIMER/Header/Driver/Intrinsics/TIMER_ModeGeneric.h>

void TIMER__vSetAltMode(TIMER_nMODULE enModule, TIMER_nALT_MODE enAltMode)
{
    TIMER__vSetModeGeneric(enModule, (uint32_t) enAltMode, GPTM_TA_GPTMTnMR_TnAMS_MASK, GPTM_TA_GPTMTnMR_R_TnAMS_BIT);
}

TIMER_nALT_MODE TIMER__enGetAltMode(TIMER_nMODULE enModule)
{
    return (TIMER_nALT_MODE)TIMER__u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnAMS_MASK, GPTM_TA_GPTMTnMR_R_TnAMS_BIT);
}
