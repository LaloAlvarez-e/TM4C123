/**
 *
 * @file NVIC_RegisterDefines_IPR7.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR7_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR7_H_

/********************************************************************************************/
/************************************* IPR7 ***********************************************/
/******************************************************************************************/

/*----------*/
#define NVIC_IPR7_R_NVIC_SYSCTL_MASK      ((uint32_t)0x000000E0u)
#define NVIC_IPR7_R_NVIC_SYSCTL_BIT       (5u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP0       ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP1       ((uint32_t)0x00000020u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP2       ((uint32_t)0x00000040u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP3       ((uint32_t)0x00000060u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP4       ((uint32_t)0x00000080u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP5       ((uint32_t)0x000000A0u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP6       ((uint32_t)0x000000C0u)
#define NVIC_IPR7_R_NVIC_SYSCTL_IP7       ((uint32_t)0x000000E0u)

#define NVIC_IPR7_NVIC_SYSCTL_MASK        ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_SYSCTL_IP0         ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_SYSCTL_IP1         ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_SYSCTL_IP2         ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_SYSCTL_IP3         ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_SYSCTL_IP4         ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_SYSCTL_IP5         ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_SYSCTL_IP6         ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_SYSCTL_IP7         ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_FLASH_MASK  ((uint32_t)0x0000E000u)
#define NVIC_IPR7_R_NVIC_FLASH_BIT   (13u)
#define NVIC_IPR7_R_NVIC_FLASH_IP0   ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP1   ((uint32_t)0x00002000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP2   ((uint32_t)0x00004000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP3   ((uint32_t)0x00006000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP4   ((uint32_t)0x00008000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP5   ((uint32_t)0x0000A000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP6   ((uint32_t)0x0000C000u)
#define NVIC_IPR7_R_NVIC_FLASH_IP7   ((uint32_t)0x0000E000u)

#define NVIC_IPR7_NVIC_FLASH_MASK    ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_FLASH_IP0     ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_FLASH_IP1     ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_FLASH_IP2     ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_FLASH_IP3     ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_FLASH_IP4     ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_FLASH_IP5     ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_FLASH_IP6     ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_FLASH_IP7     ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_GPIOF_MASK   ((uint32_t)0x00E00000u)
#define NVIC_IPR7_R_NVIC_GPIOF_BIT    (21u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP1    ((uint32_t)0x00200000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP2    ((uint32_t)0x00400000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP3    ((uint32_t)0x00600000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP4    ((uint32_t)0x00800000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP5    ((uint32_t)0x00A00000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP6    ((uint32_t)0x00C00000u)
#define NVIC_IPR7_R_NVIC_GPIOF_IP7    ((uint32_t)0x00E00000u)

#define NVIC_IPR7_NVIC_GPIOF_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_GPIOF_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_GPIOF_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_GPIOF_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_GPIOF_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_GPIOF_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_GPIOF_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_GPIOF_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_GPIOF_IP7      ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define NVIC_IPR7_R_NVIC_RES47_MASK   ((uint32_t)0xE0000000u)
#define NVIC_IPR7_R_NVIC_RES47_BIT    (29u)
#define NVIC_IPR7_R_NVIC_RES47_IP0    ((uint32_t)0x00000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP1    ((uint32_t)0x20000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP2    ((uint32_t)0x40000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP3    ((uint32_t)0x60000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP4    ((uint32_t)0x80000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP5    ((uint32_t)0xA0000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP6    ((uint32_t)0xC0000000u)
#define NVIC_IPR7_R_NVIC_RES47_IP7    ((uint32_t)0xE0000000u)

#define NVIC_IPR7_NVIC_RES47_MASK     ((uint32_t)0x00000007u)
#define NVIC_IPR7_NVIC_RES47_IP0      ((uint32_t)0x00000000u)
#define NVIC_IPR7_NVIC_RES47_IP1      ((uint32_t)0x00000001u)
#define NVIC_IPR7_NVIC_RES47_IP2      ((uint32_t)0x00000002u)
#define NVIC_IPR7_NVIC_RES47_IP3      ((uint32_t)0x00000003u)
#define NVIC_IPR7_NVIC_RES47_IP4      ((uint32_t)0x00000004u)
#define NVIC_IPR7_NVIC_RES47_IP5      ((uint32_t)0x00000005u)
#define NVIC_IPR7_NVIC_RES47_IP6      ((uint32_t)0x00000006u)
#define NVIC_IPR7_NVIC_RES47_IP7      ((uint32_t)0x00000007u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_IPR_NVIC_REGISTERDEFINES_IPR7_H_ */
