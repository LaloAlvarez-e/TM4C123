/**
 *
 * @file SCB_PendSV.c
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

#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_PendSV.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Peripheral.h>

#define SCB_vBarrier() {__asm(" DSB");}

inline void SCB_PendSV__vSetPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSVSET_SET;
}
inline void SCB_PendSV__vClearPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSVCLR_REMOVE;
}
SCB_nPENDSTATE SCB_PendSV__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_PENDSVSET_MASK;
    u32Reg>>=SCB_ICSR_R_PENDSVSET_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}


inline void SCB_PendSV__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR3_R;
    uint32_t u32RegAux=0;

    u32Reg&=~SCB_SHPR3_R_PENDSV_MASK;
    u32RegAux = ((uint32_t)enPriority &SCB_SHPR3_PENDSV_MASK);
    u32RegAux <<= SCB_SHPR3_R_PENDSV_BIT;
    u32Reg|=u32RegAux;
    SCB_vBarrier();
    SCB_SHPR3_R=u32Reg;
    SCB_vBarrier();
}
SCB_nSHPR SCB_PendSV__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=SCB_SHPR3_R_PENDSV_MASK;
    u32Reg>>=SCB_SHPR3_R_PENDSV_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}

