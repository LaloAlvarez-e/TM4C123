

/**
 * main.c
 */

#include <LCD1602/Generic/LCD1602_Generic.h>

/*Include not allowed, this use directly the PeripheralRegisters*/
#include <float.h>
#include <stdint.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU.h>
#include <xApplication/ServoMotor_SG90/ServoMotor_SG90.h>
#include "stdlib.h"


/*Local functions*/

int main (void);

void MAIN_vInitGPIO(void);
void MAIN_vPWMServoInit(void);
void MAIN_vPWMPos(int8_t s8Angle);
void MAIN_vPWMPosFloat(float fAngle);
/*ISR Functions*/
void MAIN_vIsrSW1(void);
void MAIN_vIsrSW2(void);

GPIODATA_MASK_TypeDef* psLedRed=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psLedGreen=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psLedBlue=GPIOF_AHB_GPIODATA_MASK;


GPIODATA_MASK_TypeDef* psSW1=GPIOF_AHB_GPIODATA_MASK;
GPIODATA_MASK_TypeDef* psSW2=GPIOF_AHB_GPIODATA_MASK;

GPIO_nPIN enSW2Pin=GPIO_enPIN_0;
GPIO_nPIN enLedRedPin=GPIO_enPIN_1;
GPIO_nPIN enLedBluePin=GPIO_enPIN_2;
GPIO_nPIN enLedGreenPin=GPIO_enPIN_3;
GPIO_nPIN enSW1Pin=GPIO_enPIN_4;

volatile uint32_t u32Update=0;
volatile uint32_t u32Counter=0;
volatile uint32_t u32Priority=0;

char LCD1602_pu8Buffer1[LCD1602_COLUMN_MAX+1u]=" INDEVICE TIVAC ";
char LCD1602_pu8Buffer2[LCD1602_COLUMN_MAX+1u]="  LCD1602 SW:   ";
GPIO_nBUS enBus=GPIO_enBUS_APB;

volatile uint32_t vu32Refresh=0;

ServoMoto_SG90_Typedef sServoMotor1={0};
ServoMoto_SG90_Typedef sServoMotor2={0};
ServoMoto_SG90_nENABLE enServoEnable=ServoMoto_SG90_enDISABLE;

int main(void)
{
    float fTimeSystickStart_Task1=0.0;
    float fTimeSystickEnd_Task1=0.0;
    float fTimeSystickStart_Task2=0.0;
    float fTimeSystickEnd_Task2=0.0;
    float fAngleAbosulte=0.0f;
    uint8_t u8Column=0;
    uint8_t u8Row=0;
    uint8_t u8ColumnCurrent=0;
    uint8_t u8Counter=0;
    uint8_t u8Dir=0;
    __asm(" cpsie i");
    MPU__vInit();
    SCB__vInit();
    SYSEXC__vInit((SYSEXC_nINTERRUPT)(SYSEXC_enINVALID|SYSEXC_enDIV0|
            SYSEXC_enOVERFLOW|SYSEXC_enUNDERFLOW),SYSEXC_enPRI7);
    SYSCTL__enInit();/* system clock 80MHz*/
    WDT__vInit(0xFFFFFFFFu);
    SysTick__enInitUs(10.0f,SCB_enSHPR0);
    EEPROM__enInit();
    MAIN_vInitGPIO();
    LCD1602__enInit();
    enBus=GPIO__enGetBus(GPIO_enPORT_F);

    DMA__vSetReady(DMA_enMODULE_0);

    if(GPIO_enBUS_APB==enBus)
    {
        psLedRed=GPIOF_APB_GPIODATA_MASK;
        psLedGreen=GPIOF_APB_GPIODATA_MASK;
        psLedBlue=GPIOF_APB_GPIODATA_MASK;
        psSW1=GPIOF_APB_GPIODATA_MASK;
        psSW2=GPIOF_APB_GPIODATA_MASK;
    }
    LCD1602__enReloadScreenDirect();
    ServoMotor_SG90__enInit(&sServoMotor1,TIMER_enT1B,GPIO_enT1CCP1_F3);
    ServoMotor_SG90__enInit(&sServoMotor2,TIMER_enT0B,GPIO_enT0CCP1);
    u8ColumnCurrent=0u;
    u8Column=0u;
    u8Row=0u;
    fTimeSystickStart_Task1 = SysTick__fGetTimeUs();
    fTimeSystickStart_Task2 = SysTick__fGetTimeUs();
    ServoMotor_SG90__enSetAngleFloat(&sServoMotor1,(fAngleAbosulte-90.0f));
    ServoMotor_SG90__enSetAngleFloat(&sServoMotor2,(fAngleAbosulte-90.0f));

    while(1u)
    {
        fTimeSystickEnd_Task1 = SysTick__fGetTimeUs();
        if(fTimeSystickEnd_Task1>=fTimeSystickStart_Task1)
        {
            fTimeSystickEnd_Task1=( fTimeSystickEnd_Task1 - fTimeSystickStart_Task1);
        }
        else
        {
            fTimeSystickEnd_Task1=( fTimeSystickStart_Task1 - fTimeSystickEnd_Task1);
        }
        if(fTimeSystickEnd_Task1>50000.0f)
        {
#ifdef __DEBUG__
            WDT__vSetLoad(WDT_enMODULE_0, 4600000u);
#else
            WDT__vSetLoad(WDT_enMODULE_0, 4003000u);
#endif

            fTimeSystickStart_Task1 = SysTick__fGetTimeUs();
            if(vu32Refresh == (uint32_t)((uint32_t)enSW1Pin|(uint32_t)enSW2Pin))
            {
                u8Column=13u;
                u8Row=0u;
                LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"BT",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
            }
            else if(vu32Refresh == (enSW1Pin))
            {
                u8Column=13u;
                u8Row=0u;
                LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"1 ",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
            }
            else if(vu32Refresh == (enSW2Pin))
            {
                u8Column=13u;
                u8Row=0u;
                LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"2 ",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
            }
            else
            {
                u8Column=13u;
                u8Row=0u;
                LCD1602__enWriteStringBufferSection((char*)LCD1602_pu8Buffer2,(const char*)"NN",&u8Column,&u8Row,&u8Counter,0u,15u,0u,0u);
            }
            u8Column=u8ColumnCurrent;
            u8Row=0u;
            /*LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer1,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,0u,0u);*/
            u8Column=u8ColumnCurrent;
            u8Row=1u;
            /*LCD1602__enPrintfSection((char*)LCD1602_pu8Buffer2,&u8Column,&u8Row,(uint8_t*)&u8Counter,0u,15u,1u,1u);*/
        }




        fTimeSystickEnd_Task2 = SysTick__fGetTimeUs();
        if(fTimeSystickEnd_Task2>=fTimeSystickStart_Task2)
        {

            fTimeSystickEnd_Task2=( fTimeSystickEnd_Task2 - fTimeSystickStart_Task2);
        }
        else
        {
            fTimeSystickEnd_Task2=( fTimeSystickStart_Task2 - fTimeSystickEnd_Task2);
        }
        if(fTimeSystickEnd_Task2>120000.0f)
        {
            fTimeSystickStart_Task2 = SysTick__fGetTimeUs();

            if(ServoMoto_SG90_enENABLE == enServoEnable)
            {
                if( u8Dir == 0u)
                {
                    if(fAngleAbosulte<=176.0f)
                    {
                        fAngleAbosulte+=4.0f;
                    }
                    else
                    {
                        u8Dir=1u;
                    }
                }
                else
                {
                    if(fAngleAbosulte>=4.0f)
                    {
                        fAngleAbosulte-=4.0f;
                    }
                    else
                    {
                        u8Dir=0u;
                    }
                }
                ServoMotor_SG90__enSetAngleFloat(&sServoMotor2,(fAngleAbosulte-90.0f));
                ServoMotor_SG90__enSetAngleFloat(&sServoMotor1,(fAngleAbosulte-90.0f));
            }
            if(u8ColumnCurrent>=15u)
            {
                u8ColumnCurrent=0u;
            }
            else
            {
                u8ColumnCurrent++;
            }

        }
    }
}

