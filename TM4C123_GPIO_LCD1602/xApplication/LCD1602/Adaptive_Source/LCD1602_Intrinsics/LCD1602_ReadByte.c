/**
 *
 * @file LCD1602_ReadByte.c
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
 * @verbatim 17 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Intrinsics/LCD1602_ReadByte.h>

#include <stdint.h>
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Defines.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO.h>

uint8_t LCD1602__u8ReadLowByte(void)
{
    uint32_t u32Reg=0u;
    uint8_t  u8DatoRead=0u;
    u32Reg= GPIO__u32GetData(LCD1602_PORT_D7,LCD1602_D7);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN3;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D6,LCD1602_D6);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN2;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D5,LCD1602_D5);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN1;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D4,LCD1602_D4);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN0;
    }

    return u8DatoRead;
}

uint8_t LCD1602__u8ReadHighByte(void)
{
    uint32_t u32Reg=0u;
    uint8_t  u8DatoRead=0u;

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D7,LCD1602_D7);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN7;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D6,LCD1602_D6);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN6;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D5,LCD1602_D5);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN5;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D4,LCD1602_D4);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN4;
    }

    return u8DatoRead;
}


