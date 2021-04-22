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
        volatile uint32_t TnMR [32UL];
        BITBANDING_TA_GPTMMR_TypeDef TnMR_Bit;
    };
    const uint32_t reserved1 [1UL * 32UL];
    union
    {
        volatile uint32_t TnCTL [32UL];
        BITBANDING_TA_GPTMCTL_TypeDef TnCTL_Bit;
    };
    const uint32_t reserved3 [2UL * 32UL];
    union
    {
        volatile uint32_t TnIMR [32UL];
        BITBANDING_TA_GPTMIMR_TypeDef TnIMR_Bit;
    };
    union
    {
        volatile uint32_t TnRIS [32UL];
        BITBANDING_TA_GPTMRIS_TypeDef TnRIS_Bit;
    };
    union
    {
        volatile uint32_t TnMIS [32UL];
        BITBANDING_TA_GPTMMIS_TypeDef TnMIS_Bit;
    };
    union
    {
        volatile uint32_t TnICR [32UL];
        BITBANDING_TA_GPTMICR_TypeDef TnICR_Bit;
    };
    union
    {
        volatile uint32_t TnILR [32UL];
        BITBANDING_TA_GPTMILR_TypeDef TnILR_Bit;
    };
    const uint32_t reserved9 [1UL * 32UL];
    union
    {
        volatile uint32_t TnMATCHR [32UL];
        BITBANDING_TA_GPTMMATCHR_TypeDef TnMATCHR_Bit;
    };
    const uint32_t reserved11 [1UL * 32UL];
    union
    {
        volatile uint32_t TnPR [32UL];
        BITBANDING_TA_GPTMPR_TypeDef TnPR_Bit;
    };
    const uint32_t reserved13 [1UL * 32UL];
    union
    {
        volatile uint32_t TnPMR [32UL];
        BITBANDING_TA_GPTMPMR_TypeDef TnPMR_Bit;
    };
    const uint32_t reserved15 [1UL * 32UL];
    union
    {
        volatile const uint32_t TnR [32UL];
        BITBANDING_TA_GPTMR_TypeDef TnR_Bit;
    };
    const uint32_t reserved16 [1UL * 32UL];
    union
    {
        volatile uint32_t TnV [32UL];
        BITBANDING_TA_GPTMV_TypeDef TnV_Bit;
    };
    const uint32_t reserved17 [2UL * 32UL];
    union
    {
        volatile const uint32_t TnPS [32UL];
        BITBANDING_TA_GPTMPS_TypeDef TnPS_Bit;
    };
    const uint32_t reserved19 [1000UL * 32UL];
}GPTM_TA_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_STRUCT_TIMER_STRUCTPERIPHERAL_BITBANDING_TIMER_STRUCTPERIPHERAL_BITBANDING_MODULEA_16_H_ */
