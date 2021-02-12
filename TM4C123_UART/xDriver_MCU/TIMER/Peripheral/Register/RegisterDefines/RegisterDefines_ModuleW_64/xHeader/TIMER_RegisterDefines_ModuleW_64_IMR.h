/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_IMR.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_IMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/


/*----------*/
#define GPWTM_TW_GPTMTnIMR_R_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_R_TnTOIM_BIT    (0UL)
#define GPWTM_TW_GPTMTnIMR_R_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_R_TnTOIM_EN    ((uint32_t) 0x00000001UL)

#define GPWTM_TW_GPTMTnIMR_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_TnTOIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnIMR_R_CnMIM_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_TW_GPTMTnIMR_R_CnMIM_BIT    (1UL)
#define GPWTM_TW_GPTMTnIMR_R_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_R_CnMIM_EN    ((uint32_t) 0x00000002UL)

#define GPWTM_TW_GPTMTnIMR_CnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_CnMIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnIMR_R_CnEIM_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_TW_GPTMTnIMR_R_CnEIM_BIT    (2UL)
#define GPWTM_TW_GPTMTnIMR_R_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_R_CnEIM_EN    ((uint32_t) 0x00000004UL)

#define GPWTM_TW_GPTMTnIMR_CnEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_CnEIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnIMR_R_RTCIM_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_TW_GPTMTnIMR_R_RTCIM_BIT    (3UL)
#define GPWTM_TW_GPTMTnIMR_R_RTCIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_R_RTCIM_EN    ((uint32_t) 0x00000008UL)

#define GPWTM_TW_GPTMTnIMR_RTCIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_RTCIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_RTCIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnIMR_R_TnMIM_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_TW_GPTMTnIMR_R_TnMIM_BIT    (4UL)
#define GPWTM_TW_GPTMTnIMR_R_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_R_TnMIM_EN    ((uint32_t) 0x00000010UL)

#define GPWTM_TW_GPTMTnIMR_TnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_TnMIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnIMR_R_WUEIM_MASK    ((uint32_t) 0x00010000UL)
#define GPWTM_TW_GPTMTnIMR_R_WUEIM_BIT    (16UL)
#define GPWTM_TW_GPTMTnIMR_R_WUEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_R_WUEIM_EN    ((uint32_t) 0x00010000UL)

#define GPWTM_TW_GPTMTnIMR_WUEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TW_GPTMTnIMR_WUEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TW_GPTMTnIMR_WUEIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_IMR_H_ */