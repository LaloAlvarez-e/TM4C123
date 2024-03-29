/**
 *
 * @file SCB_InterruptMemoryFault.c
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Core/SCB/Driver/InterruptRoutine/xHeader/SCB_InterruptMemoryFault.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/SCB/Peripheral/SCB_Peripheral.h>

uint32_t SCB_MemoryFault_pu32Context[8UL] = {0UL};

void MemoryFault__vIRQVectorHandler(void)
{
    uint8_t u8MemFault = 0U;
    uint8_t u8InvalidFault = 0U;

    __asm(
    " MRS R0, MSP\n"
#if defined (__TI_ARM__ )
    " movw R2, SCB_MemoryFault_pu32Context\n"
    " movt R2, SCB_MemoryFault_pu32Context\n"
#elif defined (__GNUC__ )
    " ldr R2, = SCB_MemoryFault_pu32Context\n"
#endif
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"/*SCB_MemoryFault_pu32Context[0] R0*/
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"/*SCB_MemoryFault_pu32Context[1] R1*/
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"/*SCB_MemoryFault_pu32Context[2] R2*/
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"/*SCB_MemoryFault_pu32Context[3] R3*/
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"/*SCB_MemoryFault_pu32Context[4] R12*/
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"/*SCB_MemoryFault_pu32Context[5] LR*/
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"/*SCB_MemoryFault_pu32Context[6] PC*/
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");/*SCB_MemoryFault_pu32Context[7] PSR*/

    u8MemFault = SCB_MCFSR_R;
    u8InvalidFault = u8MemFault;
    u8InvalidFault &= (uint8_t) SCB_enMCFSR_MMARVALID;

    if((uint8_t) 0U != u8InvalidFault)
    {
        u8MemFault &= ~(uint32_t) SCB_enMCFSR_MMARVALID;
    }

    switch(u8MemFault)
    {
        case SCB_enMCFSR_MLSPERR:
        case SCB_enMCFSR_MSTKERR:
        case SCB_enMCFSR_MUNSTKERR:
        case SCB_enMCFSR_DACCVIOL:
        case SCB_enMCFSR_IACCVIOL:
        default:
            break;
    }
    while(1UL){}
}
