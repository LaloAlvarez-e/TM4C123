/**
 *
 * @file I2C_RegisterPeripheral_Module3.h
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
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_I2C_REGISTERPERIPHERAL_MODULE3_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_I2C_REGISTERPERIPHERAL_MODULE3_H_

#include <xDriver_MCU/I2C/Peripheral/Register/xHeader/I2C_RegisterAddress.h>
#include <xDriver_MCU/I2C/Peripheral/Register/RegisterDefines/I2C_RegisterDefines.h>
#include <xDriver_MCU/I2C/Peripheral/Struct/xHeader/I2C_StructPeripheral.h>

/******************************************************************************************
************************************ I2C3 *********************************************
******************************************************************************************/

#define I2C3    ((I2C_TypeDef*) (I2C3_BASE))

/******************************************************************************************
************************************ 1 I2CMSA *********************************************
******************************************************************************************/
#define I2C3_I2CMSA    ((I2CMSA_TypeDef*) (I2C3_BASE + I2C_I2CMSA_OFFSET ))
#define I2C3_I2CMSA_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMSA_OFFSET)))

/******************************************************************************************
************************************ 2 I2CMCS *********************************************
******************************************************************************************/
#define I2C3_I2CMCS_STATUS    ((I2CMCS_STATUS_TypeDef*) (I2C3_BASE + I2C_I2CMCS_OFFSET ))
#define I2C3_I2CMCS_CONTROL    ((I2CMCS_CONTROL_TypeDef*) (I2C3_BASE + I2C_I2CMCS_OFFSET ))
#define I2C3_I2CMCS_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMCS_OFFSET)))

/******************************************************************************************
************************************ 3 I2CMDR *********************************************
******************************************************************************************/
#define I2C3_I2CMDR    ((I2CMDR_TypeDef*) (I2C3_BASE + I2C_I2CMDR_OFFSET ))
#define I2C3_I2CMDR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMDR_OFFSET)))

/******************************************************************************************
************************************ 4 I2CMTPR *********************************************
******************************************************************************************/
#define I2C3_I2CMTPR    ((I2CMTPR_TypeDef*) (I2C3_BASE + I2C_I2CMTPR_OFFSET ))
#define I2C3_I2CMTPR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMTPR_OFFSET)))

/******************************************************************************************
************************************ 5 I2CMIMR *********************************************
******************************************************************************************/
#define I2C3_I2CMIMR    ((I2CMIMR_TypeDef*) (I2C3_BASE + I2C_I2CMIMR_OFFSET ))
#define I2C3_I2CMIMR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMIMR_OFFSET)))

/******************************************************************************************
************************************ 6 I2CMRIS *********************************************
******************************************************************************************/
#define I2C3_I2CMRIS    ((I2CMRIS_TypeDef*) (I2C3_BASE + I2C_I2CMRIS_OFFSET ))
#define I2C3_I2CMRIS_R    (*((volatile const uint32_t*) (I2C3_BASE + I2C_I2CMRIS_OFFSET)))

/******************************************************************************************
************************************ 7 I2CMMIS *********************************************
******************************************************************************************/
#define I2C3_I2CMMIS    ((I2CMMIS_TypeDef*) (I2C3_BASE + I2C_I2CMMIS_OFFSET ))
#define I2C3_I2CMMIS_R    (*((volatile const uint32_t*) (I2C3_BASE + I2C_I2CMMIS_OFFSET)))

/******************************************************************************************
************************************ 8 I2CMICR *********************************************
******************************************************************************************/
#define I2C3_I2CMICR    ((I2CMICR_TypeDef*) (I2C3_BASE + I2C_I2CMICR_OFFSET ))
#define I2C3_I2CMICR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMICR_OFFSET)))

/******************************************************************************************
************************************ 9 I2CMCR *********************************************
******************************************************************************************/
#define I2C3_I2CMCR    ((I2CMCR_TypeDef*) (I2C3_BASE + I2C_I2CMCR_OFFSET ))
#define I2C3_I2CMCR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMCR_OFFSET)))

/******************************************************************************************
************************************ 10 I2CMCLKOCNT *********************************************
******************************************************************************************/
#define I2C3_I2CMCLKOCNT    ((I2CMCLKOCNT_TypeDef*) (I2C3_BASE + I2C_I2CMCLKOCNT_OFFSET ))
#define I2C3_I2CMCLKOCNT_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMCLKOCNT_OFFSET)))

/******************************************************************************************
************************************ 11 I2CMBMON *********************************************
******************************************************************************************/
#define I2C3_I2CMBMON    ((I2CMBMON_TypeDef*) (I2C3_BASE + I2C_I2CMBMON_OFFSET ))
#define I2C3_I2CMBMON_R    (*((volatile const uint32_t*) (I2C3_BASE + I2C_I2CMBMON_OFFSET)))

