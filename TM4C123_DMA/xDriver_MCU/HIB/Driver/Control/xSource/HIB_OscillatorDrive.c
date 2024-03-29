/**
 *
 * @file HIB_OscillatorDrive.c
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_OscillatorDrive.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>


HIB_nSTATUS HIB__enSetOscillatorDrive(HIB_nOSCDRIVE enOscDrive)
{
    return HIB__enSetControlGeneric((uint32_t) enOscDrive,HIB_HIBCTL_OSCDRV_MASK, HIB_HIBCTL_R_OSCDRV_BIT);
}

HIB_nOSCDRIVE HIB__enGetOscillatorDrive(void)
{
    return (HIB_nOSCDRIVE) HIB__u32GetControlGeneric(HIB_HIBCTL_OSCDRV_MASK, HIB_HIBCTL_R_OSCDRV_BIT);
}
