/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_32_Module3.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE3_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral_Bitbanding/TIMER_StructPeripheral_Bitbanding_Control_32.h>

#define GPTM3_BITBANDING_CTL      (((GPTM_BITBANDING_CTL_TypeDef*) (GPTM_BITBANDING_BASE+(GPTM3_OFFSET*32u))))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM3_BITBANDING_CTL_GPTMCFG    (((BITBANDING_GPTMCFG_TypeDef*)(GPTM_BITBANDING_BASE+((GPTM3_OFFSET+GPTM_CTL_GPTMCFG_OFFSET)*32u))))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPTM3_BITBANDING_CTL_GPTMPP    (((BITBANDING_GPTMPP_TypeDef*)(GPTM_BITBANDING_BASE+((GPTM3_OFFSET+GPTM_CTL_GPTMPP_OFFSET)*32u))))





#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_32_MODULE3_H_ */
