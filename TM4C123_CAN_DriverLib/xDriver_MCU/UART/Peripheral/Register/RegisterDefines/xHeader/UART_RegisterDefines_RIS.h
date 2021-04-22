/**
 *
 * @file UART_RegisterDefines_RIS.h
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RIS_H_
#define XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 11 RIS *********************************************
******************************************************************************************/

/*--------*/
#define UART_RIS_R_CTSRIS_MASK    ((uint32_t) 0x00000002UL)
#define UART_RIS_R_CTSRIS_BIT    ((uint32_t) 1UL)
#define UART_RIS_R_CTSRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_CTSRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define UART_RIS_CTSRIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_CTSRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_CTSRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_RXRIS_MASK    ((uint32_t) 0x00000010UL)
#define UART_RIS_R_RXRIS_BIT    ((uint32_t) 4UL)
#define UART_RIS_R_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_RXRIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define UART_RIS_RXRIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_RXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_RXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_TXRIS_MASK    ((uint32_t) 0x00000020UL)
#define UART_RIS_R_TXRIS_BIT    ((uint32_t) 5UL)
#define UART_RIS_R_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_TXRIS_ACTIVE    ((uint32_t) 0x00000020UL)

#define UART_RIS_TXRIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_TXRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_TXRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_RTRIS_MASK    ((uint32_t) 0x00000040UL)
#define UART_RIS_R_RTRIS_BIT    ((uint32_t) 6UL)
#define UART_RIS_R_RTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_RTRIS_ACTIVE    ((uint32_t) 0x00000040UL)

#define UART_RIS_RTRIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_RTRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_RTRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_FERIS_MASK    ((uint32_t) 0x00000080UL)
#define UART_RIS_R_FERIS_BIT    ((uint32_t) 7UL)
#define UART_RIS_R_FERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_FERIS_ACTIVE    ((uint32_t) 0x00000080UL)

#define UART_RIS_FERIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_FERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_FERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_PERIS_MASK    ((uint32_t) 0x00000100UL)
#define UART_RIS_R_PERIS_BIT    ((uint32_t) 8UL)
#define UART_RIS_R_PERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_PERIS_ACTIVE    ((uint32_t) 0x00000100UL)

#define UART_RIS_PERIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_PERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_PERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_BERIS_MASK    ((uint32_t) 0x00000200UL)
#define UART_RIS_R_BERIS_BIT    ((uint32_t) 9UL)
#define UART_RIS_R_BERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_BERIS_ACTIVE    ((uint32_t) 0x00000200UL)

#define UART_RIS_BERIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_BERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_BERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_OERIS_MASK    ((uint32_t) 0x00000400UL)
#define UART_RIS_R_OERIS_BIT    ((uint32_t) 10UL)
#define UART_RIS_R_OERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_OERIS_ACTIVE    ((uint32_t) 0x00000400UL)

#define UART_RIS_OERIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_OERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_OERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define UART_RIS_R_BIT9RIS_MASK    ((uint32_t) 0x00008000UL)
#define UART_RIS_R_BIT9RIS_BIT    ((uint32_t) 12UL)
#define UART_RIS_R_BIT9RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_R_BIT9RIS_ACTIVE    ((uint32_t) 0x00008000UL)

#define UART_RIS_BIT9RIS_MASK    ((uint32_t) 0x00000001UL)
#define UART_RIS_BIT9RIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define UART_RIS_BIT9RIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_UART_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_UART_REGISTERDEFINES_RIS_H_ */
