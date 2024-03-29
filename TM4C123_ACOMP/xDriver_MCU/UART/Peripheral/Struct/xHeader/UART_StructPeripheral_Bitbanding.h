/**
 *
 * @file UART_StructPeripheral_Bitbanding.h
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
 * @verbatim 22 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 22 ene. 2021 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/UART/Peripheral/Struct/xHeader/UART_StructRegister_Bitbanding.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Enum.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t UARTDR [32UL];
        BITBANDING_UARTDR_TypeDef UARTDR_Bit;
    };
    union
    {
        volatile const uint32_t UARTRSR [32UL];
        volatile uint32_t UARTECR [32UL];
        BITBANDING_UARTRSR_TypeDef UARTRSR_Bit;
        BITBANDING_UARTECR_TypeDef UARTECR_Bit;
    };
    const uint32_t reserved [4UL * 32UL];
    union
    {
        volatile const uint32_t UARTFR [32UL];
        BITBANDING_UARTFR_TypeDef UARTFR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t UARTILPR [32UL];
        BITBANDING_UARTILPR_TypeDef UARTILPR_Bit;
    };
    union
    {
        volatile uint32_t UARTIBRD [32UL];
        BITBANDING_UARTIBRD_TypeDef UARTIBRD_Bit;
    };
    union
    {
        volatile uint32_t UARTFBRD [32UL];
        BITBANDING_UARTFBRD_TypeDef UARTFBRD_Bit;
    };
    union
    {
        volatile uint32_t UARTLCRH [32UL];
        BITBANDING_UARTLCRH_TypeDef UARTLCRH_Bit;
    };
    union
    {
        volatile uint32_t UARTCTL [32UL];
        BITBANDING_UARTCTL_TypeDef UARTCTL_Bit;
    };
    union
    {
        volatile uint32_t UARTIFLS [32UL];
        BITBANDING_UARTIFLS_TypeDef UARTIFLS_Bit;
    };
    union
    {
        volatile uint32_t UARTIM [32UL];
        BITBANDING_UARTIM_TypeDef UARTIM_Bit;
    };
    union
    {
        volatile const uint32_t UARTRIS [32UL];
        BITBANDING_UARTRIS_TypeDef UARTRIS_Bit;
    };
    union
    {
        volatile const uint32_t UARTMIS [32UL];
        BITBANDING_UARTMIS_TypeDef UARTMIS_Bit;
    };
    union
    {
        volatile uint32_t UARTICR [32UL];
        BITBANDING_UARTICR_TypeDef UARTICR_Bit;
    };
    union
    {
        volatile uint32_t UARTDMACTL [32UL];
        BITBANDING_UARTDMACTL_TypeDef UARTDMACTL_Bit;
    };
    const uint32_t reserved2 [22UL * 32UL];
    union
    {
        volatile uint32_t UART9BITADDR [32UL];
        BITBANDING_UART9BITADDR_TypeDef UART9BITADDR_Bit;
    };
    union
    {
        volatile uint32_t UART9BITAMASK [32UL];
        BITBANDING_UART9BITAMASK_TypeDef UART9BITAMASK_Bit;
    };
    const uint32_t reserved3 [965UL * 32UL];
    union
    {
        volatile const uint32_t UARTPP [32UL];
        BITBANDING_UARTPP_TypeDef UARTPP_Bit;
    };
    const uint32_t reserved4 [1UL * 32UL];
    union
    {
        volatile const uint32_t UARTCC [32UL];
        BITBANDING_UARTCC_TypeDef UARTCC_Bit;
    };
    const uint32_t reserved5 [1UL * 32UL];
    union
    {
        volatile const uint32_t UARTPeriphID4 [32UL];
        BITBANDING_UARTPeriphID4_TypeDef UARTPeriphID4_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID5 [32UL];
        BITBANDING_UARTPeriphID5_TypeDef UARTPeriphID5_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID6 [32UL];
        BITBANDING_UARTPeriphID6_TypeDef UARTPeriphID6_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID7 [32UL];
        BITBANDING_UARTPeriphID7_TypeDef UARTPeriphID7_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID0 [32UL];
        BITBANDING_UARTPeriphID0_TypeDef UARTPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID1 [32UL];
        BITBANDING_UARTPeriphID1_TypeDef UARTPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID2 [32UL];
        BITBANDING_UARTPeriphID2_TypeDef UARTPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t UARTPeriphID3 [32UL];
        BITBANDING_UARTPeriphID3_TypeDef UARTPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t UARTCellID0 [32UL];
        BITBANDING_UARTCellID0_TypeDef UARTCellID0_Bit;
    };
    union
    {
        volatile const uint32_t UARTCellID1 [32UL];
        BITBANDING_UARTCellID1_TypeDef UARTCellID1_Bit;
    };
    union
    {
        volatile const uint32_t UARTCellID2 [32UL];
        BITBANDING_UARTCellID2_TypeDef UARTCellID2_Bit;
    };
    union
    {
        volatile const uint32_t UARTCellID3 [32UL];
        BITBANDING_UARTCellID3_TypeDef UARTCellID3_Bit;
    };
} UART_BITBANDING_TypeDef;


typedef volatile struct
{
    UART_BITBANDING_TypeDef MODULE [(uint32_t) UART_enMODULE_MAX];
} UARTS_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_UART_PERIPHERAL_STRUCT_XHEADER_UART_STRUCTPERIPHERAL_BITBANDING_H_ */
