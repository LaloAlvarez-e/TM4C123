/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOB.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOB.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>


void GPIOB__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<1u);
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS5_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS5_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET5_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET5_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH5SEL_GPIOB == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH5SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][5u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS5_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS18_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS18_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET18_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET18_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH18SEL_GPIOB == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH18SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][18u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS18_CLEAR;
                }
            }
        }
    }
    if((uint32_t)GPIO_enBUS_APB ==u32RegBUS)
    {
        u32Reg=GPIOB_APB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN_0)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_0;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER0]();
        }
        if(u32Reg & GPIO_enPIN_1)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_1;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER1]();
        }
        if(u32Reg & GPIO_enPIN_2)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_2;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER2]();
        }
        if(u32Reg & GPIO_enPIN_3)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_3;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER3]();
        }
        if(u32Reg & GPIO_enPIN_4)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_4;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER4]();
        }
        if(u32Reg & GPIO_enPIN_5)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_5;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER5]();
        }
        if(u32Reg & GPIO_enPIN_6)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_6;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER6]();
        }
        if(u32Reg & GPIO_enPIN_7)
        {
            GPIOB_APB_GPIOICR_R=GPIO_enPIN_7;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER7]();
        }
    }
    else
    {
        u32Reg=GPIOB_AHB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN_0)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_0;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER0]();
        }
        if(u32Reg & GPIO_enPIN_1)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_1;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER1]();
        }
        if(u32Reg & GPIO_enPIN_2)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_2;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER2]();
        }
        if(u32Reg & GPIO_enPIN_3)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_3;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER3]();
        }
        if(u32Reg & GPIO_enPIN_4)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_4;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER4]();
        }
        if(u32Reg & GPIO_enPIN_5)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_5;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER5]();
        }
        if(u32Reg & GPIO_enPIN_6)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_6;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER6]();
        }
        if(u32Reg & GPIO_enPIN_7)
        {
            GPIOB_AHB_GPIOICR_R=GPIO_enPIN_7;
            GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_B][(uint32_t)GPIO_enPIN_NUMBER7]();
        }
    }
}

