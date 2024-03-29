/*
 * SCB.c
 *
 *  Created on: 23 jun. 2018
 *      Author: InDev
 */

#include "SCB.h"

void NMI_vISR(void);
void PendSV_vISR(void);
void UsageFault_vISR(void);
void BusFault_vISR(void);
void MemoryFault_vISR(void);
void HardFault_vISR(void);
void SVCall_vISR(void);


inline void SCB_PENDSV__vSetPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSVSET_SET;
}
inline void SCB_PENDSV__vClearPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSVCLR_REMOVE;
}
SCB_nPENDSTATE SCB_PENDSV__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_PENDSVSET_MASK;
    u32Reg>>=SCB_ICSR_R_PENDSVSET_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}


inline void SCB_SysTick__vSetPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSTSET_SET;
}
inline void SCB_SysTick__vClearPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_PENDSTCLR_REMOVE;
}
SCB_nPENDSTATE SCB_SysTick__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_ICSR_R;
    u32Reg&=SCB_ICSR_R_PENDSTSET_MASK;
    u32Reg>>=SCB_ICSR_R_PENDSTSET_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}


inline void SCB_NMI__vSetPending(void)
{
    SCB_ICSR_R|=SCB_ICSR_R_NMIPENDSET_SET;
}


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


inline void SCB__vSetVectorOffset(uint32_t u32Offset)
{
    uint32_t* pu32Ram=0;
    const uint32_t* pu32Flash=0;
    uint32_t u32Count=0;

    u32Offset&=~0x3FF;
    if(u32Offset<0x00010000)
    {
        FLASH__enWriteMultiWorld((uint32_t*)SCB_VTOR_R,u32Offset,0x100);
        __asm(" cpsid i");
        SCB_VTOR_R= u32Offset;
        __asm(" DSB");
        __asm(" cpsie i");
    }
    else if((u32Offset>=0x20000000) && (u32Offset<=0x20000400))
    {
        pu32Flash=(const uint32_t*)SCB_VTOR_R;
        pu32Ram=(uint32_t*)u32Offset;
        for(u32Count=0; u32Count<0x100;u32Count++ )
        {
            *pu32Ram=*pu32Flash;
            pu32Ram++;
            pu32Flash++;
        }
        __asm(" cpsid i");
        SCB_VTOR_R= u32Offset;
        __asm(" DSB");
        __asm(" cpsie i");
    }

}


inline void SCB__vReqSysReset(void)
{
    uint32_t u32Reg=SCB_AIRCR_R;
    if((u32Reg &SCB_AIRCR_R_VECTKEY_MASK)==SCB_AIRCR_R_VECTKEY_READ)
    {
        u32Reg&=~SCB_AIRCR_R_VECTKEY_MASK;
        u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_VECTRESET_NOUSE;
        __asm(" DSB");
        SCB_AIRCR_R=u32Reg;
        __asm(" DSB");

        while(1)
        {
            __asm(" NOP");
        }

    }

}

