/**
 *
 * @file NVIC_Priority.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PRIORITY_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PRIORITY_H_

#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Peripheral/NVIC_Enum.h>

NVIC_nSTATUS    NVIC__enSetPriorityIRQ(NVIC_nSTIR enIRQ,NVIC_nPRIORITY enPriority);
NVIC_nPRIORITY  NVIC__enGetPriorityIRQ(NVIC_nSTIR enIRQ);



#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_PRIORITY_H_ */
