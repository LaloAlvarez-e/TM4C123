/*
 * TIMER.c
 *
 *  Created on: 6 may. 2018
 *      Author: InDev
 */


#include "TIMER.h"

volatile int32_t CPUClockS=0;
volatile int32_t CPUClockms=0;
volatile int32_t CPUClockus=0;
volatile int32_t finalSilenceB=1700;

int32_t Init_WTIMER1B(void);

int32_t Init_WTIMER0A_us(uint64_t time)
{
    volatile int32_t delay=0;
    volatile int32_t CPUClockL=0;
    volatile uint64_t CPUClockF=0;
    volatile int32_t count=0;

    Change_TimeOut0A(time);
    CPUClockL=SYSCTL_ClockGet();
    CPUClockS=CPUClockL;
    CPUClockL/=1000;
    CPUClockms=CPUClockL;
    CPUClockus=CPUClockms/1000;
    CPUClockF=CPUClockus;
    time*=CPUClockF;
    count=(int32_t)time;



    SYSCTL_RCGCGPIO_RCGCGPIOA_BB=SYSCTL_RCGCGPIO_RCGCGPIOA_EN;
    while(SYSCTL_PRGPIO_PRGPIOA_BB==SYSCTL_PRGPIO_PRGPIOA_NORDY);
    GPIOA_AHB->GPIOLOCK=GPIOA_AHB_GPIOLOCK_LOCK_KEY;
    GPIOA_AHB_GPIOCR_CR2_BB=GPIOA_AHB_GPIOCR_CR2_EN;

    GPIOA_AHB_GPIODEN_DEN2_BB=GPIOA_AHB_GPIODEN_DEN2_EN;
    GPIOA_AHB_GPIODR8R_DRV82_BB=GPIOA_AHB_GPIODR8R_DRV82_EN;
    GPIOA_AHB_GPIOSLR_SRL2_BB=GPIOA_AHB_GPIOSLR_SRL2_EN ;
    GPIOA_AHB_GPIODIR_DIR2_BB=GPIOA_AHB_GPIODIR_DIR2_OUTPUT;
    GPIOA_AHB_GPIODAT_DAT2_BB=GPIOA_AHB_GPIODAT_DAT2_LOW;

    GPWTM0_GPTMCTL_TAEN_BB=0;

    GPWTM0_GPTMTAMR->TAMR=GPWTM0_GPTMTAMR_TAMR_PERIOD;
    GPWTM0_GPTMTAMR_TACDIR_BB=GPWTM0_GPTMTAMR_TACDIR_DOWN;
    GPWTM0_GPTMTAMR_TASNAPS_BB=GPWTM0_GPTMTAMR_TASNAPS_DIS;
    GPWTM0_GPTMTAMR_TAWOT_BB=GPWTM0_GPTMTAMR_TAWOT_INSTANT;
    GPWTM0_GPTMTAMR_TAILD_BB=GPWTM0_GPTMTAMR_TAILD_NEXT;


    GPWTM0_GPTMTAILR_R=count-1;

    return 1;
}
int32_t Init_WTIMER0B_us(uint64_t time, uint32_t modes)
{
    volatile int32_t delay=0;
    volatile int32_t CPUClockL=0;
    volatile uint64_t CPUClockF=0;
    volatile int32_t count=0;

    mode=modes;
    SYSCTL_SRWTIMER_SRWTIMER0_BB=1;
    delay=SYSCTL_SRWTIMER_SRWTIMER0_BB;
    SYSCTL_SRWTIMER_SRWTIMER0_BB=0;

    SYSCTL_RCGCWTIMER_RCGCWTIMER0_BB=1;
    while(SYSCTL_PRWTIMER_PRWTIMER0_BB==0);

    CPUClockL=SYSCTL_ClockGet();
    CPUClockS=CPUClockL;
    CPUClockL/=1000;
    CPUClockms=CPUClockL;
    CPUClockus=CPUClockms/1000;
    CPUClockF=CPUClockus;
    time*=CPUClockF;
    count=(int32_t)time;





    GPWTM0_GPTMCFG_R=GPWTM0_GPTMCFG_R_GPTMCFG_SINGLE;
    GPWTM0_GPTMTBMR->TBMR=GPWTM0_GPTMTBMR_TBMR_PERIOD;
    GPWTM0_GPTMTBMR_TBCDIR_BB=GPWTM0_GPTMTBMR_TBCDIR_DOWN;
    GPWTM0_GPTMTBMR_TBSNAPS_BB=GPWTM0_GPTMTBMR_TBSNAPS_DIS;
    GPWTM0_GPTMTBMR_TBWOT_BB=GPWTM0_GPTMTBMR_TBWOT_INSTANT;
    GPWTM0_GPTMTBMR_TBILD_BB=GPWTM0_GPTMTBMR_TBILD_NEXT;

    GPWTM0_GPTMTBILR_R=count-1;

    return 1;
}

