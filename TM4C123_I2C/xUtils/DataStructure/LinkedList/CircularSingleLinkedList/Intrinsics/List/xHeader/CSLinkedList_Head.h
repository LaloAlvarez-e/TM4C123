/**
 *
 * @file CSLinkedList_Head.h
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
#ifndef XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARSLINKEDLIST_HEAD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARSLINKEDLIST_HEAD_H_

#include <xUtils/DataStructure/LinkedList/CircularSingleLinkedList/Intrinsics/xHeader/CSLinkedList_Struct.h>

CSLinkedListElement_TypeDef* CSLinkedList__psGetHead(const CSLinkedList_TypeDef*  const psList);
void CSLinkedList__vSetHead(CSLinkedList_TypeDef* psList, CSLinkedListElement_TypeDef* psHeadArg);
CSLinkedList_nSTATUS CSLinkedList__enIsHead(const CSLinkedList_TypeDef* const psList, const CSLinkedListElement_TypeDef* const psElement);






#endif /* XUTILS_DATASTRUCTURE_CIRCULARSINGLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARSLINKEDLIST_HEAD_H_ */
