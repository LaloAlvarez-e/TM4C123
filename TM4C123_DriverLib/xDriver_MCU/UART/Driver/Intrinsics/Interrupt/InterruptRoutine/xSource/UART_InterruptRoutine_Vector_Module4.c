/**
 *
 * @file UART_InterruptRoutine_Vector_Module4.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module4.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>

#define DMA_SOURCE_BIT_RX    (18UL)
#define DMA_SOURCE_MASK_RX    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_RX))

#define DMA_SOURCE_BIT_TX    (19UL)
#define DMA_SOURCE_MASK_TX    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_TX))

void UART4__vIRQVectorHandler(void)
{
    uint32_t u32ErrorFlag = 0UL;
    volatile uint32_t u32Reg = 0U;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_ENA;
    if(0UL != u32RegDMAEn)
    {
        /*RX*/
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_RX;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_RX;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP2_R;
                u32RegDMASource &= DMA_CHMAP2_R_CH18SEL_MASK;
                if(DMA_CHMAP2_R_CH18SEL_UART4_RX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_2][DMA_SOURCE_BIT_RX]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_RX;
                }
            }
        }
        /*TX*/
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_TX;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_TX;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP2_R;
                u32RegDMASource &= DMA_CHMAP2_R_CH19SEL_MASK;
                if(DMA_CHMAP2_R_CH19SEL_UART4_TX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_2][DMA_SOURCE_BIT_TX]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_TX;
                }
            }
        }
    }

    u32Reg = (uint32_t) UART4_MIS_R;

    if((uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND & u32Reg)
    {
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_CLEAR_TO_SEND]();
    }
    if((uint32_t) UART_enINT_SOURCE_RECEIVE & u32Reg)
    {
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_RECEIVE]();
    }
    if((uint32_t) UART_enINT_SOURCE_TRANSMIT & u32Reg)
    {
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_TRANSMIT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_TRANSMIT]();
    }
    if((uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
    {
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_RECEIVE_TIMEOUT]();
    }
    if((uint32_t) UART_enINT_SOURCE_FRAME_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_FRAME_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_FRAME_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_PARITY_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_PARITY_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_PARITY_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_BREAK_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_BREAK_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_BREAK_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_OVERRUN_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_BIT9_MODE & u32Reg)
    {
        UART4_ICR_R = (uint32_t) UART_enINT_SOURCE_BIT9_MODE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_4][(uint32_t) UART_enINTERRUPT_BIT9_MODE]();
    }

    if(1UL == u32ErrorFlag)
    {
        UART4_ECR_R = 0xFFUL;
    }
}
