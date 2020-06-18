/*
 * HIB_InterruptRoutine.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_InterruptRoutine.h>


void HIB__vISR(void)
{
    volatile uint32_t u32Reg= HIB_HIBMIS_R;

    if(HIB_HIBMIS_R_WC_OCCUR == (u32Reg &HIB_HIBMIS_R_WC_MASK))
    {
        HIB_HIBIC_R=HIB_HIBIC_R_WC_CLEAR;
        HIB__enSetGlobalStatus(HIB_enREADY);
    }

    if(HIB_HIBMIS_R_RTCALT0_OCCUR == (u32Reg &HIB_HIBMIS_R_RTCALT0_MASK))
    {
        do
        {
            u32Reg = HIB_HIBRTCC_R;
        }while (u32Reg != HIB_HIBRTCC_R);

        while(HIB_HIBCTL_R_WRC_BUSY==(HIB_HIBCTL_R&HIB_HIBCTL_R_WRC_MASK));
        HIB_HIBRTCM0_R=u32Reg+10;
        HIB_HIBIC_R=HIB_HIBIC_R_RTCALT0_CLEAR;
        HIB__enSetGlobalCountStatus(HIB_enREADY);
        GPIOF_AHB->GPIODATA^=GPIO_GPIODATA_R_DATA1_MASK;

    }
}
