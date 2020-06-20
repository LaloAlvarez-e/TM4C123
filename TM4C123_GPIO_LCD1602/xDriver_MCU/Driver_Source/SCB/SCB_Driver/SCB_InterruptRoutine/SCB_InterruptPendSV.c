/**
 *
 * @file SCB_InterruptPendSV.c
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



#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_InterruptRoutine/SCB_InterruptPendSV.h>


void PendSV__vISR(void)
{
    /*context switch, lower priority*/
    while(1u){}
}
