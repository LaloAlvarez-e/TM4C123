/*
 * UARTInterrupt.c
 *
 *  Created on: 22 jun. 2018
 *      Author: InDev
 */


#include "UART.h"



void UART0Handler(void)
{

   if(UART0_UARTMIS_CTSMIS_BB)
    {
        UART0_UARTICR_CTSICR_BB=1;
    }
    if(UART0_UARTMIS_RXMIS_BB)
    {
        UART0_UARTICR_RXICR_BB=1;

        while(UART0_UARTFR_RXFE_BB==0)
        {
            UART0Fifo[UART0FifoCount]=UART0_UARTDR->DATA;
            if(UART0Fifo[UART0FifoCount]!='\x08')
            {
                UART0_UARTDR->DATA=UART0Fifo[UART0FifoCount];
                UART0FifoCount++;
                UART0FifoCount&=0xFF;
                if(UART0FifoCount>=1)
                {
                    if(UART0Fifo[UART0FifoCount-1]=='\r')
                    {
                        UART0Fifo[UART0FifoCount-1]=0;
                        UART0_SendString("\n\r>");
                        UART0FifoCount=0;
                        UART0StringData=1;
                    }
                }
            }
            else
            {
                if(UART0FifoCount)
                {
                    UART0_UARTDR->DATA=UART0Fifo[UART0FifoCount];
                    UART0_UARTDR->DATA='\x7F';
                    UART0_UARTDR->DATA=UART0Fifo[UART0FifoCount];
                    UART0FifoCount--;
                }
            }
        }
    }
    if(UART0_UARTMIS_TXMIS_BB)
    {
        UART0_UARTICR_TXICR_BB=1;
        if(UART0_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART0_UARTMIS_RTMIS_BB)
    {
        UART0_UARTICR_RTICR_BB=1;

        while(UART0_UARTFR_RXFE_BB==0)
        {
            UART0Fifo[UART0FifoCount]=UART0_UARTDR->DATA;
            if(UART0Fifo[UART0FifoCount]!='\x08')
            {
                UART0_UARTDR->DATA=UART0Fifo[UART0FifoCount];
                UART0FifoCount++;
                UART0FifoCount&=0xFF;
                if(UART0FifoCount>=1)
                {
                    if(UART0Fifo[UART0FifoCount-1]=='\r')
                    {
                        UART0Fifo[UART0FifoCount-1]=0;
                        UART0_SendString("\n\r>");
                        UART0FifoCount=0;
                        UART0StringData=1;
                    }
                }
            }
            else
            {
                if(UART0FifoCount)
                {
                    UART0_UARTDR->DATA=UART0Fifo[UART0FifoCount];
                    UART0_UARTDR->DATA='\x7F';
                    UART0_UARTDR->DATA=UART0Fifo[UART0FifoCount];
                    UART0FifoCount--;
                }
            }
        }
    }
    if(UART0_UARTMIS_FEMIS_BB)
    {
        UART0_UARTICR_FEICR_BB=1;
    }
    if(UART0_UARTMIS_PEMIS_BB)
    {
        UART0_UARTICR_PEICR_BB=1;
    }
    if(UART0_UARTMIS_BEMIS_BB)
    {
        UART0_UARTICR_BEICR_BB=1;
    }
    if(UART0_UARTMIS_OEMIS_BB)
    {
        UART0_UARTICR_OEICR_BB=1;
    }
    if(UART0_UARTMIS_9BITMIS_BB)
    {
        UART0_UARTICR_9BITICR_BB=1;
    }
}


void UART1Handler(void)
{

    if(UART1_UARTMIS_CTSMIS_BB)
    {
        UART1_UARTICR_CTSICR_BB=1;
    }
    if(UART1_UARTMIS_RXMIS_BB)
    {
        UART1_UARTICR_RXICR_BB=1;
        while(UART1_UARTFR_RXFE_BB==0)
        {
            UART1Fifo[UART1FifoCount]=UART1_UARTDR->DATA;
            UART1_UARTDR->DATA=UART1Fifo[UART1FifoCount];
            UART1FifoCount++;
            UART1FifoCount&=0xFF;
        }
    }
    if(UART1_UARTMIS_TXMIS_BB)
    {
        UART1_UARTICR_TXICR_BB=1;
        if(UART1_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART1_UARTMIS_RTMIS_BB)
    {
        UART1_UARTICR_RTICR_BB=1;
        while(UART1_UARTFR_RXFE_BB==0)
        {
            UART1Fifo[UART1FifoCount]=UART1_UARTDR->DATA;
            UART1_UARTDR->DATA=UART1Fifo[UART1FifoCount];
            UART1FifoCount++;
            UART1FifoCount&=0xFF;
        }
    }
    if(UART1_UARTMIS_FEMIS_BB)
    {
        UART1_UARTICR_FEICR_BB=1;
    }
    if(UART1_UARTMIS_PEMIS_BB)
    {
        UART1_UARTICR_PEICR_BB=1;
    }
    if(UART1_UARTMIS_BEMIS_BB)
    {
        UART1_UARTICR_BEICR_BB=1;
    }
    if(UART1_UARTMIS_OEMIS_BB)
    {
        UART1_UARTICR_OEICR_BB=1;
    }
    if(UART1_UARTMIS_9BITMIS_BB)
    {
        UART1_UARTICR_9BITICR_BB=1;
    }
}


void UART2Handler(void)
{

    if(UART2_UARTMIS_CTSMIS_BB)
    {
        UART2_UARTICR_CTSICR_BB=1;
    }
    if(UART2_UARTMIS_RXMIS_BB)
    {
        UART2_UARTICR_RXICR_BB=1;
        while(UART2_UARTFR_RXFE_BB==0)
        {
            UART2Fifo[UART2FifoCount]=UART2_UARTDR->DATA;
            //UART2_UARTDR->DATA=UART2Fifo[UART2FifoCount];
            UART2FifoCount++;
            UART2FifoCount&=0xFF;
        }
    }
    if(UART2_UARTMIS_TXMIS_BB)
    {
        UART2_UARTICR_TXICR_BB=1;
        if(UART2_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART2_UARTMIS_RTMIS_BB)
    {
        UART2_UARTICR_RTICR_BB=1;
        while(UART2_UARTFR_RXFE_BB==0)
        {
            UART2Fifo[UART2FifoCount]=UART2_UARTDR->DATA;
            //UART2_UARTDR->DATA=UART2Fifo[UART2FifoCount];
            UART2FifoCount++;
            UART2FifoCount&=0xFF;
        }
    }
    if(UART2_UARTMIS_FEMIS_BB)
    {
        UART2_UARTICR_FEICR_BB=1;
    }
    if(UART2_UARTMIS_PEMIS_BB)
    {
        UART2_UARTICR_PEICR_BB=1;
    }
    if(UART2_UARTMIS_BEMIS_BB)
    {
        UART2_UARTICR_BEICR_BB=1;
    }
    if(UART2_UARTMIS_OEMIS_BB)
    {
        UART2_UARTICR_OEICR_BB=1;
    }
    if(UART2_UARTMIS_9BITMIS_BB)
    {
        UART2_UARTICR_9BITICR_BB=1;
    }
}


void UART3Handler(void)
{

    if(UART3_UARTMIS_CTSMIS_BB)
    {
        UART3_UARTICR_CTSICR_BB=1;
    }
    if(UART3_UARTMIS_RXMIS_BB)
    {
        UART3_UARTICR_RXICR_BB=1;
        while(UART3_UARTFR_RXFE_BB==0)
        {
            UART3Fifo[UART3FifoCount]=UART3_UARTDR->DATA;
            UART3_UARTDR->DATA=UART3Fifo[UART3FifoCount];
            UART3FifoCount++;
            UART3FifoCount&=0xFF;
        }
    }
    if(UART3_UARTMIS_TXMIS_BB)
    {
        UART3_UARTICR_TXICR_BB=1;
        if(UART3_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART3_UARTMIS_RTMIS_BB)
    {
        UART3_UARTICR_RTICR_BB=1;
        while(UART3_UARTFR_RXFE_BB==0)
        {
            UART3Fifo[UART3FifoCount]=UART3_UARTDR->DATA;
            UART3_UARTDR->DATA=UART3Fifo[UART3FifoCount];
            UART3FifoCount++;
            UART3FifoCount&=0xFF;
        }
    }
    if(UART3_UARTMIS_FEMIS_BB)
    {
        UART3_UARTICR_FEICR_BB=1;
    }
    if(UART3_UARTMIS_PEMIS_BB)
    {
        UART3_UARTICR_PEICR_BB=1;
    }
    if(UART3_UARTMIS_BEMIS_BB)
    {
        UART3_UARTICR_BEICR_BB=1;
    }
    if(UART3_UARTMIS_OEMIS_BB)
    {
        UART3_UARTICR_OEICR_BB=1;
    }
    if(UART3_UARTMIS_9BITMIS_BB)
    {
        UART3_UARTICR_9BITICR_BB=1;
    }
}

void UART4Handler(void)
{

    if(UART4_UARTMIS_CTSMIS_BB)
    {
        UART4_UARTICR_CTSICR_BB=1;
    }
    if(UART4_UARTMIS_RXMIS_BB)
    {
        UART4_UARTICR_RXICR_BB=1;
        while(UART4_UARTFR_RXFE_BB==0)
        {
            UART4Fifo[UART4FifoCount]=UART4_UARTDR->DATA;
            UART4_UARTDR->DATA=UART4Fifo[UART4FifoCount];
            UART4FifoCount++;
            UART4FifoCount&=0xFF;
        }
    }
    if(UART4_UARTMIS_TXMIS_BB)
    {
        UART4_UARTICR_TXICR_BB=1;
        if(UART4_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART4_UARTMIS_RTMIS_BB)
    {
        UART4_UARTICR_RTICR_BB=1;
        while(UART4_UARTFR_RXFE_BB==0)
        {
            UART4Fifo[UART4FifoCount]=UART4_UARTDR->DATA;
            UART4_UARTDR->DATA=UART4Fifo[UART4FifoCount];
            UART4FifoCount++;
            UART4FifoCount&=0xFF;
        }
    }
    if(UART4_UARTMIS_FEMIS_BB)
    {
        UART4_UARTICR_FEICR_BB=1;
    }
    if(UART4_UARTMIS_PEMIS_BB)
    {
        UART4_UARTICR_PEICR_BB=1;
    }
    if(UART4_UARTMIS_BEMIS_BB)
    {
        UART4_UARTICR_BEICR_BB=1;
    }
    if(UART4_UARTMIS_OEMIS_BB)
    {
        UART4_UARTICR_OEICR_BB=1;
    }
    if(UART4_UARTMIS_9BITMIS_BB)
    {
        UART4_UARTICR_9BITICR_BB=1;
    }
}

void UART5Handler(void)
{

    if(UART5_UARTMIS_CTSMIS_BB)
    {
        UART5_UARTICR_CTSICR_BB=1;
    }
    if(UART5_UARTMIS_RXMIS_BB)
    {
        UART5_UARTICR_RXICR_BB=1;
        while(UART5_UARTFR_RXFE_BB==0)
        {
            UART5Fifo[UART5FifoCount]=UART5_UARTDR->DATA;
            UART5_UARTDR->DATA=UART5Fifo[UART5FifoCount];
            UART5FifoCount++;
            UART5FifoCount&=0xFF;
        }
    }
    if(UART5_UARTMIS_TXMIS_BB)
    {
        UART5_UARTICR_TXICR_BB=1;
        if(UART5_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART5_UARTMIS_RTMIS_BB)
    {
        UART5_UARTICR_RTICR_BB=1;
        while(UART5_UARTFR_RXFE_BB==0)
        {
            UART5Fifo[UART5FifoCount]=UART5_UARTDR->DATA;
            UART5_UARTDR->DATA=UART5Fifo[UART5FifoCount];
            UART5FifoCount++;
            UART5FifoCount&=0xFF;
        }
    }
    if(UART5_UARTMIS_FEMIS_BB)
    {
        UART5_UARTICR_FEICR_BB=1;
    }
    if(UART5_UARTMIS_PEMIS_BB)
    {
        UART5_UARTICR_PEICR_BB=1;
    }
    if(UART5_UARTMIS_BEMIS_BB)
    {
        UART5_UARTICR_BEICR_BB=1;
    }
    if(UART5_UARTMIS_OEMIS_BB)
    {
        UART5_UARTICR_OEICR_BB=1;
    }
    if(UART5_UARTMIS_9BITMIS_BB)
    {
        UART5_UARTICR_9BITICR_BB=1;
    }
}


void UART6Handler(void)
{

    if(UART6_UARTMIS_CTSMIS_BB)
    {
        UART6_UARTICR_CTSICR_BB=1;
    }
    if(UART6_UARTMIS_RXMIS_BB)
    {
        UART6_UARTICR_RXICR_BB=1;
        while(UART6_UARTFR_RXFE_BB==0)
        {
            UART6Fifo[UART6FifoCount]=UART6_UARTDR->DATA;
            UART6_UARTDR->DATA=UART6Fifo[UART6FifoCount];
            UART6FifoCount++;
            UART6FifoCount&=0xFF;
        }
    }
    if(UART6_UARTMIS_TXMIS_BB)
    {
        UART6_UARTICR_TXICR_BB=1;
        if(UART6_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART6_UARTMIS_RTMIS_BB)
    {
        UART6_UARTICR_RTICR_BB=1;
        while(UART6_UARTFR_RXFE_BB==0)
        {
            UART6Fifo[UART6FifoCount]=UART6_UARTDR->DATA;
            UART6_UARTDR->DATA=UART6Fifo[UART6FifoCount];
            UART6FifoCount++;
            UART6FifoCount&=0xFF;
        }
    }
    if(UART6_UARTMIS_FEMIS_BB)
    {
        UART6_UARTICR_FEICR_BB=1;
    }
    if(UART6_UARTMIS_PEMIS_BB)
    {
        UART6_UARTICR_PEICR_BB=1;
    }
    if(UART6_UARTMIS_BEMIS_BB)
    {
        UART6_UARTICR_BEICR_BB=1;
    }
    if(UART6_UARTMIS_OEMIS_BB)
    {
        UART6_UARTICR_OEICR_BB=1;
    }
    if(UART6_UARTMIS_9BITMIS_BB)
    {
        UART6_UARTICR_9BITICR_BB=1;
    }
}


void UART7Handler(void)
{

    if(UART7_UARTMIS_CTSMIS_BB)
    {
        UART7_UARTICR_CTSICR_BB=1;
    }
    if(UART7_UARTMIS_RXMIS_BB)
    {
        UART7_UARTICR_RXICR_BB=1;
        while(UART7_UARTFR_RXFE_BB==0)
        {
            UART7Fifo[UART7FifoCount]=UART7_UARTDR->DATA;
            UART7_UARTDR->DATA=UART7Fifo[UART7FifoCount];
            UART7FifoCount++;
            UART7FifoCount&=0xFF;
        }
    }
    if(UART7_UARTMIS_TXMIS_BB)
    {
        UART7_UARTICR_TXICR_BB=1;
        if(UART7_UARTCTL_EOT_BB)
        {

        }
        else
        {

        }
    }
    if(UART7_UARTMIS_RTMIS_BB)
    {
        UART7_UARTICR_RTICR_BB=1;
        while(UART7_UARTFR_RXFE_BB==0)
        {
            UART7Fifo[UART7FifoCount]=UART7_UARTDR->DATA;
            UART7_UARTDR->DATA=UART7Fifo[UART7FifoCount];
            UART7FifoCount++;
            UART7FifoCount&=0xFF;
        }
    }
    if(UART7_UARTMIS_FEMIS_BB)
    {
        UART7_UARTICR_FEICR_BB=1;
    }
    if(UART7_UARTMIS_PEMIS_BB)
    {
        UART7_UARTICR_PEICR_BB=1;
    }
    if(UART7_UARTMIS_BEMIS_BB)
    {
        UART7_UARTICR_BEICR_BB=1;
    }
    if(UART7_UARTMIS_OEMIS_BB)
    {
        UART7_UARTICR_OEICR_BB=1;
    }
    if(UART7_UARTMIS_9BITMIS_BB)
    {
        UART7_UARTICR_9BITICR_BB=1;
    }
}