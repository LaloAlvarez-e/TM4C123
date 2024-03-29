/**
 *
 * @file I2C_RegisterPeripheral_Module2.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_I2C_REGISTERPERIPHERAL_MODULE2_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_I2C_REGISTERPERIPHERAL_MODULE2_H_

#include <xDriver_MCU/I2C/Peripheral/Register/xHeader/I2C_RegisterAddress.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterDefines/I2C_RegisterDefines.h>
#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructPeripheral.h>

/******************************************************************************************
************************************ I2C2 *********************************************
******************************************************************************************/

#define I2C2    ((I2C_TypeDef*) (I2C2_BASE))

/******************************************************************************************
************************************ 1 MSA *********************************************
******************************************************************************************/
#define I2C2_MSA    ((I2CMSA_TypeDef*) (I2C2_BASE + I2C_MSA_OFFSET ))
#define I2C2_MSA_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MSA_OFFSET)))

/******************************************************************************************
************************************ 2 MCS *********************************************
******************************************************************************************/
#define I2C2_MCS_STATUS    ((I2CMCS_STATUS_TypeDef*) (I2C2_BASE + I2C_MCS_OFFSET ))
#define I2C2_MCS_CONTROL    ((I2CMCS_CONTROL_TypeDef*) (I2C2_BASE + I2C_MCS_OFFSET ))
#define I2C2_MCS_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MCS_OFFSET)))

/******************************************************************************************
************************************ 3 MDR *********************************************
******************************************************************************************/
#define I2C2_MDR    ((I2CMDR_TypeDef*) (I2C2_BASE + I2C_MDR_OFFSET ))
#define I2C2_MDR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MDR_OFFSET)))

/******************************************************************************************
************************************ 4 MTPR *********************************************
******************************************************************************************/
#define I2C2_MTPR    ((I2CMTPR_TypeDef*) (I2C2_BASE + I2C_MTPR_OFFSET ))
#define I2C2_MTPR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MTPR_OFFSET)))

/******************************************************************************************
************************************ 5 MIMR *********************************************
******************************************************************************************/
#define I2C2_MIMR    ((I2CMIMR_TypeDef*) (I2C2_BASE + I2C_MIMR_OFFSET ))
#define I2C2_MIMR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MIMR_OFFSET)))

/******************************************************************************************
************************************ 6 MRIS *********************************************
******************************************************************************************/
#define I2C2_MRIS    ((I2CMRIS_TypeDef*) (I2C2_BASE + I2C_MRIS_OFFSET ))
#define I2C2_MRIS_R    (*((volatile const uint32_t*) (I2C2_BASE + I2C_MRIS_OFFSET)))

/******************************************************************************************
************************************ 7 MMIS *********************************************
******************************************************************************************/
#define I2C2_MMIS    ((I2CMMIS_TypeDef*) (I2C2_BASE + I2C_MMIS_OFFSET ))
#define I2C2_MMIS_R    (*((volatile const uint32_t*) (I2C2_BASE + I2C_MMIS_OFFSET)))

/******************************************************************************************
************************************ 8 MICR *********************************************
******************************************************************************************/
#define I2C2_MICR    ((I2CMICR_TypeDef*) (I2C2_BASE + I2C_MICR_OFFSET ))
#define I2C2_MICR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MICR_OFFSET)))

/******************************************************************************************
************************************ 9 MCR *********************************************
******************************************************************************************/
#define I2C2_MCR    ((I2CMCR_TypeDef*) (I2C2_BASE + I2C_MCR_OFFSET ))
#define I2C2_MCR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MCR_OFFSET)))

/******************************************************************************************
************************************ 10 MCLKOCNT *********************************************
******************************************************************************************/
#define I2C2_MCLKOCNT    ((I2CMCLKOCNT_TypeDef*) (I2C2_BASE + I2C_MCLKOCNT_OFFSET ))
#define I2C2_MCLKOCNT_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MCLKOCNT_OFFSET)))

/******************************************************************************************
************************************ 11 MBMON *********************************************
******************************************************************************************/
#define I2C2_MBMON    ((I2CMBMON_TypeDef*) (I2C2_BASE + I2C_MBMON_OFFSET ))
#define I2C2_MBMON_R    (*((volatile const uint32_t*) (I2C2_BASE + I2C_MBMON_OFFSET)))

