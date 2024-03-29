/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_64_Module5.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE5_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Register/TIMER_RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral_Bitbanding/TIMER_StructPeripheral_Bitbanding_Control_64.h>

#define GPWTM5_BITBANDING_CTL     (((GPWTM_BITBANDING_CTL_TypeDef*) (GPWTM_BITBANDING_BASE+(GPWTM5_OFFSET*32u))))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_CTL_GPTMCFG   (((BITBANDING_GPTMCFG_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_CTL_GPTMCFG_OFFSET)*32u))))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPWTM5_BITBANDING_CTL_GPTMPP   (((BITBANDING_GPTMPP_TypeDef*)(GPWTM_BITBANDING_BASE+((GPWTM5_OFFSET+GPWTM_CTL_GPTMPP_OFFSET)*32u))))






#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE5_H_ */
