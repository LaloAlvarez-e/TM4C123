/**
 *
 * @file Conversion_Wrapper.c
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
 * @verbatim 6 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Wrapper.h>

#if defined (__TI_ARM__ )
    #pragma CHECK_MISRA("-16.7")
#endif

void Conv__vOutBuffer(char cCharacter, void* pvBuffer, uint32_t u32Index, uint32_t u32MaxLenght)
{
    char* pcBuffer = 0;
    if((void*)0 != pvBuffer)
    {
        if (u32Index < u32MaxLenght)
        {
            pcBuffer = (char*)pvBuffer;
            pcBuffer += u32Index;
            *pcBuffer = cCharacter;
        }
    }
}

void Conv__vOutNull(char cCharacter, void* pvBuffer, uint32_t u32Index, uint32_t u32MaxLenght)
{
    (void)cCharacter; (void)pvBuffer; (void)u32Index; (void)u32MaxLenght;
}

void Conv__vOutChar(char cCharacter, void* pvBuffer, uint32_t u32Index, uint32_t u32MaxLenght)
{
    (void)pvBuffer; (void)u32Index; (void)u32MaxLenght;
    if((void*)0 != pvBuffer)
    {
        if ((char)0 != cCharacter)
        {
        /* _putchar(character);*/
        }
    }
}

void Conv__vOutFunction(char cCharacter, void* pvBuffer, uint32_t u32Index, uint32_t u32MaxLenght)
{
    (void)u32Index; (void)u32MaxLenght;
    CONV_OUT_WRAPPER_TypeDef* pvOutWrapper = 0;
    CONV_FUNCTION_Typedef pvOutFunction = 0;
    void* pvOutFunctionArguments = 0;
    if((void*)0 != pvBuffer)
    {
      pvOutWrapper = (CONV_OUT_WRAPPER_TypeDef*)pvBuffer;
      pvOutFunction = (CONV_FUNCTION_Typedef) pvOutWrapper->pfvFunction;
      pvOutFunctionArguments = pvOutWrapper->pvArguments;
      if ((char)0 != cCharacter)
      {
          pvOutFunction(cCharacter, pvOutFunctionArguments);
      }
    }
}

#if defined (__TI_ARM__ )
    #pragma RESET_MISRA("16.7")
#endif
