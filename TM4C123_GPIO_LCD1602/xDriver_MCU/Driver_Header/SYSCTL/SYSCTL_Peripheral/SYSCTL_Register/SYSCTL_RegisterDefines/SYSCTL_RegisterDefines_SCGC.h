/**
 *
 * @file SYSCTL_RegisterDefines_SCGC.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SCGC_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SCGC_H_

#include <stdint.h>

/******************************************************************************************
************************************74 SCGCWD *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCWD_R_WDT0_MASK         ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWD_R_WDT0_BIT          (0u)
#define SYSCTL_SCGCWD_R_WDT0_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_R_WDT0_EN      ((uint32_t)0x00000001u)

#define SYSCTL_SCGCWD_WDT0_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWD_WDT0_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_WDT0_EN        ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWD_R_WDT1_MASK         ((uint32_t)0x00000002u)
#define SYSCTL_SCGCWD_R_WDT1_BIT          (1u)
#define SYSCTL_SCGCWD_R_WDT1_DIS    ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_R_WDT1_EN      ((uint32_t)0x00000002u)

#define SYSCTL_SCGCWD_WDT1_MASK           ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWD_WDT1_DIS      ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWD_WDT1_EN        ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************75 SCGCTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_R_TIMER0_BIT         (0u)
#define SYSCTL_SCGCTIMER_R_TIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCTIMER_TIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCTIMER_R_TIMER1_BIT         (1u)
#define SYSCTL_SCGCTIMER_R_TIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCTIMER_TIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCTIMER_R_TIMER2_BIT         (2u)
#define SYSCTL_SCGCTIMER_R_TIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCTIMER_TIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCTIMER_R_TIMER3_BIT         (3u)
#define SYSCTL_SCGCTIMER_R_TIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCTIMER_TIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCTIMER_R_TIMER4_BIT         (4u)
#define SYSCTL_SCGCTIMER_R_TIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCTIMER_TIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCTIMER_R_TIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCTIMER_R_TIMER5_BIT         (5u)
#define SYSCTL_SCGCTIMER_R_TIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_R_TIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCTIMER_TIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCTIMER_TIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCTIMER_TIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************76 SCGCGPIO *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_R_GPIOA_BIT         (0u)
#define SYSCTL_SCGCGPIO_R_GPIOA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCGPIO_GPIOA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOA_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOB_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCGPIO_R_GPIOB_BIT         (1u)
#define SYSCTL_SCGCGPIO_R_GPIOB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOB_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCGPIO_GPIOB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOB_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOC_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCGPIO_R_GPIOC_BIT         (2u)
#define SYSCTL_SCGCGPIO_R_GPIOC_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOC_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCGPIO_GPIOC_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOC_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOC_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOD_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCGPIO_R_GPIOD_BIT         (3u)
#define SYSCTL_SCGCGPIO_R_GPIOD_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOD_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCGPIO_GPIOD_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOD_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOD_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOE_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCGPIO_R_GPIOE_BIT         (4u)
#define SYSCTL_SCGCGPIO_R_GPIOE_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOE_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCGPIO_GPIOE_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOE_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOE_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOF_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCGPIO_R_GPIOF_BIT         (5u)
#define SYSCTL_SCGCGPIO_R_GPIOF_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOF_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCGPIO_GPIOF_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOF_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOF_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_SCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOG_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SCGCGPIO_R_GPIOG_BIT         (6u)
#define SYSCTL_SCGCGPIO_R_GPIOG_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOG_EN     ((uint32_t)0x00000040u)

#define SYSCTL_SCGCGPIO_GPIOG_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOG_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOG_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOH_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SCGCGPIO_R_GPIOH_BIT         (7u)
#define SYSCTL_SCGCGPIO_R_GPIOH_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOH_EN     ((uint32_t)0x00000080u)

#define SYSCTL_SCGCGPIO_GPIOH_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOH_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOH_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOJ_MASK        ((uint32_t)0x00000100u)
#define SYSCTL_SCGCGPIO_R_GPIOJ_BIT         (8u)
#define SYSCTL_SCGCGPIO_R_GPIOJ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOJ_EN     ((uint32_t)0x00000100u)

#define SYSCTL_SCGCGPIO_GPIOJ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOJ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOJ_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOK_MASK        ((uint32_t)0x00000200u)
#define SYSCTL_SCGCGPIO_R_GPIOK_BIT         (9u)
#define SYSCTL_SCGCGPIO_R_GPIOK_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOK_EN     ((uint32_t)0x00000200u)

#define SYSCTL_SCGCGPIO_GPIOK_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOK_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOK_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOL_MASK        ((uint32_t)0x00000400u)
#define SYSCTL_SCGCGPIO_R_GPIOL_BIT         (10u)
#define SYSCTL_SCGCGPIO_R_GPIOL_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOL_EN     ((uint32_t)0x00000400u)

#define SYSCTL_SCGCGPIO_GPIOL_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOL_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOL_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOM_MASK        ((uint32_t)0x00000800u)
#define SYSCTL_SCGCGPIO_R_GPIOM_BIT         (11u)
#define SYSCTL_SCGCGPIO_R_GPIOM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOM_EN     ((uint32_t)0x00000800u)

#define SYSCTL_SCGCGPIO_GPIOM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOM_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPION_MASK        ((uint32_t)0x00001000u)
#define SYSCTL_SCGCGPIO_R_GPION_BIT         (12u)
#define SYSCTL_SCGCGPIO_R_GPION_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPION_EN     ((uint32_t)0x00001000u)

#define SYSCTL_SCGCGPIO_GPION_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPION_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPION_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOP_MASK        ((uint32_t)0x00002000u)
#define SYSCTL_SCGCGPIO_R_GPIOP_BIT         (13u)
#define SYSCTL_SCGCGPIO_R_GPIOP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOP_EN     ((uint32_t)0x00002000u)

#define SYSCTL_SCGCGPIO_GPIOP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOP_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCGPIO_R_GPIOQ_MASK        ((uint32_t)0x00004000u)
#define SYSCTL_SCGCGPIO_R_GPIOQ_BIT         (14u)
#define SYSCTL_SCGCGPIO_R_GPIOQ_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_R_GPIOQ_EN     ((uint32_t)0x00004000u)

#define SYSCTL_SCGCGPIO_GPIOQ_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCGPIO_GPIOQ_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCGPIO_GPIOQ_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************77 SCGCDMA *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCDMA_R_UDMA_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCDMA_R_UDMA_BIT         (0u)
#define SYSCTL_SCGCDMA_R_UDMA_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCDMA_R_UDMA_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCDMA_UDMA_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCDMA_UDMA_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCDMA_UDMA_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************78 SCGCHIB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCHIB_R_HIB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCHIB_R_HIB_BIT         (0u)
#define SYSCTL_SCGCHIB_R_HIB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCHIB_R_HIB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCHIB_HIB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCHIB_HIB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCHIB_HIB_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************79 SCGCUART *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCUART_R_UART0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_R_UART0_BIT         (0u)
#define SYSCTL_SCGCUART_R_UART0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCUART_UART0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCUART_R_UART1_BIT         (1u)
#define SYSCTL_SCGCUART_R_UART1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCUART_UART1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCUART_R_UART2_BIT         (2u)
#define SYSCTL_SCGCUART_R_UART2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCUART_UART2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCUART_R_UART3_BIT         (3u)
#define SYSCTL_SCGCUART_R_UART3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCUART_UART3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCUART_R_UART4_BIT         (4u)
#define SYSCTL_SCGCUART_R_UART4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCUART_UART4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCUART_R_UART5_BIT         (5u)
#define SYSCTL_SCGCUART_R_UART5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCUART_UART5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART5_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART6_MASK        ((uint32_t)0x00000040u)
#define SYSCTL_SCGCUART_R_UART6_BIT         (6u)
#define SYSCTL_SCGCUART_R_UART6_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART6_EN     ((uint32_t)0x00000040u)

#define SYSCTL_SCGCUART_UART6_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART6_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART6_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCUART_R_UART7_MASK        ((uint32_t)0x00000080u)
#define SYSCTL_SCGCUART_R_UART7_BIT         (7u)
#define SYSCTL_SCGCUART_R_UART7_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_R_UART7_EN     ((uint32_t)0x00000080u)

#define SYSCTL_SCGCUART_UART7_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUART_UART7_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUART_UART7_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************80 SCGCSSI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCSSI_R_SSI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_R_SSI0_BIT         (0u)
#define SYSCTL_SCGCSSI_R_SSI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCSSI_SSI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCSSI_R_SSI1_BIT         (1u)
#define SYSCTL_SCGCSSI_R_SSI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCSSI_SSI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCSSI_R_SSI2_BIT         (2u)
#define SYSCTL_SCGCSSI_R_SSI2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCSSI_SSI2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCSSI_R_SSI3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCSSI_R_SSI3_BIT         (3u)
#define SYSCTL_SCGCSSI_R_SSI3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_R_SSI3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCSSI_SSI3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCSSI_SSI3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCSSI_SSI3_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************81 SCGCI2C *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCI2C_R_I2C0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_R_I2C0_BIT         (0u)
#define SYSCTL_SCGCI2C_R_I2C0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCI2C_I2C0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCI2C_R_I2C1_BIT         (1u)
#define SYSCTL_SCGCI2C_R_I2C1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCI2C_I2C1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCI2C_R_I2C2_BIT         (2u)
#define SYSCTL_SCGCI2C_R_I2C2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCI2C_I2C2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCI2C_R_I2C3_BIT         (3u)
#define SYSCTL_SCGCI2C_R_I2C3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCI2C_I2C3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCI2C_R_I2C4_BIT         (4u)
#define SYSCTL_SCGCI2C_R_I2C4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCI2C_I2C4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCI2C_R_I2C5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCI2C_R_I2C5_BIT         (5u)
#define SYSCTL_SCGCI2C_R_I2C5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_R_I2C5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCI2C_I2C5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCI2C_I2C5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCI2C_I2C5_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************82 SCGCUSB *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCUSB_R_USB_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUSB_R_USB_BIT         (0u)
#define SYSCTL_SCGCUSB_R_USB_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUSB_R_USB_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCUSB_USB_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCUSB_USB_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCUSB_USB_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************83 SCGCCAN *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCCAN_R_CAN0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCCAN_R_CAN0_BIT         (0u)
#define SYSCTL_SCGCCAN_R_CAN0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_R_CAN0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCCAN_CAN0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCCAN_CAN0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_CAN0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCCAN_R_CAN1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCCAN_R_CAN1_BIT         (1u)
#define SYSCTL_SCGCCAN_R_CAN1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_R_CAN1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCCAN_CAN1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCCAN_CAN1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCCAN_CAN1_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************84 SCGCADC *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCADC_R_ADC0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCADC_R_ADC0_BIT         (0u)
#define SYSCTL_SCGCADC_R_ADC0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_R_ADC0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCADC_ADC0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCADC_ADC0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_ADC0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCADC_R_ADC1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCADC_R_ADC1_BIT         (1u)
#define SYSCTL_SCGCADC_R_ADC1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_R_ADC1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCADC_ADC1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCADC_ADC1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCADC_ADC1_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************85 SCGCACMP *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCACMP_R_ACMP_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCACMP_R_ACMP_BIT         (0u)
#define SYSCTL_SCGCACMP_R_ACMP_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCACMP_R_ACMP_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCACMP_ACMP_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCACMP_ACMP_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCACMP_ACMP_EN       ((uint32_t)0x00000001u)
/*--------*/