inline void SCB__vReqSysReset_Peripheral(void)
{
    uint32_t u32Reg=SCB_AIRCR_R;
    if((u32Reg &SCB_AIRCR_R_VECTKEY_MASK)==SCB_AIRCR_R_VECTKEY_READ)
    {
        u32Reg&=~SCB_AIRCR_R_VECTKEY_MASK;
        u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_SYSRESETREQ_RESET;
        __asm(" DSB");
        SCB_AIRCR_R=u32Reg;
        __asm(" DSB");

        while(1)
        {
            __asm(" NOP");
        }

    }

}
SCB_nSTATUS SCB__enSetPriorityGroup(SCB_nPRIGROUP enGroup)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    uint32_t u32Reg=SCB_AIRCR_R;
    u32Reg&=~(SCB_AIRCR_R_VECTKEY_MASK|SCB_AIRCR_R_PRIGROUP_MASK);
    switch(enGroup)
    {
        case SCB_enPRIGROUP_XXX:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_XXX;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XXY:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_XXY;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_XYY:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_XYY;
            enReturn=SCB_enOK;
            break;
        case SCB_enPRIGROUP_YYY:
            u32Reg|=SCB_AIRCR_R_VECTKEY_WRITE|SCB_AIRCR_R_PRIGROUP_YYY;
            enReturn=SCB_enOK;
            break;
        default:
            return enReturn;
    }

    __asm(" DSB");
    SCB_AIRCR_R=u32Reg;
    __asm(" DSB");
    return enReturn;
}
SCB_nPRIGROUP SCB__enGetPriorityGroup(void)
{
    SCB_nPRIGROUP enReturn=SCB_enPRIGROUP_ERROR;
    uint32_t u32Reg=SCB_AIRCR_R;
    u32Reg&=SCB_AIRCR_R_PRIGROUP_MASK;
    u32Reg>>=SCB_AIRCR_R_PRIGROUP_BIT;
    enReturn=(SCB_nPRIGROUP)u32Reg;
    return enReturn;
}


SCB_nSTATUS SCB__enSetWakeUpSource(SCB_nWAKEUPSOURCE enSource)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSource)
    {
        case SCB_enWAKEUP_ONLY:
            SCB_SCR_R &=~SCB_SCR_R_SEVONPEND_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enWAKEUP_ALL:
            SCB_SCR_R |=SCB_SCR_R_SEVONPEND_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }
    return enReturn;
}
SCB_nWAKEUPSOURCE SCB__enGetWakeUpSource(void)
{
    SCB_nWAKEUPSOURCE enReturn=SCB_enWAKEUP_ERROR;
    uint32_t u32Reg=SCB_SCR_R;
    u32Reg&=SCB_SCR_R_SEVONPEND_MASK;
    u32Reg>>=SCB_SCR_R_SEVONPEND_BIT;
    enReturn=(SCB_nWAKEUPSOURCE)u32Reg;
    return enReturn;
}
SCB_nSTATUS SCB__enSetSleepMode(SCB_nSleepDeep enSleepMode)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSleepMode)
    {
        case SCB_enSleepDeep_Sleep:
            SCB_SCR_R&=~SCB_SCR_R_SLEEPDEEP_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enSleepDeep_DeepSleep:
            SCB_SCR_R|=SCB_SCR_R_SLEEPDEEP_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSleepDeep SCB__enGetSleepMode(void)
{
    SCB_nSleepDeep enReturn=SCB_enSleepDeep_ERROR;
    uint32_t u32Reg=SCB_SCR_R;
    u32Reg&=SCB_SCR_R_SLEEPDEEP_MASK;
    u32Reg>>=SCB_SCR_R_SLEEPDEEP_BIT;
    enReturn=(SCB_nSleepDeep)u32Reg;
    return enReturn;
}
SCB_nSTATUS SCB__enSetSLEEPONEXIT(SCB_nSLEEPONEXIT enSleepMode)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enSleepMode)
    {
        case SCB_enSLEEPONEXIT_NOSLEEP:
            SCB_SCR_R&=~SCB_SCR_R_SLEEPONEXIT_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enSLEEPONEXIT_SLEEP:
            SCB_SCR_R|=SCB_SCR_R_SLEEPONEXIT_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nSLEEPONEXIT SCB__enGetSLEEPONEXIT(void)
{
    SCB_nSLEEPONEXIT enReturn=SCB_enSLEEPONEXIT_ERROR;
    uint32_t u32Reg=SCB_SCR_R;
    u32Reg&=SCB_SCR_R_SLEEPONEXIT_MASK;
    u32Reg>>=SCB_SCR_R_SLEEPONEXIT_BIT;
    enReturn=(SCB_nSLEEPONEXIT)u32Reg;
    return enReturn;
}


SCB_nSTATUS SCB__enSetStackAligment(SCB_nAlignment enAlign)
{
    SCB_nSTATUS enReturn=SCB_enERROR;
    switch(enAlign)
    {
        case SCB_enALIGN_4BYTE:
            SCB_CCR_R&=~SCB_CCR_R_STKALIGN_MASK;
            enReturn=SCB_enOK;
            break;
        case SCB_enALIGN_8BYTE:
            SCB_CCR_R|=SCB_CCR_R_STKALIGN_MASK;
            enReturn=SCB_enOK;
            break;
        default:
            break;
    }

    return enReturn;
}
SCB_nAlignment SCB__enGetStackAligment(void)
{
    SCB_nAlignment enReturn=SCB_enALIGN_ERROR;
    uint32_t u32Reg=SCB_CCR_R;
    u32Reg&=SCB_CCR_R_STKALIGN_MASK;
    u32Reg>>=SCB_CCR_R_STKALIGN_BIT;
    enReturn=(SCB_nAlignment)u32Reg;
    return enReturn;
}
inline void SCB__vEnDIV0Trap(void)
{
    SCB_CCR_R|=SCB_CCR_R_DIV_0_TRP_MASK;
}
inline void SCB__vDisDIV0Trap(void)
{
    SCB_CCR_R&=~SCB_CCR_R_DIV_0_TRP_MASK;
}
inline void SCB__vEnUnAlignTrap(void)
{
    SCB_CCR_R|=SCB_CCR_R_UNALIGN_TRP_MASK;
}
inline void SCB__vDisUnAlignTrap(void)
{
    SCB_CCR_R&=~SCB_CCR_R_UNALIGN_TRP_MASK;
}
inline void SCB__vEnUnprivilegedSWTRIGGER(void)
{
    SCB_CCR_R|=SCB_CCR_R_USERSETMPEND_MASK;
}
inline void SCB__vDisUnprivilegedSWTRIGGER(void)
{
    SCB_CCR_R&=~SCB_CCR_R_USERSETMPEND_MASK;
}


inline void SCB_UsageFault__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=~SCB_SHPR1_R_USAGE_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR1_USAGE_MASK)<<SCB_SHPR1_R_USAGE_BIT;
    __asm(" DSB");
    SCB_SHPR1_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_UsageFault__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=SCB_SHPR1_R_USAGE_MASK;
    u32Reg>>=SCB_SHPR1_R_USAGE_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}
