/**
 *
 * @file TIMER_RegisterDefines_ModuleB_32_ICR.h
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
 * @verbatim 7 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_ICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TB_GPTMTnICR_R_TnTOCINT_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_TB_GPTMTnICR_R_TnTOCINT_BIT    (8UL)
#define GPWTM_TB_GPTMTnICR_R_TnTOCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_R_TnTOCINT_EN    ((uint32_t) 0x00000100UL)

#define GPWTM_TB_GPTMTnICR_TnTOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_GPTMTnICR_TnTOCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_TnTOCINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnICR_R_CnMCINT_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_TB_GPTMTnICR_R_CnMCINT_BIT    (9UL)
#define GPWTM_TB_GPTMTnICR_R_CnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_R_CnMCINT_EN    ((uint32_t) 0x00000200UL)

#define GPWTM_TB_GPTMTnICR_CnMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_GPTMTnICR_CnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_CnMCINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnICR_R_CnECINT_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_TB_GPTMTnICR_R_CnECINT_BIT    (10UL)
#define GPWTM_TB_GPTMTnICR_R_CnECINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_R_CnECINT_EN    ((uint32_t) 0x00000400UL)

#define GPWTM_TB_GPTMTnICR_CnECINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_GPTMTnICR_CnECINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_CnECINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnICR_R_TnMCINT_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_TB_GPTMTnICR_R_TnMCINT_BIT    (11UL)
#define GPWTM_TB_GPTMTnICR_R_TnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_R_TnMCINT_EN    ((uint32_t) 0x00000800UL)

#define GPWTM_TB_GPTMTnICR_TnMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_GPTMTnICR_TnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_GPTMTnICR_TnMCINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_ICR_H_ */
