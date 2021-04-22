/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_ModuleW_32_Module5.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_MODULE5_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_ModuleW_32.h>

#define GPTM5_TW_BITBANDING    ((GPTM_TW_BITBANDING_TypeDef*) (GPTM_BASE_BITBANDING + (GPTM5_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 2 GPTMTAMR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnMR    ((BITBANDING_TW_GPTMMR_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_GPTMTnMR_TnCMR    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnCMR_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnAMS    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnAMS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnCDIR    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnCDIR_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnMIE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnMIE_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnWOT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnWOT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnSNAPS    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnSNAPS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnILD    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnILD_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnPWMIE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnPWMIE_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnMRSU    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnMRSU_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMR_TnPLO    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMR_R_TnPLO_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 GPTMCTL *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnCTL    ((BITBANDING_TW_GPTMCTL_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnCTL_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_GPTMTnCTL_TnEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPTM_TW_GPTMTnCTL_R_TnEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnCTL_TnSTALL    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPTM_TW_GPTMTnCTL_R_TnSTALL_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnCTL_RTCEN    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPTM_TW_GPTMTnCTL_R_RTCEN_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnCTL_TnOTE    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPTM_TW_GPTMTnCTL_R_TnOTE_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnCTL_TnPWML    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnCTL_OFFSET) * 32UL) + (GPTM_TW_GPTMTnCTL_R_TnPWML_BIT * 4UL))))

/******************************************************************************************
*********************************** * 6 GPTMIMR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnIMR    ((BITBANDING_TW_GPTMIMR_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnIMR_OFFSET) * 32UL)))


#define GPTM5_TW_BITBANDING_GPTMTnIMR_TnTOIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnIMR_R_TnTOIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnIMR_CnMIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnIMR_R_CnMIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnIMR_RTCIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnIMR_R_RTCIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnIMR_CnEIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnIMR_R_CnEIM_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnIMR_TnMIM    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnIMR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnIMR_R_TnMIM_BIT * 4UL))))


/******************************************************************************************
*********************************** * 7 GPTMRIS *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnRIS    ((BITBANDING_TW_GPTMRIS_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnRIS_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_GPTMTnRIS_TnTORIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnRIS_R_TnTORIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnRIS_CnMRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnRIS_R_CnMRIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnRIS_RTCRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnRIS_R_RTCRIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnRIS_CnERIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnRIS_R_CnERIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnRIS_TnMRIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnRIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnRIS_R_TnMRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 8 GPTMMIS *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnMIS    ((BITBANDING_TW_GPTMMIS_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMIS_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_GPTMTnMIS_TnTOMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMIS_R_TnTOMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMIS_CnMMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMIS_R_CnMMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMIS_RTCMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMIS_R_RTCMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMIS_CnEMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMIS_R_CnEMIS_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnMIS_TnMMIS    (*((volatile const uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMIS_OFFSET) * 32UL) + (GPTM_TW_GPTMTnMIS_R_TnMMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 9 GPTMICR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnICR    ((BITBANDING_TW_GPTMICR_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnICR_OFFSET) * 32UL)))

#define GPTM5_TW_BITBANDING_GPTMTnICR_TnTOCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnICR_R_TnTOCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnICR_CnMCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnICR_R_CnMCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnICR_RTCCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnICR_R_RTCCINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnICR_CnECINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnICR_R_CnECINT_BIT * 4UL))))
#define GPTM5_TW_BITBANDING_GPTMTnICR_TnMCINT    (*((volatile uint32_t*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnICR_OFFSET) * 32UL) + (GPTM_TW_GPTMTnICR_R_TnMCINT_BIT * 4UL))))

/******************************************************************************************
*********************************** * 10 GPTMTAILR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnILR    ((BITBANDING_TW_GPTMILR_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnILR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 12 GPTMTAMATCHR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnMATCHR    ((BITBANDING_TW_GPTMMATCHR_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnMATCHR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 18 GPTMTAR *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnR    ((BITBANDING_TW_GPTMR_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnR_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 20 GPTMTAV *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMTnV    ((BITBANDING_TW_GPTMV_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMTnV_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 22 GPTMRTCPD *********************************************
******************************************************************************************/
#define GPTM5_TW_BITBANDING_GPTMRTCPD    ((BITBANDING_TW_GPTMRTCPD_TypeDef*) (GPTM_BASE_BITBANDING + ((GPTM5_OFFSET + GPTM_TW_GPTMRTCPD_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_TIMER_REGISTERPERIPHERAL_BITBANDING_MODULEW_32_MODULE5_H_ */