inline void SCB_BusFault__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=~SCB_SHPR1_R_BUS_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR1_BUS_MASK)<<SCB_SHPR1_R_BUS_BIT;
    __asm(" DSB");
    SCB_SHPR1_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_BusFault__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=SCB_SHPR1_R_BUS_MASK;
    u32Reg>>=SCB_SHPR1_R_BUS_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}
inline void SCB_MemoryFault__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=~SCB_SHPR1_R_MEM_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR1_MEM_MASK)<<SCB_SHPR1_R_MEM_BIT;
    __asm(" DSB");
    SCB_SHPR1_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_MemoryFault__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR1_R;
    u32Reg&=SCB_SHPR1_R_MEM_MASK;
    u32Reg>>=SCB_SHPR1_R_MEM_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}
inline void SCB_SVCall__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR2_R;
    u32Reg&=~SCB_SHPR2_R_SVCALL_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR2_SVCALL_MASK)<<SCB_SHPR2_R_SVCALL_BIT;
    __asm(" DSB");
    SCB_SHPR2_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_SVCall__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR2_R;
    u32Reg&=SCB_SHPR2_R_SVCALL_MASK;
    u32Reg>>=SCB_SHPR2_R_SVCALL_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}
inline void SCB_SysTick__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=~SCB_SHPR3_R_SYSTICK_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR3_SYSTICK_MASK)<<SCB_SHPR3_R_SYSTICK_BIT;
    __asm(" DSB");
    SCB_SHPR3_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_SysTick__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=SCB_SHPR3_R_SYSTICK_MASK;
    u32Reg>>=SCB_SHPR3_R_SYSTICK_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;

}
inline void SCB_PENDSV__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=~SCB_SHPR3_R_PENDSV_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR3_PENDSV_MASK)<<SCB_SHPR3_R_PENDSV_BIT;
    __asm(" DSB");
    SCB_SHPR3_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_PENDSV__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=SCB_SHPR3_R_PENDSV_MASK;
    u32Reg>>=SCB_SHPR3_R_PENDSV_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}
