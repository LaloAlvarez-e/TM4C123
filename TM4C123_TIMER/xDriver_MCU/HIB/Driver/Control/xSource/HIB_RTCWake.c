/**
 *
 * @file HIB_RTCWake.c
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

#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_RTCWake.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>


HIB_nSTATUS HIB__enEnRTCWakeUp(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enRTCWAKE_EN,HIB_HIBCTL_RTCWEN_MASK, HIB_HIBCTL_R_RTCWEN_BIT);
}

HIB_nSTATUS HIB__enDisRTCWakeUp(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enRTCWAKE_DIS,HIB_HIBCTL_RTCWEN_MASK, HIB_HIBCTL_R_RTCWEN_BIT);
}

HIB_nSTATUS HIB__enSetRTCWakeUp(HIB_nRTCWAKE enRTCWake)
{
    return HIB__enSetControlGeneric((uint32_t) enRTCWake,HIB_HIBCTL_RTCWEN_MASK, HIB_HIBCTL_R_RTCWEN_BIT);
}

HIB_nRTCWAKE HIB__enGetRTCWakeUp(void)
{
    return (HIB_nRTCWAKE) HIB__u32GetControlGeneric(HIB_HIBCTL_RTCWEN_MASK, HIB_HIBCTL_R_RTCWEN_BIT);
}


