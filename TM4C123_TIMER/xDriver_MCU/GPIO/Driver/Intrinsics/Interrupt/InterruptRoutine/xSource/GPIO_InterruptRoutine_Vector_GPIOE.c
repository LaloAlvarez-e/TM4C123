/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOE.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOE.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void GPIOE__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
     uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
     if(GPIO_enBUS_APB ==u32RegBUS)
     {
         u32Reg=GPIOE_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN_0)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_0;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER0]();
         }
         if(u32Reg & GPIO_enPIN_1)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_1;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER1]();
         }
         if(u32Reg & GPIO_enPIN_2)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_2;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER2]();
         }
         if(u32Reg & GPIO_enPIN_3)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_3;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER3]();
         }
         if(u32Reg & GPIO_enPIN_4)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_4;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER4]();
         }
         if(u32Reg & GPIO_enPIN_5)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_5;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER5]();
         }
         if(u32Reg & GPIO_enPIN_6)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_6;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER6]();
         }
         if(u32Reg & GPIO_enPIN_7)
         {
             GPIOE_APB_GPIOICR_R=GPIO_enPIN_7;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER7]();
         }
     }
     else
     {
         u32Reg=GPIOE_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN_0)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_0;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER0]();
         }
         if(u32Reg & GPIO_enPIN_1)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_1;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER1]();
         }
         if(u32Reg & GPIO_enPIN_2)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_2;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER2]();
         }
         if(u32Reg & GPIO_enPIN_3)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_3;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER3]();
         }
         if(u32Reg & GPIO_enPIN_4)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_4;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER4]();
         }
         if(u32Reg & GPIO_enPIN_5)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_5;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER5]();
         }
         if(u32Reg & GPIO_enPIN_6)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_6;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER6]();
         }
         if(u32Reg & GPIO_enPIN_7)
         {
             GPIOE_AHB_GPIOICR_R=GPIO_enPIN_7;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_E][(uint32_t)GPIO_enPIN_NUMBER7]();
         }
     }
}