inline void SCB_DEBUG__vSetPriority(SCB_nSHPR enPriority)
{
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=~SCB_SHPR3_R_DEBUG_MASK;
    u32Reg|=((uint32_t)enPriority &SCB_SHPR3_DEBUG_MASK)<<SCB_SHPR3_R_DEBUG_BIT;
    __asm(" DSB");
    SCB_SHPR3_R=u32Reg;
    __asm(" DSB");
}
SCB_nSHPR SCB_DEBUG__enGetPriority(void)
{
    SCB_nSHPR enReturn= SCB_enSHPR0;
    uint32_t u32Reg=SCB_SHPR3_R;
    u32Reg&=SCB_SHPR3_R_DEBUG_MASK;
    u32Reg>>=SCB_SHPR3_R_DEBUG_BIT;
    enReturn=(SCB_nSHPR)(u32Reg);
    return enReturn;
}



inline void SCB_UsageFault__vEnable(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_USGFAULTENA_MASK;
}
inline void SCB_UsageFault__vDisable(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_USGFAULTENA_MASK;
}
inline void SCB_BusFault__vEnable(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_BUSFAULTENA_MASK;
}
inline void SCB_BusFault__vDisable(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_BUSFAULTENA_MASK;
}
inline void SCB_MemoryFault__vEnable(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_MEMFAULTENA_MASK;
}
inline void SCB_MemoryFault__vDisable(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_MEMFAULTENA_MASK;
}


inline void SCB_SVCall__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_SVCALLPENDED_MASK;
}
inline void SCB_SVCall__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_SVCALLPENDED_MASK;
}
SCB_nPENDSTATE SCB_SVCall__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_SVCALLPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_SVCALLPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
inline void SCB_BusFault__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_BUSFAULTPENDED_MASK;
}
inline void SCB_BusFault__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_BUSFAULTPENDED_MASK;
}
SCB_nPENDSTATE SCB_BusFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_BUSFAULTPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_BUSFAULTPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
inline void SCB_MemoryFault__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_MEMFAULTPENDED_MASK;
}
inline void SCB_MemoryFault__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_MEMFAULTPENDED_MASK;
}
SCB_nPENDSTATE SCB_MemoryFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_MEMFAULTPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_MEMFAULTPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}
inline void SCB_UsageFault__vSetPending(void)
{
    SCB_SHCSR_R|=SCB_SHCSR_R_USGFAULTPENDED_MASK;
}
inline void SCB_UsageFault__vClearPending(void)
{
    SCB_SHCSR_R&=~SCB_SHCSR_R_USGFAULTPENDED_MASK;
}
SCB_nPENDSTATE SCB_UsageFault__enGetPending(void)
{
    SCB_nPENDSTATE enReturn=SCB_enNOPENDING;
    uint32_t u32Reg= SCB_SHCSR_R;
    u32Reg&=SCB_SHCSR_R_USGFAULTPENDED_MASK;
    u32Reg>>=SCB_SHCSR_R_USGFAULTPENDED_BIT;
    enReturn=(SCB_nPENDSTATE) u32Reg;
    return enReturn;
}

inline uint32_t SCB_MemoryFault_u32GetAddress(void)
{
    return SCB_MMFAR_R;
}

