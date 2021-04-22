/**
 *
 * @file TIMER_StructPeripheral_Bitbanding_ModuleA_16.h
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
 * @verbatim 4 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 4 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_

#include <xDriver_MCU/TIMER/Peripheral/Struct/StructRegister_Bitbanding/xHeader/TIMER_StructRegister_Bitbanding_ModuleA_16.h>

typedef volatile struct
{
    const uint32_t reserved [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnMR [32UL];
        BITBANDING_TA_GPTMMR_TypeDef GPTMTnMR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnCTL [32UL];
        BITBANDING_TA_GPTMCTL_TypeDef GPTMTnCTL_Bit;
    };
    const uint32_t reserved3 [2UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnIMR [32UL];
        BITBANDING_TA_GPTMIMR_TypeDef GPTMTnIMR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnRIS [32UL];
        BITBANDING_TA_GPTMRIS_TypeDef GPTMTnRIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnMIS [32UL];
        BITBANDING_TA_GPTMMIS_TypeDef GPTMTnMIS_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnICR [32UL];
        BITBANDING_TA_GPTMICR_TypeDef GPTMTnICR_Bit;
    };
    union
    {
        volatile uint32_t GPTMTnILR [32UL];
        BITBANDING_TA_GPTMILR_TypeDef GPTMTnILR_Bit;
    };
    const uint32_t reserved9 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnMATCHR [32UL];
        BITBANDING_TA_GPTMMATCHR_TypeDef GPTMTnMATCHR_Bit;
    };
    const uint32_t reserved11 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnPR [32UL];
        BITBANDING_TA_GPTMPR_TypeDef GPTMTnPR_Bit;
    };
    const uint32_t reserved13 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnPMR [32UL];
        BITBANDING_TA_GPTMPMR_TypeDef GPTMTnPMR_Bit;
    };
    const uint32_t reserved15 [1UL * 32UL];
    union
    {
        volatile const uint32_t GPTMTnR [32UL];
        BITBANDING_TA_GPTMR_TypeDef GPTMTnR_Bit;
    };
    const uint32_t reserved16 [1UL * 32UL];
    union
    {
        volatile uint32_t GPTMTnV [32UL];
        BITBANDING_TA_GPTMV_TypeDef GPTMTnV_Bit;
    };
    const uint32_t reserved17 [2UL * 32UL];
    union
    {
        volatile const uint32_t GPTMTnPS [32UL];
        BITBANDING_TA_GPTMPS_TypeDef GPTMTnPS_Bit;
    };
    const uint32_t reserved19 [1000UL * 32UL];
}GPTM_TA_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_ */
