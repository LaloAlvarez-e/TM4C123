/*
 * HIB_Enum.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_

typedef enum
{
    HIB_enSTATUS_OK = 0UL,
    HIB_enSTATUS_ERROR = 1UL,
    HIB_enSTATUS_BUSY = 2UL,
    HIB_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}HIB_nSTATUS;

typedef enum
{
    HIB_enINTERRUPT_RTCALT = 0x0UL,
    HIB_enINTERRUPT_LOWBAT = 0x1UL,
    HIB_enINTERRUPT_EXTW = 0x2UL,
    HIB_enINTERRUPT_WC = 0x3UL,
    HIB_enINTERRUPT_MAX = 0x4UL,
}HIB_nINTERRUPT;

typedef enum
{
    HIB_enINT_RTCALT = 0x1UL,
    HIB_enINT_LOWBAT = 0x4UL,
    HIB_enINT_EXTW = 0x8UL,
    HIB_enINT_WC = 0x10UL,
    HIB_enINT_ALL = 0x1FUL,
    HIB_enINT_UNDEF = 0xFFFFFUL,
}HIB_nINT;

typedef enum
{
    HIB_enINT_NOOCCUR = 0UL,
    HIB_enINT_OCCUR = 1UL,
    HIB_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}HIB_nINT_STATUS;

typedef enum
{
    HIB_enPRI0 = 0UL,
    HIB_enPRI1 = 1UL,
    HIB_enPRI2 = 2UL,
    HIB_enPRI3 = 3UL,
    HIB_enPRI4 = 4UL,
    HIB_enPRI5 = 5UL,
    HIB_enPRI6 = 6UL,
    HIB_enPRI7 = 7UL,
    HIB_enPRI_MIN = 7UL,
    HIB_enDEFAULT = 0xFFFFFFFFUL,
}HIB_nPRIORITY;

typedef enum
{
    HIB_enNOREADY = 0UL,
    HIB_enREADY = 1UL,
}HIB_nREADY;

typedef enum
{
    HIB_enOSCDRIVE_12pF = 0UL,
    HIB_enOSCDRIVE_24pF = 1UL,
    HIB_enOSCDRIVE_UNDEF = 0xFFFFFFFFUL,
}HIB_nOSCDRIVE;

typedef enum
{
    HIB_enOSCBYP_INTERNAL = 0UL,
    HIB_enOSCBYP_EXTERNAL = 1UL,
    HIB_enOSCBYP_UNDEF = 0xFFFFFFFFUL,
}HIB_nOSCBYP;

typedef enum
{
    HIB_enBATCOMP_1_9V = 0UL,
    HIB_enBATCOMP_2_1V = 1UL,
    HIB_enBATCOMP_2_3V = 2UL,
    HIB_enBATCOMP_2_5V = 3UL,
    HIB_enBATCOMP_UNDEF = 0xFFFFFFFFUL,
}HIB_nBATCOMP;

typedef enum
{
    HIB_enBATCHECK_INIT = 1UL,
    HIB_enBATCHECK_UNDEF = 0xFFFFFFFFUL,
}HIB_nBATCHECK;

typedef enum
{
    HIB_enBATCHECK_STATUS_READY = 0UL,
    HIB_enBATCHECK_STATUS_BUSY = 1UL,
    HIB_enBATCHECK_STATUS_UNDEF = 0xFFFFFFFFUL,
}HIB_nBATCHECK_STATUS;
typedef enum
{
    HIB_enBATWAKE_DIS = 0UL,
    HIB_enBATWAKE_ENA = 1UL,
    HIB_enBATWAKE_UNDEF = 0xFFFFFFFFUL,
}HIB_nBATWAKE;

typedef enum
{
    HIB_enVDD3ON_EXTERNAL = 0UL,
    HIB_enVDD3ON_INTERNAL = 1UL,
    HIB_enVDD3ON_UNDEF = 0xFFFFFFFFUL,
}HIB_nVDD3ON;

typedef enum
{
    HIB_enVABORT_ALWAYS = 0UL,
    HIB_enVABORT_LOWVOLT = 1UL,
    HIB_enVABORT_UNDEF = 0xFFFFFFFFUL,
}HIB_nVABORT;

typedef enum
{
    HIB_enCLOCK_DIS = 0UL,
    HIB_enCLOCK_ENA = 1UL,
    HIB_enCLOCK_UNDEF = 0xFFFFFFFFUL,
}HIB_nCLOCK;

typedef enum
{
    HIB_enPINWAKE_DIS = 0UL,
    HIB_enPINWAKE_ENA = 1UL,
    HIB_enPINWAKE_UNDEF = 0xFFFFFFFFUL,
}HIB_nPINWAKE;

typedef enum
{
    HIB_enRTCWAKE_DIS = 0UL,
    HIB_enRTCWAKE_ENA = 1UL,
    HIB_enRTCWAKE_UNDEF = 0xFFFFFFFFUL,
}HIB_nRTCWAKE;

typedef enum
{
    HIB_enREQUEST_NO = 0UL,
    HIB_enREQUEST_INIT = 1UL,
    HIB_enREQUEST_UNDEF = 0xFFFFFFFFUL,
}HIB_nREQUEST;

typedef enum
{
    HIB_enRTC_DIS = 0UL,
    HIB_enRTC_ENA = 1UL,
    HIB_enRTC_UNDEF = 0xFFFFFFFFUL,
}HIB_nRTC;

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_PERIPHERAL_HIB_ENUM_H_ */
