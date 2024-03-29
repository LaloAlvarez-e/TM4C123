/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOC.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOC.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>

void GPIOC__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
     if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
     {
         if(DMA_DMACHIS_R_CHIS6_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS6_MASK))
         {
             if(DMA_DMAREQMASKSET_R_SET6_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET6_MASK ))
             {
                 if(DMA_DMACHMAP0_R_CH6SEL_GPIOC == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH6SEL_MASK ))
                 {
                      DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][6u]();
                      DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS6_CLEAR;
                 }
             }
         }
     }

     if((uint32_t)GPIO_enBUS_APB ==u32RegBUS)
     {
         u32Reg=GPIOC_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN_0)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_0;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER0]();
         }
         if(u32Reg & GPIO_enPIN_1)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_1;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER1]();
         }
         if(u32Reg & GPIO_enPIN_2)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_2;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER2]();
         }
         if(u32Reg & GPIO_enPIN_3)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_3;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER3]();
         }
         if(u32Reg & GPIO_enPIN_4)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_4;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER4]();
         }
         if(u32Reg & GPIO_enPIN_5)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_5;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER5]();
         }
         if(u32Reg & GPIO_enPIN_6)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_6;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER6]();
         }
         if(u32Reg & GPIO_enPIN_7)
         {
             GPIOC_APB_GPIOICR_R=GPIO_enPIN_7;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER7]();
         }
     }
     else
     {
         u32Reg=GPIOC_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN_0)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_0;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER0]();
         }
         if(u32Reg & GPIO_enPIN_1)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_1;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER1]();
         }
         if(u32Reg & GPIO_enPIN_2)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_2;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER2]();
         }
         if(u32Reg & GPIO_enPIN_3)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_3;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER3]();
         }
         if(u32Reg & GPIO_enPIN_4)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_4;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER4]();
         }
         if(u32Reg & GPIO_enPIN_5)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_5;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER5]();
         }
         if(u32Reg & GPIO_enPIN_6)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_6;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER6]();
         }
         if(u32Reg & GPIO_enPIN_7)
         {
             GPIOC_AHB_GPIOICR_R=GPIO_enPIN_7;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_C][(uint32_t)GPIO_enPIN_NUMBER7]();
         }
     }
}