/******************************************************************************************
************************************ 12 MCR2 *********************************************
******************************************************************************************/
#define I2C2_MCR2    ((I2CMCR2_TypeDef*) (I2C2_BASE + I2C_MCR2_OFFSET ))
#define I2C2_MCR2_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_MCR2_OFFSET)))

/******************************************************************************************
************************************ 13 SOAR *********************************************
******************************************************************************************/
#define I2C2_SOAR    ((I2CSOAR_TypeDef*) (I2C2_BASE + I2C_SOAR_OFFSET ))
#define I2C2_SOAR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SOAR_OFFSET)))

/******************************************************************************************
************************************ 14 SCSR *********************************************
******************************************************************************************/
#define I2C2_SCSR_STATUS    ((I2CSCSR_STATUS_TypeDef*) (I2C2_BASE + I2C_SCSR_OFFSET ))
#define I2C2_SCSR_CONTROL    ((I2CSCSR_CONTROL_TypeDef*) (I2C2_BASE + I2C_SCSR_OFFSET ))
#define I2C2_SCSR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SCSR_OFFSET)))

/******************************************************************************************
************************************ 15 SDR *********************************************
******************************************************************************************/
#define I2C2_SDR    ((I2CSDR_TypeDef*) (I2C2_BASE + I2C_SDR_OFFSET ))
#define I2C2_SDR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SDR_OFFSET)))

/******************************************************************************************
************************************ 16 SIMR *********************************************
******************************************************************************************/
#define I2C2_SIMR    ((I2CSIMR_TypeDef*) (I2C2_BASE + I2C_SIMR_OFFSET ))
#define I2C2_SIMR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SIMR_OFFSET)))

/******************************************************************************************
************************************ 17 SRIS *********************************************
******************************************************************************************/
#define I2C2_SRIS    ((I2CSRIS_TypeDef*) (I2C2_BASE + I2C_SRIS_OFFSET ))
#define I2C2_SRIS_R    (*((volatile const uint32_t*) (I2C2_BASE + I2C_SRIS_OFFSET)))

/******************************************************************************************
************************************ 18 SMIS *********************************************
******************************************************************************************/
#define I2C2_SMIS    ((I2CSMIS_TypeDef*) (I2C2_BASE + I2C_SMIS_OFFSET ))
#define I2C2_SMIS_R    (*((volatile const uint32_t*) (I2C2_BASE + I2C_SMIS_OFFSET)))

/******************************************************************************************
************************************ 19 SICR *********************************************
******************************************************************************************/
#define I2C2_SICR    ((I2CSICR_TypeDef*) (I2C2_BASE + I2C_SICR_OFFSET ))
#define I2C2_SICR_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SICR_OFFSET)))

/******************************************************************************************
************************************ 20 SOAR2 *********************************************
******************************************************************************************/
#define I2C2_SOAR2    ((I2CSOAR2_TypeDef*) (I2C2_BASE + I2C_SOAR2_OFFSET ))
#define I2C2_SOAR2_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SOAR2_OFFSET)))

/******************************************************************************************
************************************ 21 SACKCTL *********************************************
******************************************************************************************/
#define I2C2_SACKCTL    ((I2CSACKCTL_TypeDef*) (I2C2_BASE + I2C_SACKCTL_OFFSET ))
#define I2C2_SACKCTL_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_SACKCTL_OFFSET)))

/******************************************************************************************
************************************ 22 PP *********************************************
******************************************************************************************/
#define I2C2_PP    ((I2CPP_TypeDef*) (I2C2_BASE + I2C_PP_OFFSET ))
#define I2C2_PP_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_PP_OFFSET)))

/******************************************************************************************
************************************ 23 PC *********************************************
******************************************************************************************/
#define I2C2_PC    ((I2CPC_TypeDef*) (I2C2_BASE + I2C_PC_OFFSET ))
#define I2C2_PC_R    (*((volatile uint32_t*) (I2C2_BASE + I2C_PC_OFFSET)))

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_I2C_REGISTERPERIPHERAL_MODULE2_H_ */