/****************************************************************************************
************************************86 SCGCPWM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCPWM_R_PWM0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCPWM_R_PWM0_BIT         (0u)
#define SYSCTL_SCGCPWM_R_PWM0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_R_PWM0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCPWM_PWM0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCPWM_PWM0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_PWM0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCPWM_R_PWM1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCPWM_R_PWM1_BIT         (1u)
#define SYSCTL_SCGCPWM_R_PWM1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_R_PWM1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCPWM_PWM1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCPWM_PWM1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCPWM_PWM1_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************87 SCGCQEI *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCQEI_R_QEI0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCQEI_R_QEI0_BIT         (0u)
#define SYSCTL_SCGCQEI_R_QEI0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_R_QEI0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCQEI_QEI0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCQEI_QEI0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_QEI0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCQEI_R_QEI1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCQEI_R_QEI1_BIT         (1u)
#define SYSCTL_SCGCQEI_R_QEI1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_R_QEI1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCQEI_QEI1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCQEI_QEI1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCQEI_QEI1_EN       ((uint32_t)0x00000001u)
/*--------*/

/******************************************************************************************
************************************88 SCGCEEPROM *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCEEPROM_R_EEPROM_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCEEPROM_R_EEPROM_BIT         (0u)
#define SYSCTL_SCGCEEPROM_R_EEPROM_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCEEPROM_R_EEPROM_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCEEPROM_EEPROM_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCEEPROM_EEPROM_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCEEPROM_EEPROM_EN       ((uint32_t)0x00000001u)
/*--------*/

