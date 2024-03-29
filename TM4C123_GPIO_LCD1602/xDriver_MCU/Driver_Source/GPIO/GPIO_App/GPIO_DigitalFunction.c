/**
 *
 * @file GPIO_DigitalFunction.c
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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_App/GPIO_DigitalFunction.h>

#include <stdint.h>
#include <stdlib.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Intrinsics/GPIO_Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Driver.h>

void GPIO__vSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunction)
{
    GPIO_nBUS enBus=GPIO_enAPB;
    uint32_t u32Port =(enFunction>>16u)&0xFFu;
    uint32_t u32Bit =(enFunction>>8u)&0x1Fu;
    uint32_t u32Pin =(u32Bit>>2u)&0xFFu;
    uint32_t u32Value =(enFunction)&0xFu;
    uint32_t u32Reg=0;
    GPIO_TypeDef* gpio=0;
    u32Value<<=u32Bit;
    u32Pin=((uint32_t)1u<<u32Pin);
    if(u32Port>(uint32_t)GPIO_enMAX)
    {
        u32Port=(uint32_t)GPIO_enMAX;
    }
    u32Pin&=GPIO_enALL;

    GPIO__vSetReady((GPIO_nPORT)u32Port);
    enBus=GPIO__enGetBus((GPIO_nPORT)u32Port);
    gpio=GPIO_BLOCK[enBus][(uint32_t)u32Port];
    GPIO__vEnDigital((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    GPIO__vDisAnalog((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    if(0u!=u32Value)
    {
        GPIO__vEnAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    }
    else
    {
        GPIO__vDisAltFunction((GPIO_nPORT)u32Port,(GPIO_nPIN)u32Pin);
    }
    u32Reg=gpio->GPIOPCTL;
    u32Reg&=~((uint32_t)0xFu<<u32Bit);
    u32Reg|=u32Value;
    gpio->GPIOPCTL=u32Reg;
}

