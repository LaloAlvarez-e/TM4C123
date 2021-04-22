/**
 *
 * @file TIMER_RegisterPeripheral_Control_64_Module0.h
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
 * @verbatim 8 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_64_TIMER_REGISTERPERIPHERAL_CONTROL_64_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_64_TIMER_REGISTERPERIPHERAL_CONTROL_64_MODULE0_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_64.h>

#define GPWTM0_CTL    (((GPWTM_CTL_TypeDef*) (GPWTM0_BASE)))

/******************************************************************************************
************************************ 1 CFG *********************************************
******************************************************************************************/
#define GPWTM0_CTL_CFG    ((GPTMCFG_TypeDef*) (GPWTM0_BASE + GPWTM_CTL_CFG_OFFSET))
#define GPWTM0_CTL_CFG_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_CTL_CFG_OFFSET)))

/******************************************************************************************
************************************ 27 PP *********************************************
******************************************************************************************/

#define GPWTM0_CTL_PP    ((GPTMPP_TypeDef*) (GPWTM0_BASE + GPWTM_CTL_PP_OFFSET))
#define GPWTM0_CTL_PP_R    (*((volatile uint32_t*) (GPWTM0_BASE + GPWTM_CTL_PP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_64_TIMER_REGISTERPERIPHERAL_CONTROL_64_MODULE0_H_ */
