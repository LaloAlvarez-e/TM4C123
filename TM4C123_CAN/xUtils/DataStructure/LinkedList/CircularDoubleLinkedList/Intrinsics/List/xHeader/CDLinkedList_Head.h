/**
 *
 * @file CDLinkedList_Head.h
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
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARDLINKEDLIST_HEAD_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARDLINKEDLIST_HEAD_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedListElement_TypeDef* CDLinkedList__psGetHead(const CDLinkedList_TypeDef*  const psList);
void CDLinkedList__vSetHead(CDLinkedList_TypeDef* psList, CDLinkedListElement_TypeDef* psHeadArg);
CDLinkedList_nSTATUS CDLinkedList__enIsHead(const CDLinkedList_TypeDef* const psList, const CDLinkedListElement_TypeDef* const psElement);





#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARDLINKEDLIST_HEAD_H_ */