int32_t WTIMER0A_Time(uint64_t time)
{
    uint32_t count=0;
    time*=CPUClockus;
    count=(int32_t)time;
    GPWTM0_GPTMTAILR_R=count-1;
    return 1;
}


int32_t WTIMER0B_Time(uint64_t time)
{
    uint32_t count=0;
    time*=CPUClockus;
    count=(int32_t)time;
    GPWTM0_GPTMTBILR_R=count-1;
    return 1;
}


//ToDo  WTIMER0A Interrupt
int WTIMER0A_Interrupt(void)
{
    GPWTM0_GPTMIMR_TATOIM_BB=GPWTM0_GPTMIMR_TATOIM_EN;

    NVIC->EN2_Bit.NVIC_WTIMER0A=NVIC_EN2_NVIC_WTIMER0A_EN;
    NVIC->PRI23_Bit.NVIC_WTIMER0A=4;

    GPWTM0_GPTMCTL_TAEN_BB=1;
    return 1;
}

//ToDo  WTIMER0A DisInterrupt
int WTIMER0A_DisInterrupt(void)
{
    GPWTM0_GPTMIMR_TATOIM_BB  =GPWTM0_GPTMIMR_TATOIM_DIS;
    GPWTM0_GPTMICR_TATOCINT_BB=GPWTM0_GPTMICR_TATOCINT_CLEAR;
    NVIC->EN2_Bit.NVIC_WTIMER0A=NVIC_EN2_NVIC_WTIMER0A_DIS;
    NVIC->PRI23_Bit.NVIC_WTIMER0A=4;
    GPWTM0_GPTMTAV->TAV=0;
    GPWTM0_GPTMCTL_TAEN_BB=0;
    return 1;
}

//ToDo  WTIMER0A Interrupt
int WTIMER0B_Interrupt(void)
{
    GPWTM0_GPTMIMR_TBTOIM_BB=GPWTM0_GPTMIMR_TBTOIM_EN;

    NVIC->EN2_Bit.NVIC_WTIMER0B=NVIC_EN2_NVIC_WTIMER0B_EN;
    NVIC->PRI23_Bit.NVIC_WTIMER0B=2;

    GPWTM0_GPTMCTL_TBEN_BB=1;
    return 1;
}

//ToDo  WTIMER0A DisInterrupt
int WTIMER0B_DisInterrupt(void)
{
    GPWTM0_GPTMIMR_TBTOIM_BB  =GPWTM0_GPTMIMR_TBTOIM_DIS;
    GPWTM0_GPTMICR_TBTOCINT_BB=GPWTM0_GPTMICR_TBTOCINT_CLEAR;
    NVIC->EN2_Bit.NVIC_WTIMER0B=NVIC_EN2_NVIC_WTIMER0B_DIS;
    NVIC->PRI23_Bit.NVIC_WTIMER0B=2;
    GPWTM0_GPTMTBV->TBV=0;
    GPWTM0_GPTMCTL_TBEN_BB=0;
    return 1;
}



int32_t Init_WTIMER1A_Time(void)
{
    volatile int32_t delay=0;

    SYSCTL_SRWTIMER_SRWTIMER1_BB=1;
    delay=SYSCTL_SRWTIMER_SRWTIMER1_BB;
    SYSCTL_SRWTIMER_SRWTIMER1_BB=0;

    SYSCTL_RCGCWTIMER_RCGCWTIMER1_BB=1;
    while(SYSCTL_PRWTIMER_PRWTIMER1_BB==0);

    SYSCTL_RCGCGPIO_RCGCGPIOC_BB=SYSCTL_RCGCGPIO_RCGCGPIOC_EN;
    while(SYSCTL_PRGPIO_PRGPIOC_BB==SYSCTL_PRGPIO_PRGPIOC_NORDY);
    GPIOC_AHB->GPIOLOCK=GPIOC_AHB_GPIOLOCK_LOCK_KEY;
    GPIOC_AHB_GPIOCR_CR6_BB|=GPIOC_AHB_GPIOCR_CR6_EN;


    GPIOC_AHB_GPIODEN_DEN6_BB=GPIOC_AHB_GPIODEN_DEN6_EN;
    GPIOC_AHB_GPIOAFSEL_AFSEL6_BB=GPIOC_AHB_GPIOAFSEL_AFSEL6_ALT;
    GPIOC_AHB_GPIOPCTL->PMC6=GPIOC_AHB_GPIOPCTL_PCM6_WT1CCP0;

    Init_WTIMER1B();

    GPWTM1_GPTMCTL_TAEN_BB=0;


    GPWTM1_GPTMCFG_R=GPWTM1_GPTMCFG_R_GPTMCFG_SINGLE;
    GPWTM1_GPTMTAMR->TAMR=GPWTM1_GPTMTAMR_TAMR_CAPTURE;
    GPWTM1_GPTMTAMR_TACMR_BB=GPWTM1_GPTMTAMR_TACMR_EDGETIME;
    GPWTM1_GPTMTAMR_TAAMS_BB=GPWTM1_GPTMTAMR_TAAMS_CAPCOMP;
    GPWTM1_GPTMTAMR_TACDIR_BB=GPWTM1_GPTMTAMR_TACDIR_UP;
    GPWTM1_GPTMTAMR_TASNAPS_BB=GPWTM1_GPTMTAMR_TASNAPS_DIS;
    GPWTM1_GPTMTAMR_TAWOT_BB=GPWTM1_GPTMTAMR_TAWOT_INSTANT;
    GPWTM1_GPTMTAMR_TAILD_BB=GPWTM1_GPTMTAMR_TAILD_NEXT;

    GPWTM1_GPTMCTL->TAEVENT=GPWTM1_GPTMCTL_TAEVENT_POS;
    GPWTM1_GPTMTAPR_R=0;
    GPWTM1_GPTMTAILR->TAILR=0xFFFFFFFF;

    WTIMER1A_Interrupt();

    return 1;
}

