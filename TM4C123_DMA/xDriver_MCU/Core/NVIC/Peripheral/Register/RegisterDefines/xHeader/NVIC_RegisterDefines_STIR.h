/**
 *
 * @file NVIC_RegisterDefines_STIR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_STIR_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_STIR_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* STIR ***********************************************/
/******************************************************************************************/

/*----------*/
#define NVIC_STIR_R_INTID_MASK      ((uint32_t)0x000000FFu)
#define NVIC_STIR_R_INTID_BIT       (0u)
#define NVIC_STIR_R_INTID_GPIOA      ((uint32_t)0x00000000u)
#define NVIC_STIR_R_INTID_GPIOB      ((uint32_t)0x00000001u)
#define NVIC_STIR_R_INTID_GPIOC      ((uint32_t)0x00000002u)
#define NVIC_STIR_R_INTID_GPIOD      ((uint32_t)0x00000003u)
#define NVIC_STIR_R_INTID_GPIOE      ((uint32_t)0x00000004u)
#define NVIC_STIR_R_INTID_UART0      ((uint32_t)0x00000005u)
#define NVIC_STIR_R_INTID_UART1      ((uint32_t)0x00000006u)
#define NVIC_STIR_R_INTID_SSI0       ((uint32_t)0x00000007u)
#define NVIC_STIR_R_INTID_I2C0       ((uint32_t)0x00000008u)
#define NVIC_STIR_R_INTID_PWM0FAULT   ((uint32_t)0x00000009u)
#define NVIC_STIR_R_INTID_PWM0GEN0    ((uint32_t)0x0000000Au)
#define NVIC_STIR_R_INTID_PWM0GEN1    ((uint32_t)0x0000000Bu)
#define NVIC_STIR_R_INTID_PWM0GEN2    ((uint32_t)0x0000000Cu)
#define NVIC_STIR_R_INTID_QEI0       ((uint32_t)0x0000000Du)
#define NVIC_STIR_R_INTID_ADC0SEQ0   ((uint32_t)0x0000000Eu)
#define NVIC_STIR_R_INTID_ADC0SEQ1   ((uint32_t)0x0000000Fu)
#define NVIC_STIR_R_INTID_ADC0SEQ2   ((uint32_t)0x00000010u)
#define NVIC_STIR_R_INTID_ADC0SEQ3   ((uint32_t)0x00000011u)
#define NVIC_STIR_R_INTID_WDT01      ((uint32_t)0x00000012u)
#define NVIC_STIR_R_INTID_TIMER0A    ((uint32_t)0x00000013u)
#define NVIC_STIR_R_INTID_TIMER0B    ((uint32_t)0x00000014u)
#define NVIC_STIR_R_INTID_TIMER1A    ((uint32_t)0x00000015u)
#define NVIC_STIR_R_INTID_TIMER1B    ((uint32_t)0x00000016u)
#define NVIC_STIR_R_INTID_TIMER2A    ((uint32_t)0x00000017u)
#define NVIC_STIR_R_INTID_TIMER2B    ((uint32_t)0x00000018u)
#define NVIC_STIR_R_INTID_ACOMP0     ((uint32_t)0x00000019u)
#define NVIC_STIR_R_INTID_ACOMP1     ((uint32_t)0x0000001Au)
#define NVIC_STIR_R_INTID_RES43      ((uint32_t)0x0000001Bu)
#define NVIC_STIR_R_INTID_SYSCTL     ((uint32_t)0x0000001Cu)
#define NVIC_STIR_R_INTID_FLASH      ((uint32_t)0x0000001Du)
#define NVIC_STIR_R_INTID_GPIOF      ((uint32_t)0x0000001Eu)
#define NVIC_STIR_R_INTID_RES47      ((uint32_t)0x0000001Fu)
#define NVIC_STIR_R_INTID_RES48      ((uint32_t)0x00000020u)
#define NVIC_STIR_R_INTID_UART2      ((uint32_t)0x00000021u)
#define NVIC_STIR_R_INTID_SSI1       ((uint32_t)0x00000022u)
#define NVIC_STIR_R_INTID_TIMER3A    ((uint32_t)0x00000023u)
#define NVIC_STIR_R_INTID_TIMER3B    ((uint32_t)0x00000024u)
#define NVIC_STIR_R_INTID_I2C1       ((uint32_t)0x00000025u)
#define NVIC_STIR_R_INTID_QEI1       ((uint32_t)0x00000026u)
#define NVIC_STIR_R_INTID_CAN0       ((uint32_t)0x00000027u)
#define NVIC_STIR_R_INTID_CAN1       ((uint32_t)0x00000028u)
#define NVIC_STIR_R_INTID_RES57      ((uint32_t)0x00000029u)
#define NVIC_STIR_R_INTID_RES58      ((uint32_t)0x0000002Au)
#define NVIC_STIR_R_INTID_HIB        ((uint32_t)0x0000002Bu)
#define NVIC_STIR_R_INTID_USB        ((uint32_t)0x0000002Cu)
#define NVIC_STIR_R_INTID_PWM0GEN3   ((uint32_t)0x0000002Du)
#define NVIC_STIR_R_INTID_UDMASOFT   ((uint32_t)0x0000002Eu)
#define NVIC_STIR_R_INTID_UDMAERROR  ((uint32_t)0x0000002Fu)
#define NVIC_STIR_R_INTID_ADC1SEQ0   ((uint32_t)0x00000030u)
#define NVIC_STIR_R_INTID_ADC1SEQ1   ((uint32_t)0x00000031u)
#define NVIC_STIR_R_INTID_ADC1SEQ2   ((uint32_t)0x00000032u)
#define NVIC_STIR_R_INTID_ADC1SEQ3   ((uint32_t)0x00000033u)
#define NVIC_STIR_R_INTID_RES68      ((uint32_t)0x00000034u)
#define NVIC_STIR_R_INTID_RES69      ((uint32_t)0x00000035u)
#define NVIC_STIR_R_INTID_RES70      ((uint32_t)0x00000036u)
#define NVIC_STIR_R_INTID_RES71      ((uint32_t)0x00000037u)
#define NVIC_STIR_R_INTID_RES72      ((uint32_t)0x00000038u)
#define NVIC_STIR_R_INTID_SSI2       ((uint32_t)0x00000039u)
#define NVIC_STIR_R_INTID_SSI3       ((uint32_t)0x0000003Au)
#define NVIC_STIR_R_INTID_UART3      ((uint32_t)0x0000003Bu)
#define NVIC_STIR_R_INTID_UART4      ((uint32_t)0x0000003Cu)
#define NVIC_STIR_R_INTID_UART5      ((uint32_t)0x0000003Du)
#define NVIC_STIR_R_INTID_UART6      ((uint32_t)0x0000003Eu)
#define NVIC_STIR_R_INTID_UART7      ((uint32_t)0x0000003Fu)
#define NVIC_STIR_R_INTID_RES80      ((uint32_t)0x00000040u)
#define NVIC_STIR_R_INTID_RES81      ((uint32_t)0x00000041u)
#define NVIC_STIR_R_INTID_RES82      ((uint32_t)0x00000042u)
#define NVIC_STIR_R_INTID_RES83      ((uint32_t)0x00000043u)
#define NVIC_STIR_R_INTID_I2C2       ((uint32_t)0x00000044u)
#define NVIC_STIR_R_INTID_I2C3       ((uint32_t)0x00000045u)
#define NVIC_STIR_R_INTID_TIMER4A    ((uint32_t)0x00000046u)
#define NVIC_STIR_R_INTID_TIMER4B    ((uint32_t)0x00000047u)
#define NVIC_STIR_R_INTID_RES88      ((uint32_t)0x00000048u)
#define NVIC_STIR_R_INTID_RES89      ((uint32_t)0x00000049u)
#define NVIC_STIR_R_INTID_RES90      ((uint32_t)0x0000004Au)
#define NVIC_STIR_R_INTID_RES91      ((uint32_t)0x0000004Bu)
#define NVIC_STIR_R_INTID_RES92      ((uint32_t)0x0000004Cu)
#define NVIC_STIR_R_INTID_RES93      ((uint32_t)0x0000004Du)
#define NVIC_STIR_R_INTID_RES94      ((uint32_t)0x0000004Eu)
#define NVIC_STIR_R_INTID_RES95      ((uint32_t)0x0000004Fu)
#define NVIC_STIR_R_INTID_RES96      ((uint32_t)0x00000050u)
#define NVIC_STIR_R_INTID_RES97      ((uint32_t)0x00000051u)
#define NVIC_STIR_R_INTID_RES98      ((uint32_t)0x00000052u)
#define NVIC_STIR_R_INTID_RES99      ((uint32_t)0x00000053u)
#define NVIC_STIR_R_INTID_RES100     ((uint32_t)0x00000054u)
#define NVIC_STIR_R_INTID_RES101     ((uint32_t)0x00000055u)
#define NVIC_STIR_R_INTID_RES102     ((uint32_t)0x00000056u)
#define NVIC_STIR_R_INTID_RES103     ((uint32_t)0x00000057u)
#define NVIC_STIR_R_INTID_RES104     ((uint32_t)0x00000058u)
#define NVIC_STIR_R_INTID_RES105     ((uint32_t)0x00000059u)
#define NVIC_STIR_R_INTID_RES106     ((uint32_t)0x0000005Au)
#define NVIC_STIR_R_INTID_RES107     ((uint32_t)0x0000005Bu)
#define NVIC_STIR_R_INTID_TIMER5A    ((uint32_t)0x0000005Cu)
#define NVIC_STIR_R_INTID_TIMER5B    ((uint32_t)0x0000005Du)
#define NVIC_STIR_R_INTID_WTIMER0A   ((uint32_t)0x0000005Eu)
#define NVIC_STIR_R_INTID_WTIMER0B   ((uint32_t)0x0000005Fu)
#define NVIC_STIR_R_INTID_WTIMER1A   ((uint32_t)0x00000060u)
#define NVIC_STIR_R_INTID_WTIMER1B   ((uint32_t)0x00000061u)
#define NVIC_STIR_R_INTID_WTIMER2A   ((uint32_t)0x00000062u)
#define NVIC_STIR_R_INTID_WTIMER2B   ((uint32_t)0x00000063u)
#define NVIC_STIR_R_INTID_WTIMER3A   ((uint32_t)0x00000064u)
#define NVIC_STIR_R_INTID_WTIMER3B   ((uint32_t)0x00000065u)
#define NVIC_STIR_R_INTID_WTIMER4A   ((uint32_t)0x00000066u)
#define NVIC_STIR_R_INTID_WTIMER4B   ((uint32_t)0x00000067u)
#define NVIC_STIR_R_INTID_WTIMER5A   ((uint32_t)0x00000068u)
#define NVIC_STIR_R_INTID_WTIMER5B   ((uint32_t)0x00000069u)
#define NVIC_STIR_R_INTID_SYSEXC     ((uint32_t)0x0000006Au)
#define NVIC_STIR_R_INTID_RES123     ((uint32_t)0x0000006Bu)
#define NVIC_STIR_R_INTID_RES124     ((uint32_t)0x0000006Cu)
#define NVIC_STIR_R_INTID_RES125     ((uint32_t)0x0000006Du)
#define NVIC_STIR_R_INTID_RES126     ((uint32_t)0x0000006Eu)
#define NVIC_STIR_R_INTID_RES127     ((uint32_t)0x0000006Fu)
#define NVIC_STIR_R_INTID_RES128     ((uint32_t)0x00000070u)
#define NVIC_STIR_R_INTID_RES129     ((uint32_t)0x00000071u)
#define NVIC_STIR_R_INTID_RES130     ((uint32_t)0x00000072u)
#define NVIC_STIR_R_INTID_RES131     ((uint32_t)0x00000073u)
#define NVIC_STIR_R_INTID_RES132     ((uint32_t)0x00000074u)
#define NVIC_STIR_R_INTID_RES133     ((uint32_t)0x00000075u)
#define NVIC_STIR_R_INTID_RES134     ((uint32_t)0x00000076u)
#define NVIC_STIR_R_INTID_RES135     ((uint32_t)0x00000077u)
#define NVIC_STIR_R_INTID_RES136     ((uint32_t)0x00000078u)
#define NVIC_STIR_R_INTID_RES137     ((uint32_t)0x00000079u)
#define NVIC_STIR_R_INTID_RES138     ((uint32_t)0x0000007Au)
#define NVIC_STIR_R_INTID_RES139     ((uint32_t)0x0000007Bu)
#define NVIC_STIR_R_INTID_RES140     ((uint32_t)0x0000007Cu)
#define NVIC_STIR_R_INTID_RES141     ((uint32_t)0x0000007Du)
#define NVIC_STIR_R_INTID_RES142     ((uint32_t)0x0000007Eu)
#define NVIC_STIR_R_INTID_RES143     ((uint32_t)0x0000007Fu)
#define NVIC_STIR_R_INTID_RES144     ((uint32_t)0x00000080u)
#define NVIC_STIR_R_INTID_RES145     ((uint32_t)0x00000081u)
#define NVIC_STIR_R_INTID_RES146     ((uint32_t)0x00000082u)
#define NVIC_STIR_R_INTID_RES147     ((uint32_t)0x00000083u)
#define NVIC_STIR_R_INTID_RES148     ((uint32_t)0x00000084u)
#define NVIC_STIR_R_INTID_RES149     ((uint32_t)0x00000085u)
#define NVIC_STIR_R_INTID_PWM1GEN0   ((uint32_t)0x00000086u)
#define NVIC_STIR_R_INTID_PWM1GEN1   ((uint32_t)0x00000087u)
#define NVIC_STIR_R_INTID_PWM1GEN2   ((uint32_t)0x00000088u)
#define NVIC_STIR_R_INTID_PWM1GEN3   ((uint32_t)0x00000089u)
#define NVIC_STIR_R_INTID_PWM1FAULT  ((uint32_t)0x0000008Au)

