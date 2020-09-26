/**
 *
 * @file TIMER_RegisterDefines_ModuleB_32_MIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_MIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TB_GPTMTnMIS_R_TnTOMIS_MASK              ((uint32_t)0x00000100u)
#define GPWTM_TB_GPTMTnMIS_R_TnTOMIS_BIT               (8u)
#define GPWTM_TB_GPTMTnMIS_R_TnTOMIS_DIS               ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_R_TnTOMIS_EN                ((uint32_t)0x00000100u)

#define GPWTM_TB_GPTMTnMIS_TnTOMIS_MASK                ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnMIS_TnTOMIS_DIS                 ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_TnTOMIS_EN                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnMIS_R_CnMMIS_MASK               ((uint32_t)0x00000200u)
#define GPWTM_TB_GPTMTnMIS_R_CnMMIS_BIT                (9u)
#define GPWTM_TB_GPTMTnMIS_R_CnMMIS_DIS                ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_R_CnMMIS_EN                 ((uint32_t)0x00000200u)

#define GPWTM_TB_GPTMTnMIS_CnMMIS_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnMIS_CnMMIS_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_CnMMIS_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnMIS_R_CnEMIS_MASK               ((uint32_t)0x00000400u)
#define GPWTM_TB_GPTMTnMIS_R_CnEMIS_BIT                (10u)
#define GPWTM_TB_GPTMTnMIS_R_CnEMIS_DIS                ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_R_CnEMIS_EN                 ((uint32_t)0x00000400u)

#define GPWTM_TB_GPTMTnMIS_CnEMIS_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnMIS_CnEMIS_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_CnEMIS_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnMIS_R_TnMMIS_MASK               ((uint32_t)0x00000800u)
#define GPWTM_TB_GPTMTnMIS_R_TnMMIS_BIT                (11u)
#define GPWTM_TB_GPTMTnMIS_R_TnMMIS_DIS                ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_R_TnMMIS_EN                 ((uint32_t)0x00000800u)

#define GPWTM_TB_GPTMTnMIS_TnMMIS_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnMIS_TnMMIS_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnMIS_TnMMIS_EN                   ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_MIS_H_ */