int32_t Init_WTIMER1B(void)
{

    SYSCTL_RCGCWTIMER_RCGCWTIMER1_BB=1;
    while(SYSCTL_PRWTIMER_PRWTIMER1_BB==0);

    GPWTM1_GPTMCTL_TBEN_BB=0;


    GPWTM1_GPTMCFG_R=GPWTM1_GPTMCFG_R_GPTMCFG_SINGLE;
    GPWTM1_GPTMTBMR->TBMR=GPWTM1_GPTMTBMR_TBMR_PERIOD;
    GPWTM1_GPTMTBMR_TBCDIR_BB=GPWTM1_GPTMTBMR_TBCDIR_DOWN;
    GPWTM1_GPTMTBMR_TBSNAPS_BB=GPWTM1_GPTMTBMR_TBSNAPS_DIS;
    GPWTM1_GPTMTBMR_TBWOT_BB=GPWTM1_GPTMTBMR_TBWOT_INSTANT;
    GPWTM1_GPTMTBMR_TBILD_BB=GPWTM1_GPTMTBMR_TBILD_NEXT;




    return 1;
}

//ToDo  WTIMER1A Interrupt
int WTIMER1A_Interrupt(void)
{

    GPWTM1_GPTMIMR_CAEIM_BB=GPWTM1_GPTMIMR_CAEIM_EN;

    NVIC->EN3_Bit.NVIC_WTIMER1A=NVIC_EN3_NVIC_WTIMER1A_EN;
    NVIC->PRI24_Bit.NVIC_WTIMER1A=7;

    GPWTM1_GPTMIMR_TBTOIM_BB=GPWTM1_GPTMIMR_TBTOIM_EN;
    GPWTM1_GPTMTBILR_R=0xFFFFFFFF;

    NVIC->EN3_Bit.NVIC_WTIMER1B=NVIC_EN3_NVIC_WTIMER1B_EN;
    NVIC->PRI24_Bit.NVIC_WTIMER1B=6;

    GPWTM1_GPTMCTL_TBEN_BB=1;
    GPWTM1_GPTMCTL_TAEN_BB=1;
    return 1;
}

//ToDo  WTIMER1A DisInterrupt
int WTIMER1A_DisInterrupt(void)
{
    GPWTM1_GPTMIMR_CAEIM_BB=GPWTM1_GPTMIMR_CAEIM_DIS;

    NVIC->EN3_Bit.NVIC_WTIMER1A=NVIC_EN3_NVIC_WTIMER1A_DIS;
    NVIC->PRI24_Bit.NVIC_WTIMER1A=7;

    GPWTM1_GPTMIMR_TBTOIM_BB=GPWTM1_GPTMIMR_TBTOIM_DIS;
    GPWTM1_GPTMTBILR_R=0xFFFFFFFF;

    NVIC->EN3_Bit.NVIC_WTIMER1B=NVIC_EN3_NVIC_WTIMER1B_DIS;
    NVIC->PRI24_Bit.NVIC_WTIMER1B=6;

    GPWTM1_GPTMTBV->TBV=0;
    GPWTM1_GPTMCTL_TBEN_BB=0;
    GPWTM1_GPTMCTL_TAEN_BB=0;

    return 1;
}





