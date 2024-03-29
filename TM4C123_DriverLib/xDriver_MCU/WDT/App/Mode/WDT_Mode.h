/**
 *
 * @file WDT_Mode.h
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODE_WDT_MODE_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODE_WDT_MODE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nSTATUS WDT__enSetMode(WDT_nMODULE enModule, WDT_nMODE enMode);
WDT_nSTATUS WDT__enSetModeStruct(WDT_nMODULE enModule, const WDT_MODE_Typedef* pstMode);

WDT_nMODE WDT__enGetMode(WDT_nMODULE enModule);
void WDT__vGetMode(WDT_nMODULE enModule, WDT_MODE_Typedef* pstMode);
WDT_MODE_Typedef* WDT__pstGetMode(WDT_nMODULE enModule);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODE_WDT_MODE_H_ */
