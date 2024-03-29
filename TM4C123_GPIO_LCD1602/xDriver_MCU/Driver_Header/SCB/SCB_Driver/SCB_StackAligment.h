/**
 *
 * @file SCB_StackAligment.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_STACKALIGMENT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_STACKALIGMENT_H_

#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Enum.h>

SCB_nSTATUS SCB__enSetStackAligment(SCB_nAlignment enAlign);
SCB_nAlignment SCB__enGetStackAligment(void);


#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_STACKALIGMENT_H_ */
