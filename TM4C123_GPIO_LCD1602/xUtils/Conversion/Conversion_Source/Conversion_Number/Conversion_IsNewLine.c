/**
 *
 * @file Conversion_IsNewLine.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number/Conversion_IsNewLine.h>

#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>

CONV_nNEWLINE CONV_enIsNewLine(char cCharacter)
{
    CONV_nNEWLINE enStatus= CONV_enNEWLINE_NO;
    if(cCharacter == '\n')
    {
        enStatus=CONV_enNEWLINE_OK;
    }
    return enStatus;
}



