/**
 *
 * @file SCB_ISR.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>
#include <xDriver_MCU/Core/SCB/Driver/Exception/xHeader/SCB_ISR.h>

SCB_nPENDSTATE SCB_ISR__enGetPendingState(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_ISRPENDING_MASK;
    u32Reg>>=SCB_ICSR_R_ISRPENDING_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
SCB_nVECISR SCB_ISR__enGetVectorPending(void)
{
    SCB_nVECISR enReturn=SCB_enVECISR_THREAD;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_VECTPENDING_MASK;
    u32Reg>>=SCB_ICSR_R_VECTPENDING_BIT;
    enReturn=(SCB_nVECISR) u32Reg;
    return enReturn;
}
SCB_nVECISR SCB_ISR__enGetVectorActive(void)
{
    SCB_nVECISR enReturn=SCB_enVECISR_THREAD;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_VECTACTIVE_MASK;
    u32Reg>>=SCB_ICSR_R_VECTACTIVE_BIT;
    enReturn=(SCB_nVECISR) u32Reg;
    return enReturn;
}
