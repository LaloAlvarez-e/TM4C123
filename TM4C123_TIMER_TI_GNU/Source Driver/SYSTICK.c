/*
 * SysTick.c
 *
 *  Created on: 20/03/2020
 *      Author: vyldram
 */



#include <SYSTICK.h>

void SysTick_vISR(void);


volatile uint32_t SysTick_u32CountOv=0;
volatile uint32_t SysTick_u32Count=0;
volatile float32_t SysTick_fUsTick=1.0;
volatile float32_t SysTick_fFrecTick=0.0;
volatile uint32_t SysTick_u32CountTick=0;

volatile uint32_t SysTick_u32FrecBase=0;
volatile float32_t SysTick_fUsBase=0.0;

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource)
{
    SysTick_nSTATUS enReturn = SysTick_enERROR;
    uint32_t u32SysTickFrequency=0;
    float32_t fSysTickFrequency=0u,fSysTickUs=1000000.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)enClockSource&SysTick_CSR_CLKSOURCE_MASK;
    if((uint8_t)(enClockSource&SysTick_CSR_CLKSOURCE_MASK) == SysTick_enPIOSC4)
    {
        u32SysTickFrequency=SysTick_PIOSC4;
    }
    else
    {
        u32SysTickFrequency=SYSCTL__u32GetClock();
    }

    if(u32Tick >40 )
    {
        if(u32Tick>(SysTick_VALUEMAX+1))
        {
            u32Tick=(SysTick_VALUEMAX+1);
        }
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=u32SysTickFrequency;
        SysTick_fUsBase=1000000.0/(float32_t)u32SysTickFrequency;

        fSysTickFrequency=(float32_t)u32SysTickFrequency;
        fSysTickFrequency/=(float32_t)u32Tick;
        fSysTickUs/=fSysTickFrequency;

        SysTick_fFrecTick=fSysTickFrequency;
        SysTick_fUsTick=fSysTickUs;
        SysTick_u32CountTick=u32Tick;

        SCB__vRegisterIRQVectorHandler(SysTick_vISR,SCB_enVECISR_SYSTICK);
        SCB_SHPR3->SYSTICK=(uint8_t)enPriority&SCB_SHPR3_SYSTICK_MASK;
        SysTick_RVR_R=u32Tick-1;
        SysTick_CVR_R=0;
        SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;

    }
    else
    {
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=0;
        SysTick_fUsBase=0.0;
        SysTick_fUsTick=1.0;
        SysTick_fFrecTick=0-0;
        SysTick_u32CountTick=0;
        enReturn =SysTick_enERROR;
    }

    return enReturn;
}

SysTick_nSTATUS SysTick__enInitFrequency(float32_t fFrequency, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0u, u32CountTick=0;
    float32_t fSysTickFrequency=0.0,fSysTickUs=1000000.0, fCountTick=0.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float32_t)u32SysTickFrequency;
    fCountTick=fSysTickFrequency/fFrequency;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float32_t)u32SysTickFrequency;
            fCountTick=fSysTickFrequency/fFrequency;
            u32CountTick=(uint32_t)fCountTick;
            if(u32CountTick>(SysTick_VALUEMAX+1))
            {
                SysTick_u32CountOv=0;
                SysTick_u32Count=0;
                SysTick_u32FrecBase=0;
                SysTick_fUsBase=0.0;
                SysTick_fUsTick=1.0;
                SysTick_fFrecTick=0-0;
                SysTick_u32CountTick=0;
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick_u32CountOv=0;
            SysTick_u32Count=0;
            SysTick_u32FrecBase=u32SysTickFrequency;
            SysTick_fUsBase=1000000.0/(float32_t)u32SysTickFrequency;

            fSysTickUs/=fFrequency;

            SysTick_fFrecTick=fFrequency;
            SysTick_fUsTick=fSysTickUs;
            SysTick_u32CountTick=u32CountTick;

            SCB__vRegisterIRQVectorHandler(SysTick_vISR,SCB_enVECISR_SYSTICK);
            SCB_SHPR3->SYSTICK=(uint8_t)enPriority&SCB_SHPR3_SYSTICK_MASK;
            SysTick_RVR_R=u32CountTick-1;
            SysTick_CVR_R=0;
            SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
        }

    }
    else
    {
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=0;
        SysTick_fUsBase=0.0;
        SysTick_fUsTick=1.0;
        SysTick_fFrecTick=0-0;
        SysTick_u32CountTick=0;
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}