/******************************************************************************************
************************************ 12 I2CMCR2 *********************************************
******************************************************************************************/
#define I2C3_I2CMCR2    ((I2CMCR2_TypeDef*) (I2C3_BASE + I2C_I2CMCR2_OFFSET ))
#define I2C3_I2CMCR2_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CMCR2_OFFSET)))

/******************************************************************************************
************************************ 13 I2CSOAR *********************************************
******************************************************************************************/
#define I2C3_I2CSOAR    ((I2CSOAR_TypeDef*) (I2C3_BASE + I2C_I2CSOAR_OFFSET ))
#define I2C3_I2CSOAR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSOAR_OFFSET)))

/******************************************************************************************
************************************ 14 I2CSCSR *********************************************
******************************************************************************************/
#define I2C3_I2CSCSR_STATUS    ((I2CSCSR_STATUS_TypeDef*) (I2C3_BASE + I2C_I2CSCSR_OFFSET ))
#define I2C3_I2CSCSR_CONTROL    ((I2CSCSR_CONTROL_TypeDef*) (I2C3_BASE + I2C_I2CSCSR_OFFSET ))
#define I2C3_I2CSCSR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSCSR_OFFSET)))

/******************************************************************************************
************************************ 15 I2CSDR *********************************************
******************************************************************************************/
#define I2C3_I2CSDR    ((I2CSDR_TypeDef*) (I2C3_BASE + I2C_I2CSDR_OFFSET ))
#define I2C3_I2CSDR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSDR_OFFSET)))

/******************************************************************************************
************************************ 16 I2CSIMR *********************************************
******************************************************************************************/
#define I2C3_I2CSIMR    ((I2CSIMR_TypeDef*) (I2C3_BASE + I2C_I2CSIMR_OFFSET ))
#define I2C3_I2CSIMR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSIMR_OFFSET)))

/******************************************************************************************
************************************ 17 I2CSRIS *********************************************
******************************************************************************************/
#define I2C3_I2CSRIS    ((I2CSRIS_TypeDef*) (I2C3_BASE + I2C_I2CSRIS_OFFSET ))
#define I2C3_I2CSRIS_R    (*((volatile const uint32_t*) (I2C3_BASE + I2C_I2CSRIS_OFFSET)))

/******************************************************************************************
************************************ 18 I2CSMIS *********************************************
******************************************************************************************/
#define I2C3_I2CSMIS    ((I2CSMIS_TypeDef*) (I2C3_BASE + I2C_I2CSMIS_OFFSET ))
#define I2C3_I2CSMIS_R    (*((volatile const uint32_t*) (I2C3_BASE + I2C_I2CSMIS_OFFSET)))

/******************************************************************************************
************************************ 19 I2CSICR *********************************************
******************************************************************************************/
#define I2C3_I2CSICR    ((I2CSICR_TypeDef*) (I2C3_BASE + I2C_I2CSICR_OFFSET ))
#define I2C3_I2CSICR_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSICR_OFFSET)))

/******************************************************************************************
************************************ 20 I2CSOAR2 *********************************************
******************************************************************************************/
#define I2C3_I2CSOAR2    ((I2CSOAR2_TypeDef*) (I2C3_BASE + I2C_I2CSOAR2_OFFSET ))
#define I2C3_I2CSOAR2_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSOAR2_OFFSET)))

/******************************************************************************************
************************************ 21 I2CSACKCTL *********************************************
******************************************************************************************/
#define I2C3_I2CSACKCTL    ((I2CSACKCTL_TypeDef*) (I2C3_BASE + I2C_I2CSACKCTL_OFFSET ))
#define I2C3_I2CSACKCTL_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CSACKCTL_OFFSET)))

/******************************************************************************************
************************************ 22 I2CPP *********************************************
******************************************************************************************/
#define I2C3_I2CPP    ((I2CPP_TypeDef*) (I2C3_BASE + I2C_I2CPP_OFFSET ))
#define I2C3_I2CPP_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CPP_OFFSET)))

/******************************************************************************************
************************************ 23 I2CPC *********************************************
******************************************************************************************/
#define I2C3_I2CPC    ((I2CPC_TypeDef*) (I2C3_BASE + I2C_I2CPC_OFFSET ))
#define I2C3_I2CPC_R    (*((volatile uint32_t*) (I2C3_BASE + I2C_I2CPC_OFFSET)))

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_REGISTER_REGISTERPERIPHERAL_XHEADER_I2C_REGISTERPERIPHERAL_MODULE3_H_ */
