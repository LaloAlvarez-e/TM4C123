/**
 *
 * @file UART_IrDA.c
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
 * @verbatim 6 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/xHeader/UART_IrDA.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Primitives/UART_Primitives.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>

void UART__vSetIrDALowPowerDivider(UART_nMODULE enModule, uint32_t u32Divider)
{
    UART__vWriteRegister(enModule, UART_UARTILPR_OFFSET, u32Divider, UART_UARTILPR_ILPDVSR_MASK, UART_UARTILPR_R_ILPDVSR_BIT);
}

uint32_t UART__u32GetIrDALowPowerDivider(UART_nMODULE enModule)
{
    uint32_t u32Reg = 0xFFFFFFFFUL;
    UART__enReadRegister(enModule, UART_UARTDR_OFFSET, &u32Reg, UART_UARTILPR_ILPDVSR_MASK, UART_UARTILPR_R_ILPDVSR_BIT);
    return u32Reg;
}

void UART__vEnIrDALowPowerFrequency(UART_nMODULE enModule)
{
    float32_t fDivider = 0.0f;
    uint32_t u32Divider = SYSCTL__u32GetClock();
    fDivider = (float32_t) u32Divider;
    fDivider /= 1843200.0f; /*IrDA Low Power frequency*/
    fDivider += 0.5f;
    u32Divider = (uint32_t) fDivider;
    UART__vSetIrDALowPowerDivider(enModule, u32Divider);
}

uint32_t UART__u32GetIrDALowPowerFrequency(UART_nMODULE enModule)
{
    float32_t fDivider = 0.0f;
    uint32_t u32Result = 0UL;
    uint32_t u32sysClock= 0UL;
    uint32_t u32Divider = 0UL;

    u32sysClock= SYSCTL__u32GetClock();
    u32Divider = UART__u32GetIrDALowPowerDivider(enModule);

    fDivider = (float32_t) u32sysClock;
    fDivider /= (float32_t) u32Divider;
    u32Result = (uint32_t) fDivider;
    return u32Result;
}