/**********************************************************************************
************************************89 SCGCWTIMER *********************************************
******************************************************************************************/
/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER0_MASK        ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_BIT         (0u)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER0_EN     ((uint32_t)0x00000001u)

#define SYSCTL_SCGCWTIMER_WTIMER0_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER0_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER0_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER1_MASK        ((uint32_t)0x00000002u)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_BIT         (1u)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER1_EN     ((uint32_t)0x00000002u)

#define SYSCTL_SCGCWTIMER_WTIMER1_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER1_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER1_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER2_MASK        ((uint32_t)0x00000004u)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_BIT         (2u)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER2_EN     ((uint32_t)0x00000004u)

#define SYSCTL_SCGCWTIMER_WTIMER2_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER2_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER2_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER3_MASK        ((uint32_t)0x00000008u)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_BIT         (3u)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER3_EN     ((uint32_t)0x00000008u)

#define SYSCTL_SCGCWTIMER_WTIMER3_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER3_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER3_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER4_MASK        ((uint32_t)0x00000010u)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_BIT         (4u)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER4_EN     ((uint32_t)0x00000010u)

#define SYSCTL_SCGCWTIMER_WTIMER4_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER4_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER4_EN       ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SYSCTL_SCGCWTIMER_R_WTIMER5_MASK        ((uint32_t)0x00000020u)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_BIT         (5u)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_DIS   ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_R_WTIMER5_EN     ((uint32_t)0x00000020u)

#define SYSCTL_SCGCWTIMER_WTIMER5_MASK          ((uint32_t)0x00000001u)
#define SYSCTL_SCGCWTIMER_WTIMER5_DIS     ((uint32_t)0x00000000u)
#define SYSCTL_SCGCWTIMER_WTIMER5_EN       ((uint32_t)0x00000001u)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_PERIPHERAL_SYSCTL_REGISTER_SYSCTL_REGISTERDEFINES_SYSCTL_REGISTERDEFINES_SCGC_H_ */
