/**
 *
 * @file Conversion_NumberFloat2String.h
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
 * @verbatim 10 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_XHEADER_CONVERSION_NUMBERFLOAT2STRING_H_
#define XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_XHEADER_CONVERSION_NUMBERFLOAT2STRING_H_

#include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Wrapper.h>

CONV_nSTATUS Conv__enNumber2String_Float(CONV_OUT_TypeDef pvfOut, char* pcBufferOut, float64_t dValue, uint32_t u32Index, uint32_t u32MaxLenght, uint32_t* pu32BufOutLenght, uint32_t u32Width, uint32_t u32flags, uint32_t u32Prec);



#endif /* XUTILS_CONVERSION_CONVERSION_NUMBER2STRING_XHEADER_CONVERSION_NUMBERFLOAT2STRING_H_ */
