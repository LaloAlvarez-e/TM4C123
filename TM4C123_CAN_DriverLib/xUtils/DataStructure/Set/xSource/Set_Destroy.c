/**
 *
 * @file Set_Destroy.c
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
 * @verbatim 14 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/DataStructure/Set/xHeader/Set_Destroy.h>
#include <xUtils/DataStructure/LinkedList/SingleLinkedList/xHeader/SLinkedList_Destroy.h>

void Set__vDestroy(Set_TypeDef* pstSet)
{
    SLinkedList__vDestroy( (SLinkedList_TypeDef*) pstSet);
}


