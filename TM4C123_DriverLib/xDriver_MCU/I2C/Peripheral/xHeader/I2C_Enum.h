/**
 *
 * @file I2C_Enum.h
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
 * @verbatim 3 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_
#define XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_

#include <xUtils/Standard/Standard.h>

typedef enum
{
    I2C_enSTATUS_OK = 0UL,
    I2C_enSTATUS_ERROR = 1UL,
    I2C_enSTATUS_UNDEF = 0xFFFFFFFFUL,
}I2C_nSTATUS;

typedef enum
{
    I2C_enNOREADY = 0UL,
    I2C_enREADY = 1UL,
}I2C_nREADY;

typedef enum
{
    I2C_enMODULE_0 = 0UL,
    I2C_enMODULE_1 = 1UL,
    I2C_enMODULE_2 = 2UL,
    I2C_enMODULE_3 = 3UL,
    I2C_enMODULE_MAX = 4UL,
}I2C_nMODULE;

typedef enum
{
    I2C_enPRI0 = 0UL,
    I2C_enPRI1 = 1UL,
    I2C_enPRI2 = 2UL,
    I2C_enPRI3 = 3UL,
    I2C_enPRI4 = 4UL,
    I2C_enPRI5 = 5UL,
    I2C_enPRI6 = 6UL,
    I2C_enPRI7 = 7UL,
    I2C_enDEFAULT = 0xFFFFFFFFUL,
}I2C_nPRIORITY;

typedef enum
{
    I2C_enMASTER_INTERRUPT_MASTER = 0UL,
    I2C_enMASTER_INTERRUPT_CLOCK_TIMEOUT = 1UL,
    I2C_enMASTER_INTERRUPT_MAX = 2UL,
}I2C_nMASTER_INTERRUPT;

typedef enum
{
    I2C_enMASTER_INT_SOURCE_MASTER = 0x1UL,
    I2C_enMASTER_INT_SOURCE_CLOCK_TIMEOUT = 0x2UL,
    I2C_enMASTER_INT_SOURCE_ALL = 0x3UL,
}I2C_nMASTER_INT_SOURCE;

typedef enum
{
    I2C_enSLAVE_INTERRUPT_DATA = 0UL,
    I2C_enSLAVE_INTERRUPT_START = 1UL,
    I2C_enSLAVE_INTERRUPT_STOP = 2UL,
    I2C_enSLAVE_INTERRUPT_MAX = 3UL,
}I2C_nSLAVE_INTERRUPT;

typedef enum
{
    I2C_enSLAVE_INT_SOURCE_DATA = 0x1UL,
    I2C_enSLAVE_INT_SOURCE_START = 0x2UL,
    I2C_enSLAVE_INT_SOURCE_STOP = 0x4UL,
    I2C_enSLAVE_INT_SOURCE_ALL = 0x7UL,
}I2C_nSLAVE_INT_SOURCE;

typedef enum
{
    I2C_enINT_NOOCCUR = 0UL,
    I2C_enINT_OCCUR = 1UL,
    I2C_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
} I2C_nINT_STATUS;


typedef enum
{
    I2C_enBUSY_IDLE = 0UL,
    I2C_enBUSY_BUSY = 1UL,
    I2C_enBUSY_UNDEF = 0xFFFFFFFFUL,
}I2C_nBUSY;

typedef enum
{
    I2C_enIDLE_BUSY = 0UL,
    I2C_enIDLE_IDLE = 1UL,
    I2C_enIDLE_UNDEF = 0xFFFFFFFFUL,
}I2C_nIDLE;

typedef enum
{
    I2C_enARBITRATION_WON = 0UL,
    I2C_enARBITRATION_LOST = 1UL,
    I2C_enARBITRATION_UNDEF = 0xFFFFFFFFUL,
}I2C_nARBITRATION;

typedef enum
{
    I2C_enMODE_NONE = 0x0UL,
    I2C_enMODE_LOOPBACK = 0x1UL,
    I2C_enMODE_MASTER = 0x10UL,
    I2C_enMODE_LOOPBACK_MASTER = 0x11UL,
    I2C_enMODE_SLAVE = 0x20UL,
    I2C_enMODE_LOOPBACK_SLAVE = 0x21UL,
    I2C_enMODE_MASTER_SLAVE = 0x30UL,
    I2C_enMODE_LOOPBACK_MASTER_SLAVE = 0x31UL,
    I2C_enMODE_UNDEF = 0xFFFFFFFFUL,
} I2C_nMODE;

typedef enum
{
    I2C_enGLITCH_DIS = 0UL,
    I2C_enGLITCH_ENA = 1UL,
    I2C_enGLITCH_UNDEF = 0xFFFFFFFFUL,
} I2C_nGLITCH;

typedef enum
{
    I2C_enGLITCH_CLOCK_BYPASS = 0UL,
    I2C_enGLITCH_CLOCK_1 = 1UL,
    I2C_enGLITCH_CLOCK_2 = 2UL,
    I2C_enGLITCH_CLOCK_3 = 3UL,
    I2C_enGLITCH_CLOCK_4 = 4UL,
    I2C_enGLITCH_CLOCK_8 = 5UL,
    I2C_enGLITCH_CLOCK_16 = 6UL,
    I2C_enGLITCH_CLOCK_31 = 7UL,
    I2C_enGLITCH_CLOCK_UNDEF = 0xFFFFFFFFUL,
} I2C_nGLITCH_CLOCK;

typedef enum
{
    I2C_enLINE_SCL= 0UL,
    I2C_enLINE_SDA = 1UL,
    I2C_enLINE_UNDEF = 0xFFFFFFFFUL,
} I2C_nLINE;

typedef enum
{
    I2C_enLINE_STATE_LOW = 0UL,
    I2C_enLINE_STATE_HIGH = 1UL,
    I2C_enLINE_STATE_UNDEF = 0xFFFFFFFFUL,
} I2C_nLINE_STATE;

typedef enum
{
    I2C_enOPERATION_TRANSMIT = 0UL,
    I2C_enOPERATION_RECEIVE = 1UL,
    I2C_enOPERATION_UNDEF = 0xFFFFFFFFUL,
} I2C_nOPERATION;

typedef enum
{
    I2C_enHIGHSPEED_DIS = 0UL,
    I2C_enHIGHSPEED_ENA = 1UL,
    I2C_enHIGHSPEED_UNDEF = 0xFFFFFFFFUL,
} I2C_nHIGHSPEED;

typedef enum
{
    I2C_enMASTER_CONTROL_NONE = 0x0UL,

    I2C_enMASTER_CONTROL_RUN = 0x01UL,
    I2C_enMASTER_CONTROL_START = 0x02UL,
    I2C_enMASTER_CONTROL_RUN_START = 0x03UL,
    I2C_enMASTER_CONTROL_STOP = 0x04UL,
    I2C_enMASTER_CONTROL_RUN_STOP = 0x05UL,
    I2C_enMASTER_CONTROL_START_STOP = 0x06UL,
    I2C_enMASTER_CONTROL_RUN_START_STOP = 0x07UL,
    I2C_enMASTER_CONTROL_ACK = 0x08UL,
    I2C_enMASTER_CONTROL_RUN_ACK = 0x09UL,
    I2C_enMASTER_CONTROL_START_ACK = 0x0AUL,
    I2C_enMASTER_CONTROL_RUN_START_ACK = 0x0BUL,
    I2C_enMASTER_CONTROL_STOP_ACK = 0x0CUL,
    I2C_enMASTER_CONTROL_RUN_STOP_ACK = 0x0DUL,
    I2C_enMASTER_CONTROL_START_STOP_ACK = 0x0EUL,
    I2C_enMASTER_CONTROL_RUN_START_STOP_ACK = 0x0FUL,

    I2C_enMASTER_CONTROL_RUN_HS = 0x11UL,
    I2C_enMASTER_CONTROL_START_HS = 0x12UL,
    I2C_enMASTER_CONTROL_RUN_START_HS = 0x13UL,
    I2C_enMASTER_CONTROL_STOP_HS = 0x14UL,
    I2C_enMASTER_CONTROL_RUN_STOP_HS = 0x15UL,
    I2C_enMASTER_CONTROL_START_STOP_HS = 0x16UL,
    I2C_enMASTER_CONTROL_RUN_START_STOP_HS = 0x17UL,
    I2C_enMASTER_CONTROL_ACK_HS = 0x18UL,
    I2C_enMASTER_CONTROL_RUN_ACK_HS = 0x19UL,
    I2C_enMASTER_CONTROL_START_ACK_HS = 0x1AUL,
    I2C_enMASTER_CONTROL_RUN_START_ACK_HS = 0x1BUL,
    I2C_enMASTER_CONTROL_STOP_ACK_HS = 0x1CUL,
    I2C_enMASTER_CONTROL_RUN_STOP_ACK_HS = 0x1DUL,
    I2C_enMASTER_CONTROL_START_STOP_ACK_HS = 0x1EUL,
    I2C_enMASTER_CONTROL_RUN_START_STOP_ACK_HS = 0x1FUL,

    I2C_enMASTER_CONTROL_UNDEF = 0xFFFFFFFFUL,
} I2C_nMASTER_CONTROL;

typedef enum
{
    I2C_enMULTIMASTER_DIS = 0UL,
    I2C_enMULTIMASTER_ENA = 1UL,
    I2C_enMULTIMASTER_UNDEF = 0xFFFFFFFFUL,
} I2C_nMULTIMASTER;

typedef enum
{
    I2C_enSTOPCONDITION_DIS = 0UL,
    I2C_enSTOPCONDITION_ENA = 1UL,
    I2C_enSTOPCONDITION_UNDEF = 0xFFFFFFFFUL,
} I2C_nSTOPCONDITION;

typedef enum
{
    I2C_enALT_ADDRESS_DIS = 0UL,
    I2C_enALT_ADDRESS_ENA = 1UL,
    I2C_enALT_ADDRESS_UNDEF = 0xFFFFFFFFUL,
} I2C_nALT_ADDRESS;

typedef enum
{
    I2C_enACK_ENABLE_DIS = 0UL,
    I2C_enACK_ENABLE_ENA = 1UL,
    I2C_enACK_ENABLE_UNDEF = 0xFFFFFFFFUL,
} I2C_nACK_ENABLE;


typedef enum
{
    I2C_enACK_ACK = 0UL,
    I2C_enACK_NACK = 1UL,
    I2C_enACK_UNDEF = 0xFFFFFFFFUL,
} I2C_nACK;

typedef enum
{
    I2C_enSLAVE_ENABLE_DIS = 0UL,
    I2C_enSLAVE_ENABLE_ENA = 1UL,
    I2C_enSLAVE_ENABLE_UNDEF = 0xFFFFFFFFUL,
} I2C_nSLAVE_ENABLE;

typedef enum
{
    I2C_enSLAVE_REQUEST_NONE = 0x0UL,
    I2C_enSLAVE_REQUEST_RECEIVE = 0x1UL,
    I2C_enSLAVE_REQUEST_TRANSMIT = 0x2UL,
    I2C_enSLAVE_REQUEST_RECEIVE_TRANSMIT = 0x3UL,
    I2C_enSLAVE_REQUEST_FIRSTBYTE = 0x4UL,
    I2C_enSLAVE_REQUEST_RECEIVE_FIRSTBYTE = 0x5UL,
    I2C_enSLAVE_REQUEST_TRANSMIT_FIRSTBYTE = 0x6UL,
    I2C_enSLAVE_REQUEST_RECEIVE_TRANSMIT_FIRSTBYTE = 0x7UL,
    I2C_enSLAVE_REQUEST_ALTADDRESS = 0x8UL,
    I2C_enSLAVE_REQUEST_RECEIVE_ALTADDRESS = 0x9UL,
    I2C_enSLAVE_REQUEST_TRANSMIT_ALTADDRESS = 0xAUL,
    I2C_enSLAVE_REQUEST_RECEIVE_TRANSMIT_ALTADDRESS = 0xBUL,
    I2C_enSLAVE_REQUEST_FIRSTBYTE_ALTADDRESS = 0xCUL,
    I2C_enSLAVE_REQUEST_RECEIVE_FIRSTBYTE_ALTADDRESS = 0xDUL,
    I2C_enSLAVE_REQUEST_TRANSMIT_FIRSTBYTE_ALTADDRESS = 0xEUL,
    I2C_enSLAVE_REQUEST_RECEIVE_TRANSMIT_FIRSTBYTE_ALTADDRESS = 0xFUL,
    I2C_enSLAVE_REQUEST_UNDEF = 0xFFFFFFFFUL,
} I2C_nSLAVE_REQUEST;

typedef enum
{
    I2C_enSLAVE_REQUEST_STATUS_NORECEIVED = 0UL,
    I2C_enSLAVE_REQUEST_STATUS_RECEIVED = 1UL,
    I2C_enSLAVE_REQUEST_STATUS_UNDEF = 0xFFFFFFFFUL,
}I2C_nSLAVE_REQUEST_STATUS;

#endif /* XDRIVER_MCU_I2C_PERIPHERAL_XHEADER_I2C_ENUM_H_ */
