/**
 *
 * @file SYSCTL_Clock_Utils.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_APP_SYSCTL_CLOCK_SYSCTL_CLOCK_UTILS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_APP_SYSCTL_CLOCK_SYSCTL_CLOCK_UTILS_H_

#include <stdint.h>

uint32_t SYSCTL__u32GetOSCSourceFreq_Div(uint32_t u32Frequency);
uint32_t SYSCTL__u32GetFreqXtal(uint32_t u32Index);



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_APP_SYSCTL_CLOCK_SYSCTL_CLOCK_UTILS_H_ */