/**
 *
 * @file Conversion_Conversion.c
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

#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Primitives/Conversion_Conversion.h>

CONV_nSTATUS CONV__enConversion(char* pcPointer, uint64_t u64Number,uint8_t* u8Length, uint8_t u8Base ,const char* pcLookUpTable)
{
    CONV_nSTATUS enStatus= CONV_enSTATUS_ERROR;
    uint8_t  u8Num=0u;
    uint64_t u64NumberReg = 0u;
    if(((uint32_t)0 != (uint32_t)pcPointer) && ((uint32_t)0 != (uint32_t)pcLookUpTable)&& ((uint32_t)0 != (uint32_t)u8Length))
    {
        enStatus = CONV_enSTATUS_OK;
        *u8Length=0u;
        *pcPointer = 0u;/*guarda el fin de cadena en la ultima posicion*/

        do{
            (*u8Length)++;
            pcPointer--;/*se decrementa la posicion donse guardara el valor*/
            u64NumberReg=u64Number;
            u64NumberReg%=u8Base;
            u8Num=(uint8_t)(u64NumberReg);/*obtiene el digito de menor peso*/
            *pcPointer =(char) pcLookUpTable[u8Num];/*convierte el valor en caracter*/
            u64Number/=u8Base;
        }  while((u64Number > 0u));/*mientras exista un digito sigue el ciclo*/
    }
    return enStatus;
}


