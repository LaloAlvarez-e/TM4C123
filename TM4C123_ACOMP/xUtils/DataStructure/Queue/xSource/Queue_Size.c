/**
 *
 * @file Queue_Size.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Size.h>
#include <xUtils/DataStructure/SingleLinkList/Intrinsics/List/xHeader/SingleLinkList_Size.h>

uint32_t Queue__u32GetSize(const Queue_TypeDef* const psQueue)
{
    return SingleLinkList__u32GetSize((const SingleLinkList_TypeDef*) psQueue);
}

Queue_nSTATUS Queue__enIsEmpty(const Queue_TypeDef* const psQueue)
{
    Queue_nSTATUS enStatus = Queue_enSTATUS_ERROR;
    uint32_t u32SizeReg = 0UL;
    u32SizeReg = SingleLinkList__u32GetSize((const SingleLinkList_TypeDef*) psQueue);

    if(u32SizeReg == 0UL)
    {
        enStatus = Queue_enSTATUS_OK;
    }

    return enStatus;
}


