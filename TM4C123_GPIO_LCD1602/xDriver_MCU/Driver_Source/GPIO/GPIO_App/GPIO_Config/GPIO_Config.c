/**
 *
 * @file GPIO_Config.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_App/GPIO_Config/GPIO_Config.h>

#include <stdlib.h>
#include <stdint.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_App/GPIO_Config/GPIO_ConfigStruct.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Driver/GPIO_Driver.h>


GPIO_nSTATUS GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nCONFIG enConfig)
{

    GPIO_nSTATUS enReturn=GPIO_enERROR;
    GPIO_CONFIG_Typedef* psConfig=GPIO__psCreateConfigStruct(enConfig);

    if(psConfig!=0)
    {
        GPIO__vSetResistorMode(enPort,enPin,psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort,enPin,psConfig->enOutputMode);
        GPIO__vSetDirection(enPort,enPin,psConfig->enDirection);
        GPIO__vSetDrive(enPort,enPin,psConfig->enDrive);
        GPIO__vDeleteConfigStruct(psConfig);
        enReturn = GPIO_enOK;
    }
    return enReturn;

}

GPIO_nSTATUS GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPIN enPin,const GPIO_CONFIG_Typedef* psConfig)
{

    GPIO_nSTATUS enReturn=GPIO_enERROR;
    if(psConfig!=0)
    {
        GPIO__vSetResistorMode(enPort,enPin,psConfig->enResistorMode);
        GPIO__vSetOutputMode(enPort,enPin,psConfig->enOutputMode);
        GPIO__vSetDirection(enPort,enPin,psConfig->enDirection);
        GPIO__vSetDrive(enPort,enPin,psConfig->enDrive);
        enReturn = GPIO_enOK;
    }
    return enReturn;

}

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_nCONFIG enConfig=GPIO_enCONFIG_UNDEF;

    GPIO_nRESMODE   enResistorMode= GPIO_enRESMODE_UNDEF;
    GPIO_nOUTMODE   enOutputMode= GPIO_enOUTMODE_UNDEF;
    GPIO_nDIR       enDirection = GPIO_enDIR_UNDEF;
    GPIO_nDRIVE     enDrive = GPIO_enDRIVE_UNDEF;

    uint32_t u32Reg=0;

    enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    enDirection=GPIO__enGetDirection(enPort, enPin);
    enDrive=GPIO__enGetDrive(enPort, enPin);

    u32Reg = ((uint32_t)enResistorMode <<0);
    u32Reg|= ((uint32_t)enOutputMode   <<4);
    u32Reg|= ((uint32_t)enDirection  <<8);
    u32Reg|= ((uint32_t)enDrive   <<16);

    enConfig = (GPIO_nCONFIG)u32Reg;
    return enConfig;
}


void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_CONFIG_Typedef* psConfig)
{
    psConfig->enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection=GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive=GPIO__enGetDrive(enPort, enPin);
}


GPIO_CONFIG_Typedef* GPIO__psGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin)
{
    GPIO_CONFIG_Typedef* psConfig=0;
    #if defined ( __TI_ARM__ )
    psConfig = (GPIO_CONFIG_Typedef*) memalign((size_t)4,(size_t)(sizeof(GPIO_CONFIG_Typedef)*sizeof(uint32_t)));
    #elif defined ( __GNUC__ )
    psConfig = (GPIO_CONFIG_Typedef*) malloc((size_t)sizeof(GPIO_CONFIG_Typedef)*sizeof(uint32_t));
    #endif

    psConfig->enResistorMode=GPIO__enGetResistorMode(enPort, enPin);
    psConfig->enOutputMode=GPIO__enGetOutputMode(enPort, enPin);
    psConfig->enDirection=GPIO__enGetDirection(enPort, enPin);
    psConfig->enDrive=GPIO__enGetDrive(enPort, enPin);

    return psConfig;
}