SysTick_nSTATUS SysTick__enInitUs(float32_t fTimeUs, SCB_nSHPR enPriority)
{
    SysTick_nSTATUS enReturn = SysTick_enOK;
    uint32_t u32SysTickFrequency=0u, u32CountTick=0;
    float32_t fSysTickFrequency=0.0, fCountTick=0.0;

    SysTick_CSR_R=0;
    SysTick_CSR->CLKSOURCE=(uint8_t)SysTick_enSYSCLK;
    u32SysTickFrequency=SYSCTL__u32GetClock();

    fSysTickFrequency=(float32_t)u32SysTickFrequency;
    fSysTickFrequency/=1000000.0;
    fCountTick=fSysTickFrequency*fTimeUs;
    u32CountTick=(uint32_t)fCountTick;

    if(u32CountTick>40)
    {
        if(u32CountTick>(SysTick_VALUEMAX+1))
        {
            SysTick_CSR->CLKSOURCE=SysTick_enPIOSC4;
            u32SysTickFrequency=SysTick_PIOSC4;
            fSysTickFrequency=(float32_t)u32SysTickFrequency;
            fSysTickFrequency/=1000000.0;
            fCountTick=fSysTickFrequency*fTimeUs;
            u32CountTick=(uint32_t)fCountTick;

            if(u32CountTick>(SysTick_VALUEMAX+1))
            {
                SysTick_u32CountOv=0;
                SysTick_u32Count=0;
                SysTick_u32FrecBase=0;
                SysTick_fUsBase=0.0;
                SysTick_fUsTick=1.0;
                SysTick_fFrecTick=0-0;
                SysTick_u32CountTick=0;
                enReturn =SysTick_enERROR;
            }
        }
        if(enReturn == SysTick_enOK)
        {
            SysTick_u32CountOv=0;
            SysTick_u32Count=0;
            SysTick_u32FrecBase=u32SysTickFrequency;
            if(u32SysTickFrequency!=0)
            {
                SysTick_fUsBase=1000000.0/(float32_t)u32SysTickFrequency;
            }
            if(fTimeUs!=0.0)
            {
                SysTick_fFrecTick=1000000.0/fTimeUs;
            }
            SysTick_fUsTick=fTimeUs;
            SysTick_u32CountTick=u32CountTick;

            SCB__vRegisterIRQVectorHandler(SysTick_vISR,SCB_enVECISR_SYSTICK);
            SCB_SHPR3->SYSTICK=(uint8_t)enPriority&SCB_SHPR3_SYSTICK_MASK;
            SysTick_RVR_R=u32CountTick-1;
            SysTick_CVR_R=0;
            SysTick_CSR_R|=SysTick_CSR_R_TICKINT_EN|SysTick_CSR_R_ENABLE_EN;
        }

    }
    else
    {
        SysTick_u32CountOv=0;
        SysTick_u32Count=0;
        SysTick_u32FrecBase=0;
        SysTick_fUsBase=0.0;
        SysTick_fUsTick=1.0;
        SysTick_fFrecTick=0-0;
        SysTick_u32CountTick=0;
        enReturn =SysTick_enERROR;
    }


    return enReturn;
}

 void SysTick__vClearCount(void)
{
    SysTick_u32CountOv=0;
    SysTick_u32Count=0;
}


 float32_t SysTick__fGetTimeUs(void)
{
    return (float32_t)((float32_t)SysTick_u32Count*SysTick_fUsTick);
}

 float32_t SysTick__fGetFrequency(void)
{
    float32_t fReg=0.0;
    if(SysTick_u32Count!=0)
    {
        fReg=(float32_t)(SysTick_fFrecTick/SysTick_u32Count);
    }
    return (float32_t)(fReg);

}

 uint32_t SysTick__u32GetCount(void)
{
    return (uint32_t) SysTick_u32Count;
}

 uint32_t SysTick__u32GetCurrentTick(void)
{
    uint32_t u32Tick=SysTick_CVR_R;
    return (uint32_t) u32Tick;
}

uint64_t SysTick__u64GetCurrentCountTick(void)
{
    uint64_t u64CountTick= SysTick__u32GetMaxTick();
    u64CountTick*=SysTick_u32Count;
    u64CountTick+= SysTick__u32GetMaxTick();
    u64CountTick-=SysTick__u32GetCurrentTick();
    u64CountTick--;
    return (uint64_t) u64CountTick;

}

 uint32_t SysTick__u32GetMaxTick(void)
{
    return (uint32_t) SysTick_u32CountTick;
}

 void SysTick__vDelayUs(float32_t fTimeUs)
{
    volatile uint64_t u64CountInitial = SysTick__u64GetCurrentCountTick();
    volatile float32_t fCount=0.0;
    volatile uint64_t u64CountDelta = 0;
    volatile uint64_t u64CountCurrent = 0;
    volatile uint64_t u64CountMax=0;
    volatile uint64_t u64Count= 0;

    if(SysTick_fUsTick!=0.0)
    {
        fCount= fTimeUs/SysTick_fUsTick;
    }
    u64CountMax= (uint64_t)fCount;
    u64CountMax*=(uint64_t)SysTick__u32GetMaxTick();

    u64CountDelta=SysTick__u64GetCurrentCountTick();
    u64CountDelta-=u64CountInitial;

    u64CountInitial-=u64CountDelta;
    u64CountCurrent = u64CountInitial;
    while(((uint64_t)u64Count<(uint64_t)u64CountMax))
    {
        u64CountCurrent =SysTick__u64GetCurrentCountTick();
        if(u64CountCurrent>=u64CountInitial)
        {
            u64Count=(uint64_t)( u64CountCurrent - u64CountInitial);
        }
        else
        {
            u64Count=(uint64_t)( u64CountInitial - u64CountCurrent);
        }
    }

}

void SysTick_vISR(void)
{
    SysTick_u32Count++;
    if(SysTick_u32Count==0)
        SysTick_u32CountOv++;
}


