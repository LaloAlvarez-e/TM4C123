/*
 * FLASH_WriteMulti.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEMULTI_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEMULTI_H_


#include <stdint.h>
#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Peripheral/FLASH_Enum.h>
#if defined ( __TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWriteMultiWorld         , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiHalfWorld     , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiByte          , ".ramcode")


FLASH_nSTATUS FLASH__enWriteMultiWorld(const uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(const uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiByte(const uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count);


#elif defined ( __GNUC__ )



FLASH_nSTATUS FLASH__enWriteMultiWorld(const uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(const uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteMultiByte(const uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
#endif



#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEMULTI_H_ */
