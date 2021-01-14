/**
 *
 * @file Queue_Dequeue.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Dequeue.h>
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Remove.h>

Queue_nSTATUS Queue__enDequeue(Queue_TypeDef* psQueue, void** pvData)
{
    return (Queue_nSTATUS ) SingleLinkList__enRemoveBegin((SingleLinkList_TypeDef*) psQueue, pvData);
}



