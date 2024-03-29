/**
 *
 * @file SCB_InterruptHardFault.c
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


#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_InterruptRoutine/SCB_InterruptHardFault.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Peripheral/SCB_Peripheral.h>

uint32_t SCB_HardFault_pu32Context[8];

void HardFault__vISR(void)
{
    __asm(
    " MRS R0, MSP\n"
#if defined ( __TI_ARM__ )
    " movw R2, SCB_HardFault_pu32Context\n"
    " movt R2, SCB_HardFault_pu32Context\n"
#elif defined ( __GNUC__ )
    " ldr R2, =SCB_HardFault_pu32Context\n"
#endif
    " ldr R1, [R0, #0X0]\n"
    " str R1, [R2, #0x0]\n"/*SCB_HardFault_pu32Context[0] R0*/
    " ldr R1, [R0, #0x4]\n"
    " str R1, [R2, #0x4]\n"/*SCB_HardFault_pu32Context[1] R1*/
    " ldr R1, [R0, #0x8]\n"
    " str R1, [R2, #0x8]\n"/*SCB_HardFault_pu32Context[2] R2*/
    " ldr R1, [R0, #0xC]\n"
    " str R1, [R2, #0xC]\n"/*SCB_HardFault_pu32Context[3] R3*/
    " ldr R1, [R0, #0x10]\n"
    " str R1, [R2, #0x10]\n"/*SCB_HardFault_pu32Context[4] R12*/
    " ldr R1, [R0, #0x14]\n"
    " str R1, [R2, #0x14]\n"/*SCB_HardFault_pu32Context[5] LR*/
    " ldr R1, [R0, #0x18]\n"
    " str R1, [R2, #0x18]\n"/*SCB_HardFault_pu32Context[6] PC*/
    " ldr R1, [R0, #0x1C]\n"
    " str R1, [R2, #0x1C]\n");/*SCB_HardFault_pu32Context[7] PSR*/
    while(1u){}
}


