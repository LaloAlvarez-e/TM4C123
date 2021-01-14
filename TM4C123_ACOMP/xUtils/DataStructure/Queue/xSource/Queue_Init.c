/**
 *
 * @file Queue_Init.c
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
#include <xUtils/DataStructure/Queue/xHeader/Queue_Init.h>
#include <xUtils/DataStructure/SingleLinkList/xHeader/SingleLinkList_Init.h>

Queue_TypeDef* Queue__psInit( void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    return (Queue_TypeDef*)SingleLinkList__psInit(  pfvDestroyElementDataArg);
}

Queue_nSTATUS Queue__enInit( Queue_TypeDef* psQueue ,void  (*pfvDestroyElementDataArg)(void *DataContainer))
{
    return (Queue_nSTATUS) SingleLinkList__enInit( (SingleLinkList_TypeDef*) psQueue ,pfvDestroyElementDataArg);
}