void MAIN_vInitGPIO(void)
{
    GPIO__vInit();
    GPIO__vRegisterIRQSourceHandler(&MAIN_vIsrSW2, GPIO_enPORT_F, GPIO_enPIN_0);
    GPIO__vRegisterIRQSourceHandler(&MAIN_vIsrSW1, GPIO_enPORT_F, GPIO_enPIN_4);
    GPIO__vEnInterruptVector(GPIO_enPORT_F,GPIO_enPRI7);
    /*GREEN, RED, BlUE LED*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF1,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF2,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    /*SW1 SW0*/
    GPIO__enSetDigitalConfig(GPIO_enGPIOF0,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);
    GPIO__enSetDigitalConfig(GPIO_enGPIOF4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP);

    GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_1|GPIO_enPIN_2), 0u);

    GPIO__vClearInterruptSource(GPIO_enPORT_F,  (GPIO_nPIN)(GPIO_enPIN_0|GPIO_enPIN_4));
    GPIO__vEnInterruptConfig(GPIO_enPORT_F, (GPIO_nPIN)(GPIO_enPIN_0|GPIO_enPIN_4), GPIO_enINT_CONFIG_EDGE_BOTH);


}

void MAIN_vIsrSW1(void)
{
    ServoMotor_SG90__enEnable(&sServoMotor1);
    ServoMotor_SG90__enEnable(&sServoMotor2);
    enServoEnable= ServoMoto_SG90_enENABLE;
    if(psSW1->DATA_MASK[enSW1Pin]==0u)
    {
        GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_1), GPIO_enPIN_1);
        vu32Refresh|=(uint32_t)enSW1Pin;
    }
    else
    {

        GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_1), 0u);
        vu32Refresh&=~(uint32_t)enSW1Pin;
    }
}


void MAIN_vIsrSW2(void)
{
    ServoMotor_SG90__enDisable(&sServoMotor1);
    ServoMotor_SG90__enDisable(&sServoMotor2);
    enServoEnable= ServoMoto_SG90_enDISABLE;
    if(psSW2->DATA_MASK[(uint32_t)enSW2Pin]==0u)
    {
        GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_2), GPIO_enPIN_2);
        vu32Refresh|=(uint32_t)enSW2Pin;
    }
    else
    {

        GPIO__vSetData(GPIO_enPORT_F,(GPIO_nPIN) (GPIO_enPIN_2), 0u);
        vu32Refresh&=~(uint32_t)enSW2Pin;
    }
}
