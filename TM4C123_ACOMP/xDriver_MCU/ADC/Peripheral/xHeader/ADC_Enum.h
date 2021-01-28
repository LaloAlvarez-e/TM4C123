/**
 *
 * @file ADC_Enum.h
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
 * @verbatim 26 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_
#define XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef enum
{
    ADC_enOK = 0U,
    ADC_enERROR = 1U,
}ADC_nSTATUS;

typedef enum
{
    ADC_enNOREADY = 0U,
    ADC_enREADY = 1U,
}ADC_nREADY;

typedef enum
{
    ADC_enMODULE_0 = 0U,
    ADC_enMODULE_1 = 1U,
    ADC_enMODULE_MAX = 2U,
}ADC_nMODULE;

typedef enum
{
    ADC_enSTATE_IDLE = 0U,
    ADC_enSTATE_BUSY = 1U,
    ADC_enSTATE_UNDEF = 0xFFFFFFFFU,
}ADC_nSTATE;

typedef enum
{
    ADC_enPRI0=0U,
    ADC_enPRI1=1U,
    ADC_enPRI2=2U,
    ADC_enPRI3=3U,
    ADC_enPRI4=4U,
    ADC_enPRI5=5U,
    ADC_enPRI6=6U,
    ADC_enPRI7=7U,
    ADC_enDEFAULT=0xFFFFFFFFU,
}ADC_nPRIORITY;

typedef enum
{
    ADC_enSEQ_0 = 0U,
    ADC_enSEQ_1 = 1U,
    ADC_enSEQ_2 = 2U,
    ADC_enSEQ_3 = 3U,
    ADC_enSEQ_MAX = 4U,
    ADC_enSEQ_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQUENCER;

typedef enum
{
    ADC_enSEQMASK_0 = 0x1U,
    ADC_enSEQMASK_1 = 0x2U,
    ADC_enSEQMASK_2 = 0x4U,
    ADC_enSEQMASK_3 = 0x8U,
    ADC_enSEQMASK_MAX = 0xFU,
    ADC_enSEQMASK_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQMASK;

typedef enum
{
    ADC_enSEQ_SOURCE_SAMPLE= 0x1U,
    ADC_enSEQ_SOURCE_COMP = 0x10000U,
    ADC_enSEQ_SOURCE_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_SOURCE;

typedef enum
{
    ADC_enINT_SOURCE_SAMPLE= 0x0U,
    ADC_enINT_SOURCE_COMP = 0x1U,
    ADC_en_SOURCE_UNDEF = 0xFFFFFFFFU,
}ADC_nINT_SOURCE;

typedef enum
{
    ADC_enSEQ_ENABLE_DIS = 0U,
    ADC_enSEQ_ENABLE_ENA = 1U,
    ADC_enSEQ_ENABLE_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_ENABLE;

typedef enum
{
    ADC_enSEQ_INT_STATUS_NOOCCUR        =0U,
    ADC_enSEQ_INT_SAMPLE_OCCUR          =1U,
    ADC_enSEQ_INT_SAMPLE_CLEAR          =1U,
    ADC_enSEQ_INT_COMP_OCCUR          =0x10000U,
    ADC_enSEQ_INT_COMP_CLEAR          =0x10000U,
    ADC_enSEQ_INT_STATUS_UNDEF   =0xFFFFFFFFU,
}ADC_nSEQ_INT_STATUS;

typedef enum
{
    ADC_enSEQ_INT_SAMPLE_DIS = 0x0U,
    ADC_enSEQ_INT_SAMPLE_ENA = 0x1U,
    ADC_enSEQ_INT_COMP_DIS = 0x00000U,
    ADC_enSEQ_INT_COMP_ENA = 0x10000U,
    ADC_enSEQ_INT_SOURCE_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INT_SOURCE;

typedef enum
{
    ADC_enSEQ_OV_NOOCCUR = 0U,
    ADC_enSEQ_OV_OCCUR = 1U,
    ADC_enSEQ_OV_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_OV;

typedef enum
{
    ADC_enSEQ_TRIGGER_SOFTWARE= 0U,
    ADC_enSEQ_TRIGGER_ANALOG_COMP0 = 1U,
    ADC_enSEQ_TRIGGER_ANALOG_COMP1 = 2U,
    ADC_enSEQ_TRIGGER_GPIO = 4U,
    ADC_enSEQ_TRIGGER_TIMER = 5U,
    ADC_enSEQ_TRIGGER_PWM0 = 6U,
    ADC_enSEQ_TRIGGER_PWM1 = 7U,
    ADC_enSEQ_TRIGGER_PWM2 = 8U,
    ADC_enSEQ_TRIGGER_PWM3 = 9U,
    ADC_enSEQ_TRIGGER_CONTINUE = 15U,
    ADC_enSEQ_TRIGGER_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_TRIGGER;

typedef enum
{
    ADC_enSEQ_UV_NOOCCUR = 0U,
    ADC_enSEQ_UV_OCCUR = 1U,
    ADC_enSEQ_UV_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_UV;

typedef enum
{
    ADC_enSEQ_PWM_MODULE0= 0U,
    ADC_enSEQ_PWM_MODULE1 = 1U,
    ADC_enSEQ_PWM_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_PWM;

typedef enum
{
    ADC_enSEQ_PRIORITY_HIGH = 0U,
    ADC_enSEQ_PRIORITY_MEDIUM = 1U,
    ADC_enSEQ_PRIORITY_LOW = 2U,
    ADC_enSEQ_PRIORITY_VERY_LOW = 3U,
    ADC_enSEQ_PRIORITY_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_PRIORITY;

typedef enum
{
    ADC_enGLOBAL_SYNC_NOEFFECT        =0U,
    ADC_enGLOBAL_SYNC_INIT       =1U,
    ADC_enGLOBAL_SYNC_UNDEF   =0xFFFFFFFFU,
}ADC_nGLOBAL_SYNC;

typedef enum
{
    ADC_enPHASE_0 = 0U,
    ADC_enPHASE_22_5 = 1U,
    ADC_enPHASE_45 = 2U,
    ADC_enPHASE_67_5 = 3U,
    ADC_enPHASE_90 = 4U,
    ADC_enPHASE_112_5 = 5U,
    ADC_enPHASE_135 = 6U,
    ADC_enPHASE_157_5 = 7U,
    ADC_enPHASE_180 = 8U,
    ADC_enPHASE_202_5 = 9U,
    ADC_enPHASE_225 = 10U,
    ADC_enPHASE_247_5 = 11U,
    ADC_enPHASE_270 = 12U,
    ADC_enPHASE_292_5 = 13U,
    ADC_enPHASE_315 = 14U,
    ADC_enPHASE_337_5 = 15U,
    ADC_enPHASE_UNDEF = 0xFFFFFFFFU,
}ADC_nPHASE;

typedef enum
{
    ADC_enSYNC_DISABLE        =0U,
    ADC_enSYNC_ENABLE          =1U,
    ADC_enSYNC_UNDEF   =0xFFFFFFFFU,
}ADC_nSYNC;

typedef enum
{
    ADC_enSEQ_SAMPLE_NOEFFECT = 0U,
    ADC_enSEQ_SAMPLE_START = 1U,
    ADC_enSEQ_SAMPLE_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_SAMPLE;

typedef enum
{
    ADC_enAVERAGE_DIS = 0U,
    ADC_enAVERAGE_2 = 1U,
    ADC_enAVERAGE_4 = 2U,
    ADC_enAVERAGE_8= 3U,
    ADC_enAVERAGE_16= 4U,
    ADC_enAVERAGE_32 = 5U,
    ADC_enAVERAGE_64= 6U,
    ADC_enAVERAGE_UNDEF = 0xFFFFFFFFU,
}ADC_nAVERAGE;

typedef enum
{
    ADC_enSAMPLE_RATE_125KSPS= 1U,
    ADC_enSAMPLE_RATE_250KSPS = 3U,
    ADC_enSAMPLE_RATE_500KSPS = 5U,
    ADC_enSAMPLE_RATE_1MSPS = 7U,
    ADC_enSAMPLE_RATE_UNDEF = 0xFFFFFFFFU,
}ADC_nSAMPLE_RATE;

typedef enum
{
    ADC_enCLOCK_PLL= 0U,
    ADC_enCLOCK_PIOSC = 1U,
    ADC_enCLOCK_UNDEF = 0xFFFFFFFFU,
}ADC_nCLOCK;

typedef enum
{
    ADC_en_MUX_0 = 0U,
    ADC_en_MUX_1 = 1U,
    ADC_en_MUX_2 = 2U,
    ADC_en_MUX_3 = 3U,
    ADC_en_MUX_4 = 4U,
    ADC_en_MUX_5 = 5U,
    ADC_en_MUX_6 = 6U,
    ADC_en_MUX_7 = 7U,
    ADC_en_MUX_MAX = 7U,
    ADC_en_MUX_UNDEF = 0xFFFFFFFFU,
}ADC_nMUX;

typedef enum
{
    ADC_en_COMPARATOR_0 = 0U,
    ADC_en_COMPARATOR_1 = 1U,
    ADC_en_COMPARATOR_2 = 2U,
    ADC_en_COMPARATOR_3 = 3U,
    ADC_en_COMPARATOR_4 = 4U,
    ADC_en_COMPARATOR_5 = 5U,
    ADC_en_COMPARATOR_6 = 6U,
    ADC_en_COMPARATOR_7 = 7U,
    ADC_en_COMPARATOR_MAX = 7U,
    ADC_en_COMPARATOR_UNDEF = 0xFFFFFFFFU,
}ADC_nCOMPARATOR;

typedef enum
{
    ADC_en_COMPMASK_0 = 0x1U,
    ADC_en_COMPMASK_1 = 0x2U,
    ADC_en_COMPMASK_2 = 0x4U,
    ADC_en_COMPMASK_3 = 0x8U,
    ADC_en_COMPMASK_4 = 0x10U,
    ADC_en_COMPMASK_5 = 0x20U,
    ADC_en_COMPMASK_6 = 0x40U,
    ADC_en_COMPMASK_7 = 0x80U,
    ADC_en_COMPMASK_MAX = 0xFFU,
    ADC_en_COMPMASK_UNDEF = 0xFFFFFFFFU,
}ADC_nCOMPMASK;

typedef enum
{
    ADC_enCOMP_INT_NOOCCUR        =0U,
    ADC_enCOMP_INT_OCCUR          =1U,
    ADC_enCOMP_INT_CLEAR          =1U,
    ADC_enCOMP_INT_STATUS_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_INT_STATUS;

typedef enum
{
    ADC_enDITHER_DIS = 0U,
    ADC_enDITHER_EN = 1U,
    ADC_enDITHER_UNDEF = 0xFFFFFFFFU,
}ADC_nDITHER;

typedef enum
{
    ADC_enSEQ_SAMPLE_INPUT_0 = 0U,
    ADC_enSEQ_SAMPLE_INPUT_1 = 1U,
    ADC_enSEQ_SAMPLE_INPUT_2 = 2U,
    ADC_enSEQ_SAMPLE_INPUT_3 = 3U,
    ADC_enSEQ_SAMPLE_INPUT_4 = 4U,
    ADC_enSEQ_SAMPLE_INPUT_5 = 5U,
    ADC_enSEQ_SAMPLE_INPUT_6 = 6U,
    ADC_enSEQ_SAMPLE_INPUT_7 = 7U,
    ADC_enSEQ_SAMPLE_INPUT_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_SAMPLE_INPUT;

typedef enum
{
    ADC_enSEQ_INPUT_0 = 0U,
    ADC_enSEQ_INPUT_1 = 1U,
    ADC_enSEQ_INPUT_2 = 2U,
    ADC_enSEQ_INPUT_3 = 3U,
    ADC_enSEQ_INPUT_4 = 4U,
    ADC_enSEQ_INPUT_5 = 5U,
    ADC_enSEQ_INPUT_6 = 6U,
    ADC_enSEQ_INPUT_7 = 7U,
    ADC_enSEQ_INPUT_8 = 8U,
    ADC_enSEQ_INPUT_9 = 9U,
    ADC_enSEQ_INPUT_10 = 10U,
    ADC_enSEQ_INPUT_11 = 11U,
    ADC_enSEQ_INPUT_MAX = 11U,
    ADC_enSEQ_INPUT_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT;

typedef enum
{
    ADC_enSEQ_INPUT_GPIO_PE3 = (uint32_t)GPIO_enAIN0,
    ADC_enSEQ_INPUT_GPIO_PE2 = (uint32_t)GPIO_enAIN1,
    ADC_enSEQ_INPUT_GPIO_PE1 = (uint32_t)GPIO_enAIN2,
    ADC_enSEQ_INPUT_GPIO_PE0 = (uint32_t)GPIO_enAIN3,
    ADC_enSEQ_INPUT_GPIO_PD3 = (uint32_t)GPIO_enAIN4,
    ADC_enSEQ_INPUT_GPIO_PD2 = (uint32_t)GPIO_enAIN5,
    ADC_enSEQ_INPUT_GPIO_PD1 = (uint32_t)GPIO_enAIN6,
    ADC_enSEQ_INPUT_GPIO_PD0 = (uint32_t)GPIO_enAIN7,
    ADC_enSEQ_INPUT_GPIO_PE5 = (uint32_t)GPIO_enAIN8,
    ADC_enSEQ_INPUT_GPIO_PE4 = (uint32_t)GPIO_enAIN9,
    ADC_enSEQ_INPUT_GPIO_PB4 = (uint32_t)GPIO_enAIN10,
    ADC_enSEQ_INPUT_GPIO_PB5 = (uint32_t)GPIO_enAIN11,
    ADC_enSEQ_INPUT_GPIO_EXP_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_GPIO_EXP;

typedef enum
{
    ADC_enSEQ_INPUT_GPIO_0 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PE3,
    ADC_enSEQ_INPUT_GPIO_1 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PE2,
    ADC_enSEQ_INPUT_GPIO_2 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PE1,
    ADC_enSEQ_INPUT_GPIO_3 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PE0,
    ADC_enSEQ_INPUT_GPIO_4 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PD3,
    ADC_enSEQ_INPUT_GPIO_5 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PD2,
    ADC_enSEQ_INPUT_GPIO_6 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PD1,
    ADC_enSEQ_INPUT_GPIO_7 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PD0,
    ADC_enSEQ_INPUT_GPIO_8 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PE5,
    ADC_enSEQ_INPUT_GPIO_9 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PE4,
    ADC_enSEQ_INPUT_GPIO_10 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PB4,
    ADC_enSEQ_INPUT_GPIO_11 = (uint32_t)ADC_enSEQ_INPUT_GPIO_PB5,
    ADC_enSEQ_INPUT_GPIO_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_GPIO;

typedef enum
{
    ADC_enSEQ_INPUT_DIFF_DIS = 0U,
    ADC_enSEQ_INPUT_DIFF_EN = 1U,
    ADC_enSEQ_INPUT_DIFF_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_DIFF;

typedef enum
{
    ADC_enSEQ_INPUT_ENDED_DIS = 0U,
    ADC_enSEQ_INPUT_ENDED_EN = 1U,
    ADC_enSEQ_INPUT_ENDED_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_ENDED;

typedef enum
{
    ADC_enSEQ_INPUT_INT_DIS = 0U,
    ADC_enSEQ_INPUT_INT_EN = 1U,
    ADC_enSEQ_INPUT_INT_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_INT;

typedef enum
{
    ADC_enSEQ_INPUT_TEMP_DIS = 0U,
    ADC_enSEQ_INPUT_TEMP_EN = 1U,
    ADC_enSEQ_INPUT_TEMP_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_TEMP;

typedef enum
{
    ADC_enSEQ_FIFO_FULL = 0U,
    ADC_enSEQ_FIFO_EMPTY = 1U,
    ADC_enSEQ_FIFO_VALUES= 2U,
    ADC_enSEQ_FIFO_INT_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_FIFO;

typedef enum
{
    ADC_enSEQ_INPUT_DIR_SAMPLE = 0U,
    ADC_enSEQ_INPUT_DIR_COMP = 1U,
    ADC_enSEQ_INPUT_DIR_UNDEF = 0xFFFFFFFFU,
}ADC_nSEQ_INPUT_DIR;

typedef enum
{
    ADC_enCOMP_RESET_NA         =0U,
    ADC_enCOMP_RESET_TRIGGER    =1U,
    ADC_enCOMP_RESET_INTERRUPT    =1U,
    ADC_enCOMP_RESET_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_RESET;

typedef enum
{
    ADC_enCOMP_TRIGGER_DIS         =0U,
    ADC_enCOMP_TRIGGER_ENA    =1U,
    ADC_enCOMP_TRIGGER_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_TRIGGER;

typedef enum
{
    ADC_enCOMP_TRIGGER_COND_LOW         =0U,
    ADC_enCOMP_TRIGGER_COND_MID    =1U,
    ADC_enCOMP_TRIGGER_COND_HIGH    =3U,
    ADC_enCOMP_TRIGGER_COND_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_TRIGGER_COND;

typedef enum
{
    ADC_enCOMP_TRIGGER_MODE_ALWAYS         =0U,
    ADC_enCOMP_TRIGGER_MODE_ONCE   =1U,
    ADC_enCOMP_TRIGGER_MODE_HYST_ONCE    =2U,
    ADC_enCOMP_TRIGGER_MODE_HYST_ALWAYS    =3U,
    ADC_enCOMP_TRIGGER_MODE_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_TRIGGER_MODE;

typedef enum
{
    ADC_enCOMP_INT_DIS         =0U,
    ADC_enCOMP_INT_ENA    =1U,
    ADC_enCOMP_INT_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_INT;

typedef enum
{
    ADC_enCOMP_INT_COND_LOW         =0U,
    ADC_enCOMP_INT_COND_MID    =1U,
    ADC_enCOMP_INT_COND_HIGH    =3U,
    ADC_enCOMP_INT_COND_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_INT_COND;

typedef enum
{
    ADC_enCOMP_INT_MODE_ALWAYS         =0U,
    ADC_enCOMP_INT_MODE_ONCE   =1U,
    ADC_enCOMP_INT_MODE_HYST_ONCE    =2U,
    ADC_enCOMP_INT_MODE_HYST_ALWAYS    =3U,
    ADC_enCOMP_INT_MODE_UNDEF   =0xFFFFFFFFU,
}ADC_nCOMP_INT_MODE;


typedef struct
{
    ADC_nSEQ_INPUT enInput;
    ADC_nSEQ_INPUT_DIFF enDifferential;
    ADC_nSEQ_INPUT_ENDED enEnded;
    ADC_nSEQ_INPUT_INT enInterrupt;
    ADC_nSEQ_INPUT_TEMP enTempSensor;
    ADC_nSEQ_INPUT_DIR enDirection;
    ADC_nCOMPARATOR enComparator;
}ADC_SAMPLE_CONFIG_Typedef;

#endif /* XDRIVER_MCU_ADC_PERIPHERAL_XHEADER_ADC_ENUM_H_ */
