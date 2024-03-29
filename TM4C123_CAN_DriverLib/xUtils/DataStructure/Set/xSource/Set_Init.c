/**
 *
 * @file Set_Init.c
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
 * @verbatim 13 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Set/xHeader/Set_Init.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Init.h>

Set_TypeDef* Set__pstInit(uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2),void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    Set_TypeDef* pstSet = (Set_TypeDef*) 0UL;
    pstSet = (Set_TypeDef*)SLinkedList__pstInit(pfvDestroyElementDataArg);
    if((uint32_t) 0UL != (uint32_t) pstSet)
    {
        pstSet->pfu32Match = pfu32MatchArg;
    }

    return pstSet;
}

Set_nSTATUS Set__enInit(Set_TypeDef* pstSet, uint32_t (*pfu32MatchArg) (const void *pcvKey1, const void *pcvKey2), void (*pfvDestroyElementDataArg) (void *DataContainer))
{
    Set_nSTATUS enStatus = Set_enSTATUS_ERROR;
    enStatus = (Set_nSTATUS) SLinkedList__enInit( (SLinkedList_TypeDef*) pstSet, pfvDestroyElementDataArg);
    if(Set_enSTATUS_ERROR != enStatus)
    {
        pstSet->pfu32Match = pfu32MatchArg;
    }
    return enStatus;
}


