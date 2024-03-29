/**
 *
 * @file SCB_Enum.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUM_H_

#include <xUtils/Standard/Standard.h>


#define SCB_FLASH_MAX ((uint32_t) 0x00010000UL)
#define SCB_VECTOR_TABLE_SIZE ((uint32_t) 0x00000100UL)

typedef enum
{
    SCB_enOK = 0UL,
    SCB_enERROR = 1UL,
}SCB_nSTATUS;

typedef enum
{
    SCB_enPRIGROUP_XXX = 0UL,
    SCB_enPRIGROUP_XXY = 1UL,
    SCB_enPRIGROUP_XYY = 2UL,
    SCB_enPRIGROUP_YYY = 3UL,
    SCB_enPRIGROUP_MAX = 4UL,
    SCB_enPRIGROUP_ERROR = 0xFFFFFFFFUL,
}SCB_nPRIGROUP;

typedef enum
{
    SCB_enNOPENDING = 0UL,
    SCB_enPENDING = 1UL,
}SCB_nPENDSTATE;

typedef enum
{
    SCB_enUCFSR_UNDEFINSTR = 0x0001UL,
    SCB_enUCFSR_INVSTATE = 0x0002UL,
    SCB_enUCFSR_INVPC = 0x0004UL,
    SCB_enUCFSR_NOCP = 0x0008UL,
    SCB_enUCFSR_UNALIGNED = 0x0100UL,
    SCB_enUCFSR_DIVBYZERO = 0x0200UL,
}SCB_nUCFSR;

typedef enum
{
    SCB_enBCFSR_IBUSERR = 0x01UL,
    SCB_enBCFSR_PRECISERR = 0x02UL,
    SCB_enBCFSR_IMPRECISERR = 0x04UL,
    SCB_enBCFSR_UNSTKERR = 0x08UL,
    SCB_enBCFSR_STKERR = 0x10UL,
    SCB_enBCFSR_LSPERR = 0x20UL,
    SCB_enBCFSR_BFARVALID = 0x80UL,
}SCB_nBCFSR;

typedef enum
{
    SCB_enMCFSR_IACCVIOL = 0x01UL,
    SCB_enMCFSR_DACCVIOL = 0x02UL,
    SCB_enMCFSR_MUNSTKERR = 0x08UL,
    SCB_enMCFSR_MSTKERR = 0x10UL,
    SCB_enMCFSR_MLSPERR = 0x20UL,
    SCB_enMCFSR_MMARVALID = 0x80UL,
}SCB_nMCFSR;

typedef enum
{
    SCB_enSHPR0 = 0UL,
    SCB_enSHPR1 = 1UL,
    SCB_enSHPR2 = 2UL,
    SCB_enSHPR3 = 3UL,
    SCB_enSHPR4 = 4UL,
    SCB_enSHPR5 = 5UL,
    SCB_enSHPR6 = 6UL,
    SCB_enSHPR7 = 7UL,
}SCB_nSHPR;

typedef enum
{
    SCB_enALIGN_4BYTE = 0UL,
    SCB_enALIGN_8BYTE = 1UL,
    SCB_enALIGN_ERROR = 0xFFFFFFFFUL,
}SCB_nAlignment;

typedef enum
{
    SCB_enWAKEUP_ONLY = 0UL,
    SCB_enWAKEUP_ALL = 1UL,
    SCB_enWAKEUP_ERROR = 0xFFFFFFFFUL,
}SCB_nWAKEUPSOURCE;

typedef enum
{
    SCB_enSLEEPONEXIT_NOSLEEP = 0UL,
    SCB_enSLEEPONEXIT_SLEEP = 1UL,
    SCB_enSLEEPONEXIT_ERROR = 0xFFFFFFFFUL,
}SCB_nSLEEPONEXIT;

typedef enum
{
    SCB_enSleepDeep_Sleep = 0UL,
    SCB_enSleepDeep_DeepSleep = 1UL,
    SCB_enSleepDeep_ERROR = 0xFFFFFFFFUL,
}SCB_nSleepDeep;

typedef enum
{
     SCB_enVECISR_THREAD = ((uint32_t) 0x00000000UL),
     SCB_enVECISR_RESET = ((uint32_t) 0x00000001UL),
     SCB_enVECISR_NMI = ((uint32_t) 0x00000002UL),
     SCB_enVECISR_HARDFAULT = ((uint32_t) 0x00000003UL),
     SCB_enVECISR_MEMMANAGE = ((uint32_t) 0x00000004UL),
     SCB_enVECISR_BUSFAULT = ((uint32_t) 0x00000005UL),
     SCB_enVECISR_USAGEFAULT = ((uint32_t) 0x00000006UL),
     SCB_enVECISR_RES7 = ((uint32_t) 0x00000007UL),
     SCB_enVECISR_RES8 = ((uint32_t) 0x00000008UL),
     SCB_enVECISR_RES9 = ((uint32_t) 0x00000009UL),
     SCB_enVECISR_RES10 = ((uint32_t) 0x0000000AUL),
     SCB_enVECISR_SVCALL = ((uint32_t) 0x0000000BUL),
     SCB_enVECISR_DEBUGMON = ((uint32_t) 0x0000000CUL),
     SCB_enVECISR_RES13 = ((uint32_t) 0x0000000DUL),
     SCB_enVECISR_PENDSV = ((uint32_t) 0x0000000EUL),
     SCB_enVECISR_SYSTICK = ((uint32_t) 0x0000000FUL),
     SCB_enVECISR_GPIOA = ((uint32_t) 0x00000010UL),
     SCB_enVECISR_GPIOB = ((uint32_t) 0x00000011UL),
     SCB_enVECISR_GPIOC = ((uint32_t) 0x00000012UL),
     SCB_enVECISR_GPIOD = ((uint32_t) 0x00000013UL),
     SCB_enVECISR_GPIOE = ((uint32_t) 0x00000014UL),
     SCB_enVECISR_UART0 = ((uint32_t) 0x00000015UL),
     SCB_enVECISR_UART1 = ((uint32_t) 0x00000016UL),
     SCB_enVECISR_SSI0 = ((uint32_t) 0x00000017UL),
     SCB_enVECISR_I2C0 = ((uint32_t) 0x00000018UL),
     SCB_enVECISR_PWM0FAULT = ((uint32_t) 0x00000019UL),
     SCB_enVECISR_PWM0GEN0 = ((uint32_t) 0x0000001AUL),
     SCB_enVECISR_PWM0GEN1 = ((uint32_t) 0x0000001BUL),
     SCB_enVECISR_PWM0GEN2 = ((uint32_t) 0x0000001CUL),
     SCB_enVECISR_QEI0 = ((uint32_t) 0x0000001DUL),
     SCB_enVECISR_ADC0SEQ0 = ((uint32_t) 0x0000001EUL),
     SCB_enVECISR_ADC0SEQ1 = ((uint32_t) 0x0000001FUL),
     SCB_enVECISR_ADC0SEQ2 = ((uint32_t) 0x00000020UL),
     SCB_enVECISR_ADC0SEQ3 = ((uint32_t) 0x00000021UL),
     SCB_enVECISR_WDT01 = ((uint32_t) 0x00000022UL),
     SCB_enVECISR_TIMER0A = ((uint32_t) 0x00000023UL),
     SCB_enVECISR_TIMER0B = ((uint32_t) 0x00000024UL),
     SCB_enVECISR_TIMER1A = ((uint32_t) 0x00000025UL),
     SCB_enVECISR_TIMER1B = ((uint32_t) 0x00000026UL),
     SCB_enVECISR_TIMER2A = ((uint32_t) 0x00000027UL),
     SCB_enVECISR_TIMER2B = ((uint32_t) 0x00000028UL),
     SCB_enVECISR_ACMP0 = ((uint32_t) 0x00000029UL),
     SCB_enVECISR_ACMP1 = ((uint32_t) 0x0000002AUL),
     SCB_enVECISR_RES43 = ((uint32_t) 0x0000002BUL),
     SCB_enVECISR_SYSCTL = ((uint32_t) 0x0000002CUL),
     SCB_enVECISR_FLASH = ((uint32_t) 0x0000002DUL),
     SCB_enVECISR_GPIOF = ((uint32_t) 0x0000002EUL),
     SCB_enVECISR_RES47 = ((uint32_t) 0x0000002FUL),
     SCB_enVECISR_RES48 = ((uint32_t) 0x00000030UL),
     SCB_enVECISR_UART2 = ((uint32_t) 0x00000031UL),
     SCB_enVECISR_SSI1 = ((uint32_t) 0x00000032UL),
     SCB_enVECISR_TIMER3A = ((uint32_t) 0x00000033UL),
     SCB_enVECISR_TIMER3B = ((uint32_t) 0x00000034UL),
     SCB_enVECISR_I2C1 = ((uint32_t) 0x00000035UL),
     SCB_enVECISR_QEI1 = ((uint32_t) 0x00000036UL),
     SCB_enVECISR_CAN0 = ((uint32_t) 0x00000037UL),
     SCB_enVECISR_CAN1 = ((uint32_t) 0x00000038UL),
     SCB_enVECISR_RES57 = ((uint32_t) 0x00000039UL),
     SCB_enVECISR_RES58 = ((uint32_t) 0x0000003AUL),
     SCB_enVECISR_HIB = ((uint32_t) 0x0000003BUL),
     SCB_enVECISR_USB = ((uint32_t) 0x0000003CUL),
     SCB_enVECISR_PWM0GEN3 = ((uint32_t) 0x0000003DUL),
     SCB_enVECISR_UDMASOFT = ((uint32_t) 0x0000003EUL),
     SCB_enVECISR_UDMAERROR = ((uint32_t) 0x0000003FUL),
     SCB_enVECISR_ADC1SEQ0 = ((uint32_t) 0x00000040UL),
     SCB_enVECISR_ADC1SEQ1 = ((uint32_t) 0x00000041UL),
     SCB_enVECISR_ADC1SEQ2 = ((uint32_t) 0x00000042UL),
     SCB_enVECISR_ADC1SEQ3 = ((uint32_t) 0x00000043UL),
     SCB_enVECISR_RES68 = ((uint32_t) 0x00000044UL),
     SCB_enVECISR_RES69 = ((uint32_t) 0x00000045UL),
     SCB_enVECISR_RES70 = ((uint32_t) 0x00000046UL),
     SCB_enVECISR_RES71 = ((uint32_t) 0x00000047UL),
     SCB_enVECISR_RES72 = ((uint32_t) 0x00000048UL),
     SCB_enVECISR_SSI2 = ((uint32_t) 0x00000049UL),
     SCB_enVECISR_SSI3 = ((uint32_t) 0x0000004AUL),
     SCB_enVECISR_UART3 = ((uint32_t) 0x0000004BUL),
     SCB_enVECISR_UART4 = ((uint32_t) 0x0000004CUL),
     SCB_enVECISR_UART5 = ((uint32_t) 0x0000004DUL),
     SCB_enVECISR_UART6 = ((uint32_t) 0x0000004EUL),
     SCB_enVECISR_UART7 = ((uint32_t) 0x0000004FUL),
     SCB_enVECISR_RES80 = ((uint32_t) 0x00000050UL),
     SCB_enVECISR_RES81 = ((uint32_t) 0x00000051UL),
     SCB_enVECISR_RES82 = ((uint32_t) 0x00000052UL),
     SCB_enVECISR_RES83 = ((uint32_t) 0x00000053UL),
     SCB_enVECISR_I2C2 = ((uint32_t) 0x00000054UL),
     SCB_enVECISR_I2C3 = ((uint32_t) 0x00000055UL),
     SCB_enVECISR_TIMER4A = ((uint32_t) 0x00000056UL),
     SCB_enVECISR_TIMER4B = ((uint32_t) 0x00000057UL),
     SCB_enVECISR_RES88 = ((uint32_t) 0x00000058UL),
     SCB_enVECISR_RES89 = ((uint32_t) 0x00000059UL),
     SCB_enVECISR_RES90 = ((uint32_t) 0x0000005AUL),
     SCB_enVECISR_RES91 = ((uint32_t) 0x0000005BUL),
     SCB_enVECISR_RES92 = ((uint32_t) 0x0000005CUL),
     SCB_enVECISR_RES93 = ((uint32_t) 0x0000005DUL),
     SCB_enVECISR_RES94 = ((uint32_t) 0x0000005EUL),
     SCB_enVECISR_RES95 = ((uint32_t) 0x0000005FUL),
     SCB_enVECISR_RES96 = ((uint32_t) 0x00000060UL),
     SCB_enVECISR_RES97 = ((uint32_t) 0x00000061UL),
     SCB_enVECISR_RES98 = ((uint32_t) 0x00000062UL),
     SCB_enVECISR_RES99 = ((uint32_t) 0x00000063UL),
     SCB_enVECISR_RES100 = ((uint32_t) 0x00000064UL),
     SCB_enVECISR_RES101 = ((uint32_t) 0x00000065UL),
     SCB_enVECISR_RES102 = ((uint32_t) 0x00000066UL),
     SCB_enVECISR_RES103 = ((uint32_t) 0x00000067UL),
     SCB_enVECISR_RES104 = ((uint32_t) 0x00000068UL),
     SCB_enVECISR_RES105 = ((uint32_t) 0x00000069UL),
     SCB_enVECISR_RES106 = ((uint32_t) 0x0000006AUL),
     SCB_enVECISR_RES107 = ((uint32_t) 0x0000006BUL),
     SCB_enVECISR_TIMER5A = ((uint32_t) 0x0000006CUL),
     SCB_enVECISR_TIMER5B = ((uint32_t) 0x0000006DUL),
     SCB_enVECISR_WTIMER0A = ((uint32_t) 0x0000006EUL),
     SCB_enVECISR_WTIMER0B = ((uint32_t) 0x0000006FUL),
     SCB_enVECISR_WTIMER1A = ((uint32_t) 0x00000070UL),
     SCB_enVECISR_WTIMER1B = ((uint32_t) 0x00000071UL),
     SCB_enVECISR_WTIMER2A = ((uint32_t) 0x00000072UL),
     SCB_enVECISR_WTIMER2B = ((uint32_t) 0x00000073UL),
     SCB_enVECISR_WTIMER3A = ((uint32_t) 0x00000074UL),
     SCB_enVECISR_WTIMER3B = ((uint32_t) 0x00000075UL),
     SCB_enVECISR_WTIMER4A = ((uint32_t) 0x00000076UL),
     SCB_enVECISR_WTIMER4B = ((uint32_t) 0x00000077UL),
     SCB_enVECISR_WTIMER5A = ((uint32_t) 0x00000078UL),
     SCB_enVECISR_WTIMER5B = ((uint32_t) 0x00000079UL),
     SCB_enVECISR_SYSEXC = ((uint32_t) 0x0000007AUL),
     SCB_enVECISR_RES123 = ((uint32_t) 0x0000007BUL),
     SCB_enVECISR_RES124 = ((uint32_t) 0x0000007CUL),
     SCB_enVECISR_RES125 = ((uint32_t) 0x0000007DUL),
     SCB_enVECISR_RES126 = ((uint32_t) 0x0000007EUL),
     SCB_enVECISR_RES127 = ((uint32_t) 0x0000007FUL),
     SCB_enVECISR_RES128 = ((uint32_t) 0x00000080UL),
     SCB_enVECISR_RES129 = ((uint32_t) 0x00000081UL),
     SCB_enVECISR_RES130 = ((uint32_t) 0x00000082UL),
     SCB_enVECISR_RES131 = ((uint32_t) 0x00000083UL),
     SCB_enVECISR_RES132 = ((uint32_t) 0x00000084UL),
     SCB_enVECISR_RES133 = ((uint32_t) 0x00000085UL),
     SCB_enVECISR_RES134 = ((uint32_t) 0x00000086UL),
     SCB_enVECISR_RES135 = ((uint32_t) 0x00000087UL),
     SCB_enVECISR_RES136 = ((uint32_t) 0x00000088UL),
     SCB_enVECISR_RES137 = ((uint32_t) 0x00000089UL),
     SCB_enVECISR_RES138 = ((uint32_t) 0x0000008AUL),
     SCB_enVECISR_RES139 = ((uint32_t) 0x0000008BUL),
     SCB_enVECISR_RES140 = ((uint32_t) 0x0000008CUL),
     SCB_enVECISR_RES141 = ((uint32_t) 0x0000008DUL),
     SCB_enVECISR_RES142 = ((uint32_t) 0x0000008EUL),
     SCB_enVECISR_RES143 = ((uint32_t) 0x0000008FUL),
     SCB_enVECISR_RES144 = ((uint32_t) 0x00000090UL),
     SCB_enVECISR_RES145 = ((uint32_t) 0x00000091UL),
     SCB_enVECISR_RES146 = ((uint32_t) 0x00000092UL),
     SCB_enVECISR_RES147 = ((uint32_t) 0x00000093UL),
     SCB_enVECISR_RES148 = ((uint32_t) 0x00000094UL),
     SCB_enVECISR_RES149 = ((uint32_t) 0x00000095UL),
     SCB_enVECISR_PWM1GEN0 = ((uint32_t) 0x00000096UL),
     SCB_enVECISR_PWM1GEN1 = ((uint32_t) 0x00000097UL),
     SCB_enVECISR_PWM1GEN2 = ((uint32_t) 0x00000098UL),
     SCB_enVECISR_PWM1GEN3 = ((uint32_t) 0x00000099UL),
     SCB_enVECISR_PWM1FAULT = ((uint32_t) 0x0000009AUL),
}SCB_nVECISR;

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_ENUM_H_ */
