/**
 *
 * @file GPIO_RegisterPeripheral_AHB_Bitbanding.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding.h>

GPIO_BITBANDING_TypeDef* GPIO_AHB_BITBANDING_BLOCK[6]={GPIOA_AHB_BITBANDING,GPIOB_AHB_BITBANDING,GPIOC_AHB_BITBANDING,GPIOD_AHB_BITBANDING,GPIOE_AHB_BITBANDING,GPIOF_AHB_BITBANDING};
GPIO_AUX_BITBANDING_TypeDef* GPIO_AHB_AUX_BITBANDING_BLOCK[6]={GPIOA_AHB_AUX_BITBANDING,GPIOB_AHB_AUX_BITBANDING,GPIOC_AHB_AUX_BITBANDING,GPIOD_AHB_AUX_BITBANDING,GPIOE_AHB_AUX_BITBANDING,GPIOF_AHB_AUX_BITBANDING};


