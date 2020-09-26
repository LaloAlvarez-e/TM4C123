/*
 * HIB_ReqHib.c
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/HIB/Driver/Control/xHeader/HIB_ReqHib.h>
#include <xDriver_MCU/HIB/Driver/Intrinsics/HIB_Intrinsics.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/HIB_Peripheral.h>


HIB_nSTATUS HIB__enRequestHibernation(void)
{
    return HIB__enSetControlGeneric((uint32_t) HIB_enREQUEST_INIT,HIB_HIBCTL_HIBREQ_MASK, HIB_HIBCTL_R_HIBREQ_BIT);
}
