/**
 *
 * @file GPIO_InterruptConfig.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */




#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/xHeader/GPIO_InterruptConfig.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/GPIO_Interrupt.h>

void GPIO__vEnInterruptConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nINT_CONFIG enIntConfig)
{
    uint32_t u32Sense=((uint32_t)enIntConfig>>8u)&1u;
    uint32_t u32Event=((uint32_t)enIntConfig)&3u;

    if( (uint32_t)GPIO_enSENSE_EDGE == u32Sense)
    {
        GPIO__vSetIntEdge(enPort,enPin,(GPIO_nEDGE)u32Event);
    }
    else
    {
        GPIO__vSetIntLevel(enPort,enPin,(GPIO_nLEVEL)u32Event);
    }
    GPIO__vEnInterruptSource(enPort,enPin);
}



