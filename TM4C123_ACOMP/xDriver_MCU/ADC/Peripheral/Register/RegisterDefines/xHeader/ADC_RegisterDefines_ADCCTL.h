/**
 *
 * @file ADC_RegisterDefines_ADCCTL.h
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
 * @verbatim 14 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCCTL_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCCTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 14 ADCCTL *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCCTL_R_VREF_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCCTL_R_VREF_BIT    ((uint32_t) 0UL)
#define ADC_ADCCTL_R_VREF_VDDA_GNDA    ((uint32_t) 0x00000000UL)
#define ADC_ADCCTL_R_VREF_RESERVED    ((uint32_t) 0x00000001UL)

#define ADC_ADCCTL_VREF_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCCTL_VREF_VDDA_GNDA    ((uint32_t) 0x00000000UL)
#define ADC_ADCCTL_VREF_RESERVED    ((uint32_t) 0x00000001UL)
/*--------*/

/*--------*/
#define ADC_ADCCTL_R_DITHER_MASK    ((uint32_t) 0x00000040UL)
#define ADC_ADCCTL_R_DITHER_BIT    ((uint32_t) 6)
#define ADC_ADCCTL_R_DITHER_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ADCCTL_R_DITHER_EN    ((uint32_t) 0x00000040UL)

#define ADC_ADCCTL_DITHER_MASK    ((uint32_t) 0x00000001UL)
#define ADC_ADCCTL_DITHER_DIS    ((uint32_t) 0x00000000UL)
#define ADC_ADCCTL_DITHER_EN    ((uint32_t) 0x00000001UL)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCCTL_H_ */
