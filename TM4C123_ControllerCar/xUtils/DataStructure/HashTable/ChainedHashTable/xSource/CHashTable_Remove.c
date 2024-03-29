/**
 *
 * @file CHashTable_Remove.c
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
 * @verbatim 15 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Remove.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Lookup.h>
#include <xUtils/DataStructure/HashTable/ChainedHashTable/xHeader/CHashTable_Size.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Add.h>

#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/List/SLinkedList_List.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/Intrinsics/Element/SLinkedList_Element.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Remove.h>

CHashTable_nSTATUS CHashTable__enRemove(CHashTable_TypeDef* pstCHashTable, void** pvData)
{
    SLinkedList_TypeDef *pstList = (SLinkedList_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstElement = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstPreviousElement = (SLinkedListElement_TypeDef*) 0UL;
    SLinkedListElement_TypeDef *pstElementNext = (SLinkedListElement_TypeDef*) 0UL;
    void *pvElementData = (void*) 0UL;

    uint32_t u32BucketNum = 0UL;
    uint32_t u32BucketsSize = 0UL;
    uint32_t u32SizeReg = 0UL;
    CHashTable_nSTATUS enMatchResult = CHashTable_enSTATUS_ERROR;
    SLinkedList_nSTATUS enRemoveResult = SLinkedList_enSTATUS_ERROR;

    if(((uint32_t) 0UL != (uint32_t) pstCHashTable) && ((uint32_t) 0UL != (uint32_t) pvData) )
    {
        u32BucketsSize = pstCHashTable->u32Buckets;
        u32BucketNum = pstCHashTable->pfu32HashFunction(*pvData);
        u32BucketNum %= u32BucketsSize;

        pstList = pstCHashTable->pstTable;
        pstList += u32BucketNum;
        pstElement = SLinkedList__pstGetHead(pstList);
        while((uint32_t) 0UL != (uint32_t) pstElement)
        {
            pvElementData = SLinkedList__pvGetElementData(pstElement);
            enMatchResult = (CHashTable_nSTATUS) pstCHashTable->pfu32Match((const void*)*pvData, (const void*)pvElementData);
            if(CHashTable_enSTATUS_OK == enMatchResult)
            {
                enRemoveResult = SLinkedList__enRemoveNext(pstList, pstPreviousElement, pvData);
                if(SLinkedList_enSTATUS_OK == enRemoveResult)
                {
                    u32SizeReg = CHashTable__u32GetSize(pstCHashTable);
                    u32SizeReg--;
                    CHashTable__vSetSize(pstCHashTable, u32SizeReg);
                    break;
                }
                else
                {
                    enMatchResult = CHashTable_enSTATUS_ERROR;
                    break;
                }
            }
            pstPreviousElement = pstElement;
            pstElementNext = SLinkedList__pstGetElementNextNode(pstElement);
            pstElement = pstElementNext;
        }
    }
    return enMatchResult;
}


