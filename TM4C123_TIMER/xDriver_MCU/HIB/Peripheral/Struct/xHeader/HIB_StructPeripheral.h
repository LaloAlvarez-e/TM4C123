/**
 *
 * @file HIB_StructPeripheral.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/HIB/Peripheral/Struct/xHeader/HIB_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t     HIBRTCC;
        HIBRTCC_TypeDef             HIBRTCC_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCM0;
        HIBRTCM0_TypeDef            HIBRTCM0_Bit;
    };
    const uint32_t                  reserved[1];
    union
    {
        volatile uint32_t           HIBRTCLD;
        HIBRTCLD_TypeDef            HIBRTCLD_Bit;
    };
    union
    {
        volatile uint32_t           HIBCTL;
        HIBCTL_TypeDef              HIBCTL_Bit;
    };
    union
    {
        volatile uint32_t           HIBIM;
        HIBIM_TypeDef               HIBIM_Bit;
    };
    union
    {
        volatile const uint32_t     HIBRIS;
        HIBRIS_TypeDef              HIBRIS_Bit;
    };
    union
    {
        volatile const uint32_t     HIBMIS;
        HIBMIS_TypeDef              HIBMIS_Bit;
    };
    union
    {
        volatile uint32_t           HIBIC;
        HIBIC_TypeDef               HIBIC_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCT;
        HIBRTCT_TypeDef             HIBRTCT_Bit;
    };
    union
    {
        volatile uint32_t           HIBRTCSS;
        HIBRTCSS_TypeDef            HIBRTCSS_Bit;
    };
    const uint32_t                  reserved1[1];
    union
    {
        volatile uint32_t           HIBDATA[16];
        HIBDATA_TypeDef             HIBDATA_Bit[16];
    };
}HIB_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_STRUCT_HIB_STRUCTPERIPHERAL_H_ */
