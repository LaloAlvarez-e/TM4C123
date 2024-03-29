/**
 *
 * @file CSLinkedList_Add.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ADD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ADD_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

 CSLinkedListElement_TypeDef* CSLinkedList__psAddNext(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psElement, void* pvData);
 CSLinkedListElement_TypeDef*  CSLinkedList__psAddEnd(CSLinkedList_TypeDef* psList, void* pvData);
 CSLinkedListElement_TypeDef*  CSLinkedList__psAddBegin(CSLinkedList_TypeDef* psList, void* pvData);
 CSLinkedListElement_TypeDef*  CSLinkedList__psAddPos(CSLinkedList_TypeDef* psList, uint32_t u32Position, void* pvData);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_XHEADER_CIRCULARSLINKEDLIST_ADD_H_ */
