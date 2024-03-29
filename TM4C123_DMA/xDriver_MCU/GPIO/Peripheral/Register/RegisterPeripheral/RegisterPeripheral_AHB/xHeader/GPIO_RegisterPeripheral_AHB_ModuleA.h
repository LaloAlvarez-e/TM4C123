/**
 *
 * @file GPIO_RegisterPeripheral_AHB_ModuleA.h
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
 * @verbatim 25 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEA_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEA_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/xHeader/GPIO_RegisterAddress.h>
#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructPeripheral.h>

#define GPIOA_AHB               (((GPIO_TypeDef*)(GPIOA_AHB_BASE)))
#define GPIOA_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOA_AHB_BASE)))

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/
/* GPIOA AHB DATA*/
#define GPIOA_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOA_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOA_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOA_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOA_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOA AHB DIR*/
#define GPIOA_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOA_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOA AHB IS*/
#define GPIOA_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOA_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOA AHB IBE*/
#define GPIOA_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOA_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOA AHB IEV*/
#define GPIOA_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOA_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOA AHB IME*/
#define GPIOA_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOA_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOA AHB RIS*/
#define GPIOA_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOA_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOA AHB MIS*/
#define GPIOA_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOA_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOA AHB IC*/
#define GPIOA_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOA_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOA AHB AFSEL*/
#define GPIOA_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOA_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOA_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV4*/
#define GPIOA_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOA_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV8*/
#define GPIOA_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOA_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOA AHB ODE*/
#define GPIOA_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOA_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOA AHB PUE*/
#define GPIOA_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOA_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOA AHB PDE*/
#define GPIOA_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOA_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOA AHB SLR*/
#define GPIOA_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOA_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOA AHB DEN*/
#define GPIOA_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOA_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOA AHB LOCK*/
#define GPIOA_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOA_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOA AHB CR*/
#define GPIOA_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOA_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOA AHB AMSEL*/
#define GPIOA_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOA_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOA AHB PCM*/
#define GPIOA_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOA_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOA AHB ADCEN*/
#define GPIOA_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOA_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOA AHB DMAEN*/
#define GPIOA_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOA_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOA AHB PID4*/
#define GPIOA_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOA AHB PID5*/
#define GPIOA_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOA AHB PID6*/
#define GPIOA_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOA AHB PID7*/
#define GPIOA_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOA AHB PID0*/
#define GPIOA_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOA AHB PID1*/
#define GPIOA_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOA AHB PID2*/
#define GPIOA_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOA AHB PID3*/
#define GPIOA_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOA AHB CID0*/
#define GPIOA_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOA_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOA AHB CID1*/
#define GPIOA_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOA_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOA AHB CID2*/
#define GPIOA_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOA_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOA AHB CID3*/
#define GPIOA_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOA_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_MODULEA_H_ */
