/**
 *
 * @file ADC_RegisterDefines_ADCRIS.h
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
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCRIS_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCRIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 ADCRIS *********************************************
******************************************************************************************/
/*--------*/
#define ADC_ADCRIS_R_INR_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCRIS_R_INR_BIT    ((uint32_t) 0U)
#define ADC_ADCRIS_R_INR_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_R_INR_ACTIVE    ((uint32_t) 0x0000000FU)

#define ADC_ADCRIS_INR_MASK    ((uint32_t) 0x0000000FU)
#define ADC_ADCRIS_INR_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_INR_ACTIVE    ((uint32_t) 0x0000000FU)
/*--------*/

/*--------*/
#define ADC_ADCRIS_R_INR0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCRIS_R_INR0_BIT    ((uint32_t) 0U)
#define ADC_ADCRIS_R_INR0_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_R_INR0_ACTIVE    ((uint32_t) 0x00000001U)

#define ADC_ADCRIS_INR0_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCRIS_INR0_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_INR0_ACTIVE    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCRIS_R_INR1_MASK    ((uint32_t) 0x00000002U)
#define ADC_ADCRIS_R_INR1_BIT    ((uint32_t) 1U)
#define ADC_ADCRIS_R_INR1_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_R_INR1_ACTIVE    ((uint32_t) 0x00000002U)

#define ADC_ADCRIS_INR1_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCRIS_INR1_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_INR1_ACTIVE    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCRIS_R_INR2_MASK    ((uint32_t) 0x00000004U)
#define ADC_ADCRIS_R_INR2_BIT    ((uint32_t) 2U)
#define ADC_ADCRIS_R_INR2_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_R_INR2_ACTIVE    ((uint32_t) 0x00000004U)

#define ADC_ADCRIS_INR2_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCRIS_INR2_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_INR2_ACTIVE    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCRIS_R_INR3_MASK    ((uint32_t) 0x00000008U)
#define ADC_ADCRIS_R_INR3_BIT    ((uint32_t) 3U)
#define ADC_ADCRIS_R_INR3_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_R_INR3_ACTIVE    ((uint32_t) 0x00000008U)

#define ADC_ADCRIS_INR3_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCRIS_INR3_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_INR3_ACTIVE    ((uint32_t) 0x00000001U)
/*--------*/

/*--------*/
#define ADC_ADCRIS_R_INRDC_MASK    ((uint32_t) 0x00010000U)
#define ADC_ADCRIS_R_INRDC_BIT    ((uint32_t) 16U)
#define ADC_ADCRIS_R_INRDC_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_R_INRDC_ACTIVE    ((uint32_t) 0x00010000U)

#define ADC_ADCRIS_INRDC_MASK    ((uint32_t) 0x00000001U)
#define ADC_ADCRIS_INRDC_NOACTIVE    ((uint32_t) 0x00000000U)
#define ADC_ADCRIS_INRDC_ACTIVE    ((uint32_t) 0x00000001U)
/*--------*/

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_REGISTER_REGISTERDEFINES_XHEADER_ADC_REGISTERDEFINES_ADCRIS_H_ */
