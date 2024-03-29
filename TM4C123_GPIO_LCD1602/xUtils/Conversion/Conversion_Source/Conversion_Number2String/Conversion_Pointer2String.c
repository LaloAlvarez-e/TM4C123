/**
 *
 * @file Conversion_Pointer2String.c
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
 * @verbatim 18 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Pointer2String.h>

#include <stdint.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>

#define HEX2STRINGMAX   (19u)

const char CONV_pc8Pointer[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

uint8_t CONV__u8Pointer2String(void* vNumber, char* pcConv)
{
    CONV_nSTATUS enStatus= CONV_enSTATUS_ERROR;
    char  pcConvTemp[HEX2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[HEX2STRINGMAX - 1u];
    uint8_t u8Length =0u;
    uint32_t u32Number= (uint32_t)&vNumber;

    enStatus =CONV__enConversion(pcPointerActual, (uint64_t) u32Number,&u8Length, 16u,CONV_pc8Pointer);
    if(CONV_enSTATUS_OK == enStatus)
    {
        u8Length++;
        pcPointerActual-= u8Length;
        *pcPointerActual = 'b';
        enStatus=CONV__enInversion(pcPointerActual,pcConv,u8Length);
        if(CONV_enSTATUS_ERROR == enStatus)
        {
            u8Length=0u;
        }
    }
    return u8Length;
}





