/**
 *
 * @file TIMER_RegisterDefines_Standard_32_RIS.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_GPTMRIS_R_TATORIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_R_TATORIS_BIT    (0UL)
#define GPTM_GPTMRIS_R_TATORIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_TATORIS_ACTIVE    ((uint32_t) 0x00000001UL)

#define GPTM_GPTMRIS_TATORIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_TATORIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_TATORIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_CAMRIS_MASK    ((uint32_t) 0x00000002UL)
#define GPTM_GPTMRIS_R_CAMRIS_BIT    (1UL)
#define GPTM_GPTMRIS_R_CAMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_CAMRIS_ACTIVE    ((uint32_t) 0x00000002UL)

#define GPTM_GPTMRIS_CAMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_CAMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_CAMRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_CAERIS_MASK    ((uint32_t) 0x00000004UL)
#define GPTM_GPTMRIS_R_CAERIS_BIT    (2UL)
#define GPTM_GPTMRIS_R_CAERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_CAERIS_ACTIVE    ((uint32_t) 0x00000004UL)

#define GPTM_GPTMRIS_CAERIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_CAERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_CAERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_RTCRIS_MASK    ((uint32_t) 0x00000008UL)
#define GPTM_GPTMRIS_R_RTCRIS_BIT    (3UL)
#define GPTM_GPTMRIS_R_RTCRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_RTCRIS_ACTIVE    ((uint32_t) 0x00000008UL)

#define GPTM_GPTMRIS_RTCRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_RTCRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_RTCRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_TAMRIS_MASK    ((uint32_t) 0x00000010UL)
#define GPTM_GPTMRIS_R_TAMRIS_BIT    (4UL)
#define GPTM_GPTMRIS_R_TAMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_TAMRIS_ACTIVE    ((uint32_t) 0x00000010UL)

#define GPTM_GPTMRIS_TAMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_TAMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_TAMRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_TBTORIS_MASK    ((uint32_t) 0x00000100UL)
#define GPTM_GPTMRIS_R_TBTORIS_BIT    (8UL)
#define GPTM_GPTMRIS_R_TBTORIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_TBTORIS_ACTIVE    ((uint32_t) 0x00000100UL)

#define GPTM_GPTMRIS_TBTORIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_TBTORIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_TBTORIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_CBMRIS_MASK    ((uint32_t) 0x00000200UL)
#define GPTM_GPTMRIS_R_CBMRIS_BIT    (9UL)
#define GPTM_GPTMRIS_R_CBMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_CBMRIS_ACTIVE    ((uint32_t) 0x00000200UL)

#define GPTM_GPTMRIS_CBMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_CBMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_CBMRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_CBERIS_MASK    ((uint32_t) 0x00000400UL)
#define GPTM_GPTMRIS_R_CBERIS_BIT    (10UL)
#define GPTM_GPTMRIS_R_CBERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_CBERIS_ACTIVE    ((uint32_t) 0x00000400UL)

#define GPTM_GPTMRIS_CBERIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_CBERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_CBERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_TBMRIS_MASK    ((uint32_t) 0x00000800UL)
#define GPTM_GPTMRIS_R_TBMRIS_BIT    (11UL)
#define GPTM_GPTMRIS_R_TBMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_TBMRIS_ACTIVE    ((uint32_t) 0x00000800UL)

#define GPTM_GPTMRIS_TBMRIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_TBMRIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_TBMRIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_GPTMRIS_R_WUERIS_MASK    ((uint32_t) 0x00010000UL)
#define GPTM_GPTMRIS_R_WUERIS_BIT    (16UL)
#define GPTM_GPTMRIS_R_WUERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_R_WUERIS_ACTIVE    ((uint32_t) 0x00010000UL)

#define GPTM_GPTMRIS_WUERIS_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_GPTMRIS_WUERIS_NOACTIVE    ((uint32_t) 0x00000000UL)
#define GPTM_GPTMRIS_WUERIS_ACTIVE    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_RIS_H_ */
