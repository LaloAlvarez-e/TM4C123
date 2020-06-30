/**
 *
 * @file GPIO_InterruptEdge.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTEDGE_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTEDGE_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Interrupt/GPIO_InterruptSense.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Primitives/GPIO_Primitives.h>

void GPIO__vSetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nEDGE enEdge);
GPIO_nEDGE GPIO__enGetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin);

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_DRIVER_GPIO_INTRINSICS_GPIO_INTERRUPT_GPIO_INTERRUPTEDGE_H_ */
