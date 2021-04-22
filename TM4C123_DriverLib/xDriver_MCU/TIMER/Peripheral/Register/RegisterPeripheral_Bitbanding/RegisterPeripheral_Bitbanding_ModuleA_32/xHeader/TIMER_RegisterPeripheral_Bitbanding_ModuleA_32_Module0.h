/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleA_32_Module0.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE0_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleA_32.h>

#define GPWTM0_TA_BITBANDING    ((GPWTM_TA_BITBANDING_TypeDef*) (GPWTM_BASE_BITBANDING + (GPWTM0_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnMR    ((BITBANDING_TA_GPTMMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL)))

#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnCMR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnCMR_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnAMS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnAMS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnCDIR    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnCDIR_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnMIE_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnWOT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnWOT_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnSNAPS    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnSNAPS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnILD    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnILD_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnPWMIE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnPWMIE_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnMRSU    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnMRSU_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMR_TnPLO    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMR_R_TnPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnCTL    ((BITBANDING_TA_GPTMCTL_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnCTL_OFFSET) * 32UL)))

#define GPWTM0_TA_BITBANDING_GPTMTnCTL_TnEN    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnCTL_R_TnEN_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnCTL_TnSTALL    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnCTL_R_TnSTALL_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnCTL_TnOTE    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnCTL_R_TnOTE_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnCTL_TnPWML    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnCTL_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnIMR    ((BITBANDING_TA_GPTMIMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnIMR_OFFSET) * 32UL)))

#define GPWTM0_TA_BITBANDING_GPTMTnIMR_TnTOIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnIMR_R_TnTOIM_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnIMR_CnMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnIMR_R_CnMIM_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnIMR_CnEIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnIMR_R_CnEIM_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnIMR_TnMIM    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnIMR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnIMR_R_TnMIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnRIS    ((BITBANDING_TA_GPTMRIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnRIS_OFFSET) * 32UL)))


#define GPWTM0_TA_BITBANDING_GPTMTnRIS_TnTORIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnRIS_R_TnTORIS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnRIS_CnMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnRIS_R_CnMRIS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnRIS_CnERIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnRIS_R_CnERIS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnRIS_TnMRIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnRIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnRIS_R_TnMRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnMIS    ((BITBANDING_TA_GPTMMIS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMIS_OFFSET) * 32UL)))

#define GPWTM0_TA_BITBANDING_GPTMTnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMIS_CnMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMIS_R_CnMMIS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMIS_CnEMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMIS_R_CnEMIS_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnMIS_TnMMIS    (*((volatile const uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMIS_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnMIS_R_TnMMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 GPTMICR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnICR    ((BITBANDING_TA_GPTMICR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnICR_OFFSET) * 32UL)))

#define GPWTM0_TA_BITBANDING_GPTMTnICR_TnTOCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnICR_R_TnTOCINT_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnICR_CnMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnICR_R_CnMCINT_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnICR_CnECINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnICR_R_CnECINT_BIT * 4UL))))
#define GPWTM0_TA_BITBANDING_GPTMTnICR_TnMCINT    (*((volatile uint32_t*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnICR_OFFSET) * 32UL) + (GPWTM_TA_GPTMTnICR_R_TnMCINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnILR    ((BITBANDING_TA_GPWTMILR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnMATCHR    ((BITBANDING_TA_GPWTMMATCHR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 14 GPTMTAPR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnPR    ((BITBANDING_TA_GPWTMPR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnPR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 16 GPTMTAPMR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnPMR    ((BITBANDING_TA_GPWTMPMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnPMR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnR    ((BITBANDING_TA_GPTMR_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnV    ((BITBANDING_TA_GPTMV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 23 GPTMTAPS *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnPS    ((BITBANDING_TA_GPWTMPS_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnPS_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 25 GPTMTAPV *********************************************
******************************************************************************************/
#define GPWTM0_TA_BITBANDING_GPTMTnPV    ((BITBANDING_TA_GPWTMPV_TypeDef*) (GPWTM_BASE_BITBANDING + ((GPWTM0_OFFSET + GPWTM_TA_GPTMTnPV_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEA_32_MODULE0_H_ */