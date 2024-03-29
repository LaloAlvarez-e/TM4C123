/**
 *
 * @file CSLinkedList_Struct.h
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
 * @verbatim 9 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_XHEADER_CIRCULARSLINKEDLIST_STRUCT_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_XHEADER_CIRCULARSLINKEDLIST_STRUCT_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    CSLinkedList_enSTATUS_OK,
    CSLinkedList_enSTATUS_ERROR
}CSLinkedList_nSTATUS;

typedef struct CSLinkedListElement
{
        void* pvDataContainer;
        struct CSLinkedListElement *pstNextNode;
}CSLinkedListElement_TypeDef;

typedef struct CSLinkedList
{
        uint32_t u32Size;
        uint32_t (*pfu32Match) (const void *pcvKey1, const void *pcvKey2);
        void (*pfvDestroyElementData) (void *DataContainer);
        void (*pfvDestroy) (void* List);
        CSLinkedListElement_TypeDef *pstHead;
        CSLinkedListElement_TypeDef *pstTail;
}CSLinkedList_TypeDef;




#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_XHEADER_CIRCULARSLINKEDLIST_STRUCT_H_ */
