/**
 *
 * @file SYSEXC_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterAddress.h>
#include <xDriver_MCU/SYSEXC/Peripheral/Register/xHeader/SYSEXC_RegisterDefines.h>
#include <xDriver_MCU/SYSEXC/Peripheral/Struct/xHeader/SYSEXC_StructPeripheral.h>

#define SYSEXC_BITBANDING    ((SYSEXC_BITBANDING_TypeDef*) (SYSEXC_BITBANDING_BASE + (SYSEXC_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 SYSEXCRIS *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_SYSEXCRIS    ((BITBANDING_SYSEXCRIS_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_SYSEXCRIS_FPIDCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCRIS_R_FPIDCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPDZCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCRIS_R_FPDZCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPIOCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCRIS_R_FPIOCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPUFCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCRIS_R_FPUFCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPOFCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCRIS_R_FPOFCRIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCRIS_FPIXCRIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCRIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCRIS_R_FPIXCRIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 2 SYSEXCIM *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_SYSEXCIM    ((BITBANDING_SYSEXCIM_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_SYSEXCIM_FPIDCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL) + (SYSEXC_SYSEXCIM_R_FPIDCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPDZCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL) + (SYSEXC_SYSEXCIM_R_FPDZCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPIOCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL) + (SYSEXC_SYSEXCIM_R_FPIOCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPUFCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL) + (SYSEXC_SYSEXCIM_R_FPUFCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPOFCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL) + (SYSEXC_SYSEXCIM_R_FPOFCIM_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIM_FPIXCIM    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIM_OFFSET) * 32UL) + (SYSEXC_SYSEXCIM_R_FPIXCIM_BIT * 4UL))))

/******************************************************************************************
*********************************** * 3 SYSEXCMIS *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_SYSEXCMIS    ((BITBANDING_SYSEXCMIS_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_SYSEXCMIS_FPIDCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCMIS_R_FPIDCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPDZCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCMIS_R_FPDZCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPIOCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCMIS_R_FPIOCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPUFCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCMIS_R_FPUFCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPOFCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCMIS_R_FPOFCMIS_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCMIS_FPIXCMIS    (*((volatile const uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCMIS_OFFSET) * 32UL) + (SYSEXC_SYSEXCMIS_R_FPIXCMIS_BIT * 4UL))))

/******************************************************************************************
*********************************** * 4 SYSEXCIC *********************************************
******************************************************************************************/
#define SYSEXC_BITBANDING_SYSEXCIC    ((BITBANDING_SYSEXCIC_TypeDef*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL)))

#define SYSEXC_BITBANDING_SYSEXCIC_FPIDCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL) + (SYSEXC_SYSEXCIC_R_FPIDCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPDZCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL) + (SYSEXC_SYSEXCIC_R_FPDZCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPIOCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL) + (SYSEXC_SYSEXCIC_R_FPIOCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPUFCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL) + (SYSEXC_SYSEXCIC_R_FPUFCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPOFCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL) + (SYSEXC_SYSEXCIC_R_FPOFCIC_BIT * 4UL))))
#define SYSEXC_BITBANDING_SYSEXCIC_FPIXCIC    (*((volatile uint32_t*) (SYSEXC_BITBANDING_BASE + ((SYSEXC_OFFSET + SYSEXC_SYSEXCIC_OFFSET) * 32UL) + (SYSEXC_SYSEXCIC_R_FPIXCIC_BIT * 4UL))))

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_PERIPHERAL_SYSEXC_REGISTER_SYSEXC_REGISTERPERIPHERAL_BITBANDING_H_ */
