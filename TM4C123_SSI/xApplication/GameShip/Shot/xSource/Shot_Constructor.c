/**
 *
 * @file Shot_Constructor.c
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
 * @verbatim 12 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/GameShip/Shot/xHeader/Shot_Constructor.h>
#include <xUtils/DataStructure/LinkedList/DoubleLinkedList/DoubleLinkedList.h>
#include <stdlib.h>

Shot_TypeDef* Shot__psConstructor(uint32_t u32XPosArg, uint32_t u32YPosArg)
{
    Shot_TypeDef* ShotHandle = 0UL;

    #if defined (__TI_ARM__ )
    ShotHandle = (Shot_TypeDef*) memalign( (size_t) 4, (size_t) (sizeof(Shot_TypeDef) ));
    #elif defined (__GNUC__ )
    ShotHandle = (Shot_TypeDef*) malloc( (size_t) sizeof(Shot_TypeDef));
    #endif

    if(0UL != (uint32_t) ShotHandle)
    {
        ShotHandle->u32Xpos = u32XPosArg;
        ShotHandle->u32Ypos = u32YPosArg;
    }
    return ShotHandle;
}

void Shot__vDestructor(void* pvShotArg)
{
    Shot_TypeDef* psShotArg = (Shot_TypeDef*) pvShotArg;
    if(0UL != (uint32_t) psShotArg)
    {
        psShotArg->u32Xpos = 0UL;
        psShotArg->u32Ypos = 0UL;
        free(psShotArg);
        psShotArg = (Shot_TypeDef*) 0UL;
    }
}

DLinkedList_TypeDef* Shot__psInitList(void)
{
    DLinkedList_TypeDef* psShotDLinkedList = (DLinkedList_TypeDef*) 0UL;
    psShotDLinkedList = DLinkedList__psInit(&Shot__vDestructor);
    return psShotDLinkedList;
}

void Shot__vDestroyList(DLinkedList_TypeDef* psShotDLinkedListArg)
{
    DLinkedList__vDestroy(psShotDLinkedListArg);
}

DLinkedListElement_TypeDef* Shot__psAddElement(DLinkedList_TypeDef* psShotDLinkedListArg, uint32_t u32XPosArg, uint32_t u32YPosArg)
{
    DLinkedListElement_TypeDef* psNewShotElement = (DLinkedListElement_TypeDef*) 0UL;
    Shot_TypeDef* psNewShot = (Shot_TypeDef*) 0UL;
    psNewShot = Shot__psConstructor(u32XPosArg, u32YPosArg);
    if(0UL != (uint32_t) psNewShot)
    {
        psNewShotElement = DLinkedList__psAddEnd(psShotDLinkedListArg,  (void*) psNewShot);
    }
    return psNewShotElement;
}
