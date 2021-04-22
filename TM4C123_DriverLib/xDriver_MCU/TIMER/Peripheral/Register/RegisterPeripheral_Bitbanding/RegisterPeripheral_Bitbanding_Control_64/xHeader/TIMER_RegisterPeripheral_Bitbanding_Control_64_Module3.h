/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_64_Module3.h
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
 * Date           Author     Version     Description * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE3_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE3_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_64.h>

#define GPWTM3_CTL_BITBANDING    ((GPWTM_CTL_BITBANDING_TypeDef*) (GPWTM_BASE_BITBANDING + (GPWTM3_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPWTM3_CTL_BITBANDING_GPTMCFG    ((BITBANDING_GPTMCFG_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_CTL_GPTMCFG_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 27 GPTMPP *********************************************
******************************************************************************************/
#define GPWTM3_CTL_BITBANDING_GPTMPP    ((BITBANDING_GPTMPP_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM3_OFFSET + GPWTM_CTL_GPTMPP_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE3_H_ */