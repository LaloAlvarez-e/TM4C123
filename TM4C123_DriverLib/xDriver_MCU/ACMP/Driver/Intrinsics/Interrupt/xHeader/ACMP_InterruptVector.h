/**
 *
 * @file ACMP_InterruptVector.h
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTVECTOR_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void ACMP__vEnInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg, ACMP_nPRIORITY enACMPPriority);
void ACMP__vDisInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_XHEADER_ACMP_INTERRUPTVECTOR_H_ */