#define NVIC_STIR_INTID_GPIOA     ((uint32_t)0x00000000u)
#define NVIC_STIR_INTID_GPIOB       ((uint32_t)0x00000001u)
#define NVIC_STIR_INTID_GPIOC       ((uint32_t)0x00000002u)
#define NVIC_STIR_INTID_GPIOD     ((uint32_t)0x00000003u)
#define NVIC_STIR_INTID_GPIOE     ((uint32_t)0x00000004u)
#define NVIC_STIR_INTID_UART0     ((uint32_t)0x00000005u)
#define NVIC_STIR_INTID_UART1     ((uint32_t)0x00000006u)
#define NVIC_STIR_INTID_SSI0      ((uint32_t)0x00000007u)
#define NVIC_STIR_INTID_I2C0      ((uint32_t)0x00000008u)
#define NVIC_STIR_INTID_PWM0FAULT  ((uint32_t)0x00000009u)
#define NVIC_STIR_INTID_PWM0GEN0   ((uint32_t)0x0000000Au)
#define NVIC_STIR_INTID_PWM0GEN1   ((uint32_t)0x0000000Bu)
#define NVIC_STIR_INTID_PWM0GEN2   ((uint32_t)0x0000000Cu)
#define NVIC_STIR_INTID_QEI0      ((uint32_t)0x0000000Du)
#define NVIC_STIR_INTID_ADC0SEQ0  ((uint32_t)0x0000000Eu)
#define NVIC_STIR_INTID_ADC0SEQ1  ((uint32_t)0x0000000Fu)
#define NVIC_STIR_INTID_ADC0SEQ2  ((uint32_t)0x00000010u)
#define NVIC_STIR_INTID_ADC0SEQ3  ((uint32_t)0x00000011u)
#define NVIC_STIR_INTID_WDT01     ((uint32_t)0x00000012u)
#define NVIC_STIR_INTID_TIMER0A   ((uint32_t)0x00000013u)
#define NVIC_STIR_INTID_TIMER0B   ((uint32_t)0x00000014u)
#define NVIC_STIR_INTID_TIMER1A   ((uint32_t)0x00000015u)
#define NVIC_STIR_INTID_TIMER1B   ((uint32_t)0x00000016u)
#define NVIC_STIR_INTID_TIMER2A   ((uint32_t)0x00000017u)
#define NVIC_STIR_INTID_TIMER2B   ((uint32_t)0x00000018u)
#define NVIC_STIR_INTID_ACOMP0    ((uint32_t)0x00000019u)
#define NVIC_STIR_INTID_ACOMP1  ((uint32_t)0x0000001Au)
#define NVIC_STIR_INTID_RES43     ((uint32_t)0x0000001Bu)
#define NVIC_STIR_INTID_SYSCTL    ((uint32_t)0x0000001Cu)
#define NVIC_STIR_INTID_FLASH       ((uint32_t)0x0000001Du)
#define NVIC_STIR_INTID_GPIOF     ((uint32_t)0x0000001Eu)
#define NVIC_STIR_INTID_RES47     ((uint32_t)0x0000001Fu)
#define NVIC_STIR_INTID_RES48       ((uint32_t)0x00000020u)
#define NVIC_STIR_INTID_UART2       ((uint32_t)0x00000021u)
#define NVIC_STIR_INTID_SSI1        ((uint32_t)0x00000022u)
#define NVIC_STIR_INTID_TIMER3A   ((uint32_t)0x00000023u)
#define NVIC_STIR_INTID_TIMER3B   ((uint32_t)0x00000024u)
#define NVIC_STIR_INTID_I2C1      ((uint32_t)0x00000025u)
#define NVIC_STIR_INTID_QEI1      ((uint32_t)0x00000026u)
#define NVIC_STIR_INTID_CAN0      ((uint32_t)0x00000027u)
#define NVIC_STIR_INTID_CAN1        ((uint32_t)0x00000028u)
#define NVIC_STIR_INTID_RES57       ((uint32_t)0x00000029u)
#define NVIC_STIR_INTID_RES58       ((uint32_t)0x0000002Au)
#define NVIC_STIR_INTID_HIB     ((uint32_t)0x0000002Bu)
#define NVIC_STIR_INTID_USB     ((uint32_t)0x0000002Cu)
#define NVIC_STIR_INTID_PWM0GEN3    ((uint32_t)0x0000002Du)
#define NVIC_STIR_INTID_UDMASOFT  ((uint32_t)0x0000002Eu)
#define NVIC_STIR_INTID_UDMAERROR ((uint32_t)0x0000002Fu)
#define NVIC_STIR_INTID_ADC1SEQ0  ((uint32_t)0x00000030u)
#define NVIC_STIR_INTID_ADC1SEQ1  ((uint32_t)0x00000031u)
#define NVIC_STIR_INTID_ADC1SEQ2  ((uint32_t)0x00000032u)
#define NVIC_STIR_INTID_ADC1SEQ3  ((uint32_t)0x00000033u)
#define NVIC_STIR_INTID_RES68     ((uint32_t)0x00000034u)
#define NVIC_STIR_INTID_RES69       ((uint32_t)0x00000035u)
#define NVIC_STIR_INTID_RES70       ((uint32_t)0x00000036u)
#define NVIC_STIR_INTID_RES71       ((uint32_t)0x00000037u)
#define NVIC_STIR_INTID_RES72       ((uint32_t)0x00000038u)
#define NVIC_STIR_INTID_SSI2        ((uint32_t)0x00000039u)
#define NVIC_STIR_INTID_SSI3        ((uint32_t)0x0000003Au)
#define NVIC_STIR_INTID_UART3       ((uint32_t)0x0000003Bu)
#define NVIC_STIR_INTID_UART4       ((uint32_t)0x0000003Cu)
#define NVIC_STIR_INTID_UART5       ((uint32_t)0x0000003Du)
#define NVIC_STIR_INTID_UART6       ((uint32_t)0x0000003Eu)
#define NVIC_STIR_INTID_UART7       ((uint32_t)0x0000003Fu)
#define NVIC_STIR_INTID_RES80       ((uint32_t)0x00000040u)
#define NVIC_STIR_INTID_RES81       ((uint32_t)0x00000041u)
#define NVIC_STIR_INTID_RES82       ((uint32_t)0x00000042u)
#define NVIC_STIR_INTID_RES83       ((uint32_t)0x00000043u)
#define NVIC_STIR_INTID_I2C2        ((uint32_t)0x00000044u)
#define NVIC_STIR_INTID_I2C3        ((uint32_t)0x00000045u)
#define NVIC_STIR_INTID_TIMER4A   ((uint32_t)0x00000046u)
#define NVIC_STIR_INTID_TIMER4B   ((uint32_t)0x00000047u)
#define NVIC_STIR_INTID_RES88       ((uint32_t)0x00000048u)
#define NVIC_STIR_INTID_RES89       ((uint32_t)0x00000049u)
#define NVIC_STIR_INTID_RES90       ((uint32_t)0x0000004Au)
#define NVIC_STIR_INTID_RES91       ((uint32_t)0x0000004Bu)
#define NVIC_STIR_INTID_RES92       ((uint32_t)0x0000004Cu)
#define NVIC_STIR_INTID_RES93       ((uint32_t)0x0000004Du)
#define NVIC_STIR_INTID_RES94       ((uint32_t)0x0000004Eu)
#define NVIC_STIR_INTID_RES95       ((uint32_t)0x0000004Fu)
#define NVIC_STIR_INTID_RES96       ((uint32_t)0x00000050u)
#define NVIC_STIR_INTID_RES97       ((uint32_t)0x00000051u)
#define NVIC_STIR_INTID_RES98       ((uint32_t)0x00000052u)
#define NVIC_STIR_INTID_RES99       ((uint32_t)0x00000053u)
#define NVIC_STIR_INTID_RES100    ((uint32_t)0x00000054u)
#define NVIC_STIR_INTID_RES101    ((uint32_t)0x00000055u)
#define NVIC_STIR_INTID_RES102    ((uint32_t)0x00000056u)
#define NVIC_STIR_INTID_RES103    ((uint32_t)0x00000057u)
#define NVIC_STIR_INTID_RES104    ((uint32_t)0x00000058u)
#define NVIC_STIR_INTID_RES105    ((uint32_t)0x00000059u)
#define NVIC_STIR_INTID_RES106    ((uint32_t)0x0000005Au)
#define NVIC_STIR_INTID_RES107    ((uint32_t)0x0000005Bu)
#define NVIC_STIR_INTID_TIMER5A   ((uint32_t)0x0000005Cu)
#define NVIC_STIR_INTID_TIMER5B   ((uint32_t)0x0000005Du)
#define NVIC_STIR_INTID_WTIMER0A  ((uint32_t)0x0000005Eu)
#define NVIC_STIR_INTID_WTIMER0B  ((uint32_t)0x0000005Fu)
#define NVIC_STIR_INTID_WTIMER1A  ((uint32_t)0x00000060u)
#define NVIC_STIR_INTID_WTIMER1B  ((uint32_t)0x00000061u)
#define NVIC_STIR_INTID_WTIMER2A   ((uint32_t)0x00000062u)
#define NVIC_STIR_INTID_WTIMER2B   ((uint32_t)0x00000063u)
#define NVIC_STIR_INTID_WTIMER3A   ((uint32_t)0x00000064u)
#define NVIC_STIR_INTID_WTIMER3B   ((uint32_t)0x00000065u)
#define NVIC_STIR_INTID_WTIMER4A   ((uint32_t)0x00000066u)
#define NVIC_STIR_INTID_WTIMER4B   ((uint32_t)0x00000067u)
#define NVIC_STIR_INTID_WTIMER5A   ((uint32_t)0x00000068u)
#define NVIC_STIR_INTID_WTIMER5B   ((uint32_t)0x00000069u)
#define NVIC_STIR_INTID_SYSEXC     ((uint32_t)0x0000006Au)
#define NVIC_STIR_INTID_RES123     ((uint32_t)0x0000006Bu)
#define NVIC_STIR_INTID_RES124     ((uint32_t)0x0000006Cu)
#define NVIC_STIR_INTID_RES125     ((uint32_t)0x0000006Du)
#define NVIC_STIR_INTID_RES126     ((uint32_t)0x0000006Eu)
#define NVIC_STIR_INTID_RES127     ((uint32_t)0x0000006Fu)
#define NVIC_STIR_INTID_RES128     ((uint32_t)0x00000070u)
#define NVIC_STIR_INTID_RES129     ((uint32_t)0x00000071u)
#define NVIC_STIR_INTID_RES130     ((uint32_t)0x00000072u)
#define NVIC_STIR_INTID_RES131     ((uint32_t)0x00000073u)
#define NVIC_STIR_INTID_RES132     ((uint32_t)0x00000074u)
#define NVIC_STIR_INTID_RES133     ((uint32_t)0x00000075u)
#define NVIC_STIR_INTID_RES134     ((uint32_t)0x00000076u)
#define NVIC_STIR_INTID_RES135     ((uint32_t)0x00000077u)
#define NVIC_STIR_INTID_RES136     ((uint32_t)0x00000078u)
#define NVIC_STIR_INTID_RES137     ((uint32_t)0x00000079u)
#define NVIC_STIR_INTID_RES138     ((uint32_t)0x0000007Au)
#define NVIC_STIR_INTID_RES139     ((uint32_t)0x0000007Bu)
#define NVIC_STIR_INTID_RES140     ((uint32_t)0x0000007Cu)
#define NVIC_STIR_INTID_RES141     ((uint32_t)0x0000007Du)
#define NVIC_STIR_INTID_RES142     ((uint32_t)0x0000007Eu)
#define NVIC_STIR_INTID_RES143     ((uint32_t)0x0000007Fu)
#define NVIC_STIR_INTID_RES144     ((uint32_t)0x00000080u)
#define NVIC_STIR_INTID_RES145     ((uint32_t)0x00000081u)
#define NVIC_STIR_INTID_RES146     ((uint32_t)0x00000082u)
#define NVIC_STIR_INTID_RES147     ((uint32_t)0x00000083u)
#define NVIC_STIR_INTID_RES148     ((uint32_t)0x00000084u)
#define NVIC_STIR_INTID_RES149     ((uint32_t)0x00000085u)
#define NVIC_STIR_INTID_PWM1GEN0   ((uint32_t)0x00000086u)
#define NVIC_STIR_INTID_PWM1GEN1   ((uint32_t)0x00000087u)
#define NVIC_STIR_INTID_PWM1GEN2   ((uint32_t)0x00000088u)
#define NVIC_STIR_INTID_PWM1GEN3   ((uint32_t)0x00000089u)
#define NVIC_STIR_INTID_PWM1FAULT  ((uint32_t)0x0000008Au)
/*-----------------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERDEFINES_NVIC_REGISTERDEFINES_STIR_H_ */