inline uint32_t SCB_BusFault_u32GetAddress(void)
{
    return SCB_BFAR_R;
}
inline void SCB__vEnableExceptions(void)
{
    SCB_UsageFault__vEnable();
    SCB_BusFault__vEnable();
    SCB_MemoryFault__vEnable();
}

inline void SCB__vEnableTraps(void)
{
    SCB__vEnDIV0Trap();
    SCB__vEnUnAlignTrap();
    SCB__vEnUnprivilegedSWTRIGGER();
}

inline void SCB__vInit(void)
{
    SCB__vSetVectorOffset(0x20000000);
    SCB__vRegisterISR(NMI_vISR,SCB_enVECISR_NMI);
    SCB__vRegisterISR(PendSV_vISR,SCB_enVECISR_PENDSV);
    SCB__vRegisterISR(UsageFault_vISR,SCB_enVECISR_USAGEFAULT);
    SCB__vRegisterISR(BusFault_vISR,SCB_enVECISR_BUSFAULT);
    SCB__vRegisterISR(MemoryFault_vISR,SCB_enVECISR_MEMMANAGE);
    SCB__vRegisterISR(HardFault_vISR,SCB_enVECISR_HARDFAULT);
    SCB__vRegisterISR(SVCall_vISR,SCB_enVECISR_SVCALL);
    SCB__vEnableTraps();
    SCB__vEnableExceptions();
    SCB__enSetPriorityGroup(SCB_enPRIGROUP_XXX);
    SCB__enSetStackAligment(SCB_enALIGN_4BYTE);
}

void SCB__vRegisterISR(void (*Isr) (void),SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if((uint32_t)Isr !=0)
    {
        if(u32BaseVector<=0x00010000)
        {
            __asm(" cpsid i");
            FLASH__enWriteWorld((uint32_t)Isr|1,u32BaseVector+((uint32_t)enVector*4));
            __asm(" cpsie i");
        }
        else if((u32BaseVector>=0x20000000) && (u32BaseVector<=0x20000400) )
        {
            *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)Isr|1;
        }
    }
}

/*
void SCB__vUnRegisterISR(SCB_nVECISR enVector)
{
    uint32_t u32BaseVector = SCB_VTOR_R;

    if(u32BaseVector<=0x00010000)
    {
        __asm(" cpsid i");
        FLASH__enWrite((uint32_t)IntDefaultHandler|1,u32BaseVector+((uint32_t)enVector*4));
        __asm(" cpsie i");
    }
    else if((u32BaseVector>=0x20000000) && (u32BaseVector<=0x20000400) )
    {
        *((uint32_t*)u32BaseVector+(uint32_t)enVector)=(uint32_t)IntDefaultHandler|1;
    }
}
*/


/*
 * ISR
 */
typedef enum
{
    ISR_enR0=0,
    ISR_enR1,
    ISR_enR2,
    ISR_enR3,
    ISR_enR12,
    ISR_enLR,
    ISR_enPC,
    ISR_enPSR,
}ISR_nContext;


void NMI_vISR(void)
{
    //use for GPIO activation
    while(1);
}

void PendSV_vISR(void)
{
    //context switch, lower priority
    while(1);
}

