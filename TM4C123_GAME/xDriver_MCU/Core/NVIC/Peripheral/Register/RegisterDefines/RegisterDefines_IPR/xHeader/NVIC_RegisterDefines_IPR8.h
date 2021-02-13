/**
 *
 * @file NVIC_RegisterDefines_IPR8.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR8_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR8_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* IPR8 ***********************************************/
/******************************************************************************************/

/*----------*/
#define NVIC_IPR8_R_NVIC_RES48_MASK    ((uint32_t) 0x000000E0UL)
#define NVIC_IPR8_R_NVIC_RES48_BIT    (5UL)
#define NVIC_IPR8_R_NVIC_RES48_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_R_NVIC_RES48_IP1    ((uint32_t) 0x00000020UL)
#define NVIC_IPR8_R_NVIC_RES48_IP2    ((uint32_t) 0x00000040UL)
#define NVIC_IPR8_R_NVIC_RES48_IP3    ((uint32_t) 0x00000060UL)
#define NVIC_IPR8_R_NVIC_RES48_IP4    ((uint32_t) 0x00000080UL)
#define NVIC_IPR8_R_NVIC_RES48_IP5    ((uint32_t) 0x000000A0UL)
#define NVIC_IPR8_R_NVIC_RES48_IP6    ((uint32_t) 0x000000C0UL)
#define NVIC_IPR8_R_NVIC_RES48_IP7    ((uint32_t) 0x000000E0UL)

#define NVIC_IPR8_NVIC_RES48_MASK    ((uint32_t) 0x00000007UL)
#define NVIC_IPR8_NVIC_RES48_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_NVIC_RES48_IP1    ((uint32_t) 0x00000001UL)
#define NVIC_IPR8_NVIC_RES48_IP2    ((uint32_t) 0x00000002UL)
#define NVIC_IPR8_NVIC_RES48_IP3    ((uint32_t) 0x00000003UL)
#define NVIC_IPR8_NVIC_RES48_IP4    ((uint32_t) 0x00000004UL)
#define NVIC_IPR8_NVIC_RES48_IP5    ((uint32_t) 0x00000005UL)
#define NVIC_IPR8_NVIC_RES48_IP6    ((uint32_t) 0x00000006UL)
#define NVIC_IPR8_NVIC_RES48_IP7    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define NVIC_IPR8_R_NVIC_UART2_MASK    ((uint32_t) 0x0000E000UL)
#define NVIC_IPR8_R_NVIC_UART2_BIT    (13UL)
#define NVIC_IPR8_R_NVIC_UART2_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP1    ((uint32_t) 0x00002000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP2    ((uint32_t) 0x00004000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP3    ((uint32_t) 0x00006000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP4    ((uint32_t) 0x00008000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP5    ((uint32_t) 0x0000A000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP6    ((uint32_t) 0x0000C000UL)
#define NVIC_IPR8_R_NVIC_UART2_IP7    ((uint32_t) 0x0000E000UL)

#define NVIC_IPR8_NVIC_UART2_MASK    ((uint32_t) 0x00000007UL)
#define NVIC_IPR8_NVIC_UART2_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_NVIC_UART2_IP1    ((uint32_t) 0x00000001UL)
#define NVIC_IPR8_NVIC_UART2_IP2    ((uint32_t) 0x00000002UL)
#define NVIC_IPR8_NVIC_UART2_IP3    ((uint32_t) 0x00000003UL)
#define NVIC_IPR8_NVIC_UART2_IP4    ((uint32_t) 0x00000004UL)
#define NVIC_IPR8_NVIC_UART2_IP5    ((uint32_t) 0x00000005UL)
#define NVIC_IPR8_NVIC_UART2_IP6    ((uint32_t) 0x00000006UL)
#define NVIC_IPR8_NVIC_UART2_IP7    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define NVIC_IPR8_R_NVIC_SSI1_MASK    ((uint32_t) 0x00E00000UL)
#define NVIC_IPR8_R_NVIC_SSI1_BIT    (21UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP1    ((uint32_t) 0x00200000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP2    ((uint32_t) 0x00400000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP3    ((uint32_t) 0x00600000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP4    ((uint32_t) 0x00800000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP5    ((uint32_t) 0x00A00000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP6    ((uint32_t) 0x00C00000UL)
#define NVIC_IPR8_R_NVIC_SSI1_IP7    ((uint32_t) 0x00E00000UL)

#define NVIC_IPR8_NVIC_SSI1_MASK    ((uint32_t) 0x00000007UL)
#define NVIC_IPR8_NVIC_SSI1_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_NVIC_SSI1_IP1    ((uint32_t) 0x00000001UL)
#define NVIC_IPR8_NVIC_SSI1_IP2    ((uint32_t) 0x00000002UL)
#define NVIC_IPR8_NVIC_SSI1_IP3    ((uint32_t) 0x00000003UL)
#define NVIC_IPR8_NVIC_SSI1_IP4    ((uint32_t) 0x00000004UL)
#define NVIC_IPR8_NVIC_SSI1_IP5    ((uint32_t) 0x00000005UL)
#define NVIC_IPR8_NVIC_SSI1_IP6    ((uint32_t) 0x00000006UL)
#define NVIC_IPR8_NVIC_SSI1_IP7    ((uint32_t) 0x00000007UL)
/*----------*/

/*----------*/
#define NVIC_IPR8_R_NVIC_TIMER3A_MASK    ((uint32_t) 0xE0000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_BIT    (29UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP1    ((uint32_t) 0x20000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP2    ((uint32_t) 0x40000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP3    ((uint32_t) 0x60000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP4    ((uint32_t) 0x80000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP5    ((uint32_t) 0xA0000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP6    ((uint32_t) 0xC0000000UL)
#define NVIC_IPR8_R_NVIC_TIMER3A_IP7    ((uint32_t) 0xE0000000UL)

#define NVIC_IPR8_NVIC_TIMER3A_MASK    ((uint32_t) 0x00000007UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP0    ((uint32_t) 0x00000000UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP1    ((uint32_t) 0x00000001UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP2    ((uint32_t) 0x00000002UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP3    ((uint32_t) 0x00000003UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP4    ((uint32_t) 0x00000004UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP5    ((uint32_t) 0x00000005UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP6    ((uint32_t) 0x00000006UL)
#define NVIC_IPR8_NVIC_TIMER3A_IP7    ((uint32_t) 0x00000007UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR8_H_ */