uint32_t SCB_pu32Context[8];
void UsageFault_vISR(void)
{
    uint16_t SCB_u16UsageFault=0;
    __asm(
    " MRS R0, MSP\n"
    " ldr R2, =SCB_pu32Context\n"
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"//SCB_pu32Context[0] R0
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"//SCB_pu32Context[1] R1
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"//SCB_pu32Context[2] R2
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"//SCB_pu32Context[3] R3
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"//SCB_pu32Context[4] R12
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"//SCB_pu32Context[5] LR
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"//SCB_pu32Context[6] PC
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");//SCB_pu32Context[7] PSR
    SCB_u16UsageFault =SCB_UCFSR_R;
    switch(SCB_u16UsageFault)
    {
        case SCB_enUCFSR_UNDEFINSTR:
            while(1);
        case SCB_enUCFSR_INVSTATE:
            while(1);
        case SCB_enUCFSR_INVPC:
            while(1);
        case SCB_enUCFSR_NOCP:
            while(1);
        case SCB_enUCFSR_UNALIGNED:
            while(1);
        case SCB_enUCFSR_DIVBYZERO:
            while(1);
        default:
            while(1);
    }
}
void BusFault_vISR(void)
{

    uint8_t SCB_u8BusFault=0;
    //uint32_t SCB_u32MemoryBus=0;
    __asm(
    " MRS R0, MSP\n"
    " ldr R2, =SCB_pu32Context\n"
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"//SCB_pu32Context[0] R0
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"//SCB_pu32Context[1] R1
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"//SCB_pu32Context[2] R2
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"//SCB_pu32Context[3] R3
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"//SCB_pu32Context[4] R12
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"//SCB_pu32Context[5] LR
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"//SCB_pu32Context[6] PC
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");//SCB_pu32Context[7] PSR
    SCB_u8BusFault =SCB_BCFSR_R;
    if((SCB_u8BusFault & (uint8_t)SCB_enBCFSR_BFARVALID) == (uint8_t)SCB_enBCFSR_BFARVALID)
    {
        //SCB_u32MemoryBus=SCB_BFAR_R;
        SCB_u8BusFault&=~SCB_enBCFSR_BFARVALID;
    }

    switch(SCB_u8BusFault)
    {
        case SCB_enBCFSR_LSPERR:
            while(1);
        case SCB_enBCFSR_STKERR:
            while(1);
        case SCB_enBCFSR_UNSTKERR:
            while(1);
        case SCB_enBCFSR_IMPRECISERR:
            while(1);
        case SCB_enBCFSR_PRECISERR:
            while(1);
        case SCB_enBCFSR_IBUSERR:
            while(1);
        default:
            while(1);
    }
}
void MemoryFault_vISR(void)
{

    uint8_t SCB_u8MemFault=0;
    //uint32_t SCB_u32MemoryMem=0;
    __asm(
    " MRS R0, MSP\n"
    " ldr R2, =SCB_pu32Context\n"
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"//SCB_pu32Context[0] R0
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"//SCB_pu32Context[1] R1
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"//SCB_pu32Context[2] R2
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"//SCB_pu32Context[3] R3
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"//SCB_pu32Context[4] R12
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"//SCB_pu32Context[5] LR
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"//SCB_pu32Context[6] PC
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");//SCB_pu32Context[7] PSR
    SCB_u8MemFault =SCB_MCFSR_R;
    if((SCB_u8MemFault & (uint8_t)SCB_enMCFSR_MMARVALID) == (uint8_t)SCB_enMCFSR_MMARVALID)
    {
        //SCB_u32MemoryMem=SCB_MMFAR_R;
        SCB_u8MemFault&=~SCB_enMCFSR_MMARVALID;
    }

    switch(SCB_u8MemFault)
    {
        case SCB_enMCFSR_MLSPERR:
            while(1);
        case SCB_enMCFSR_MSTKERR:
            while(1);
        case SCB_enMCFSR_MUNSTKERR:
            while(1);
        case SCB_enMCFSR_DACCVIOL:
            while(1);
        case SCB_enMCFSR_IACCVIOL:
            while(1);
        default:
            while(1);
    }
}
void HardFault_vISR(void)
{
    __asm(
    " MRS R0, MSP\n"
    " ldr R2, =SCB_pu32Context\n"
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"//SCB_pu32Context[0] R0
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"//SCB_pu32Context[1] R1
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"//SCB_pu32Context[2] R2
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"//SCB_pu32Context[3] R3
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"//SCB_pu32Context[4] R12
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"//SCB_pu32Context[5] LR
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"//SCB_pu32Context[6] PC
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");//SCB_pu32Context[7] PSR
    while(1);
}
void SVCall_vISR(void)
{
    while(1);
}






