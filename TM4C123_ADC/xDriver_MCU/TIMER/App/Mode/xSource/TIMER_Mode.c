/**
 *
 * @file TIMER_Mode.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */


#include <stdlib.h>
#include <xDriver_MCU/TIMER/App/Mode/TIMER_Mode.h>
#include <xDriver_MCU/TIMER/App/Mode/xHeader/TIMER_ModeStruct.h>
#include <xDriver_MCU/TIMER/Driver/TIMER_Driver.h>


TIMER_nSTATUS TIMER__enSetMode(TIMER_nMODULE enModule, TIMER_nMODE enMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    TIMER_MODE_Typedef* psMode=TIMER__psCreateModeStruct(enMode);

    if(psMode!=0)
    {
        TIMER__vSetConfiguration(enModule,psMode->enConfig);
        TIMER__vSetSubMode(enModule,psMode->enSubMode);
        TIMER__vSetEdgeMode(enModule,psMode->enEdgeMode);
        TIMER__vSetAltMode(enModule,psMode->enAltMode);
        TIMER__vSetCountDir(enModule,psMode->enDirection);
        TIMER__vSetSnapShot(enModule,psMode->enSnapShot);
        TIMER__vSetPWMOutputInit(enModule,psMode->enPWMOutInit);
        TIMER__vSetEdgeEvent(enModule,psMode->enEdgeEvent);
        TIMER__vSetPWMOutputLevel(enModule,psMode->enPWMOut);
        TIMER__vDeleteModeStruct(psMode);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    /*Configure Reload and Match*/

    /*TIMER__vSetEnable(enModule,TIMER_enENABLE_START);*/

}

TIMER_nSTATUS TIMER__enSetModeStruct(TIMER_nMODULE enModule, const TIMER_MODE_Typedef* psMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    if(psMode!=0)
    {
        TIMER__vSetConfiguration(enModule,psMode->enConfig);
        TIMER__vSetSubMode(enModule,psMode->enSubMode);
        TIMER__vSetEdgeMode(enModule,psMode->enEdgeMode);
        TIMER__vSetAltMode(enModule,psMode->enAltMode);
        TIMER__vSetCountDir(enModule,psMode->enDirection);
        TIMER__vSetSnapShot(enModule,psMode->enSnapShot);
        TIMER__vSetPWMOutputInit(enModule,psMode->enPWMOutInit);
        TIMER__vSetEdgeEvent(enModule,psMode->enEdgeEvent);
        TIMER__vSetPWMOutputLevel(enModule,psMode->enPWMOut);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    /*Configure Reload and Match*/

    /*TIMER__vSetEnable(enModule,TIMER_enENABLE_START);*/


}





TIMER_nMODE TIMER__enGetMode(TIMER_nMODULE enModule)
{
    TIMER_nMODE enMode=TIMER_enMODE_UNDEF;

    TIMER_nCONFIG       enConfigVar=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE     enSubModeVar=TIMER_enSUB_MODE_RESERVED;
    TIMER_nEDGE_MODE    enEdgeModeVar=TIMER_enEDGE_MODE_COUNT;
    TIMER_nALT_MODE     enAltModeVar=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR    enDirectionVar=TIMER_enCOUNT_DIR_DOWN;
    TIMER_nSNAPSHOT     enSnapShotVar=TIMER_enSNAPSHOT_DIS;
    TIMER_nPWM_OUT_INIT enPWMOutInitVar=TIMER_enPWM_OUT_INIT_LOW;
    TIMER_nEDGE_EVENT   enEdgeEventVar=TIMER_enEDGE_EVENT_POSITIVE;
    TIMER_nPWM_OUTPUT   enPWMOutVar=TIMER_enPWM_OUTPUT_STRAIGHT;

    uint32_t u32Reg=0;

    enConfigVar=TIMER__enGetConfiguration(enModule);
    enSubModeVar=TIMER__enGetSubMode(enModule);
    enEdgeModeVar=TIMER__enGetEdgeMode(enModule);
    enAltModeVar=TIMER__enGetAltMode(enModule);
    enDirectionVar=TIMER__enGetCountDir(enModule);
    enSnapShotVar=TIMER__enGetSnapShot(enModule);
    enPWMOutInitVar=TIMER__enGetPWMOutputInit(enModule);
    enEdgeEventVar=TIMER__enGetEdgeEvent(enModule);
    enPWMOutVar=TIMER__enGetPWMOutputLevel(enModule);

    u32Reg = ((uint32_t)enDirectionVar <<0);
    u32Reg|= ((uint32_t)enAltModeVar  <<4);
    u32Reg|= ((uint32_t)enEdgeModeVar  <<8);
    u32Reg|= ((uint32_t)enSubModeVar   <<12);
    u32Reg|= ((uint32_t)enConfigVar    <<16);
    u32Reg|= ((uint32_t)enPWMOutVar    <<20);
    u32Reg|= ((uint32_t)enPWMOutInitVar<<24);
    u32Reg|= ((uint32_t)enEdgeEventVar <<28);
    u32Reg|= ((uint32_t)enSnapShotVar  <<30);

    enMode = (TIMER_nMODE)u32Reg;
    return enMode;
}


TIMER_nSTATUS TIMER__enGetModeStruct(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode)
{
    TIMER_nSTATUS enStatus = TIMER_enERROR;
    if(0!= psMode)
    {
        psMode->enConfig=TIMER__enGetConfiguration(enModule);
        psMode->enSubMode=TIMER__enGetSubMode(enModule);
        psMode->enEdgeMode=TIMER__enGetEdgeMode(enModule);
        psMode->enAltMode=TIMER__enGetAltMode(enModule);
        psMode->enDirection=TIMER__enGetCountDir(enModule);
        psMode->enSnapShot=TIMER__enGetSnapShot(enModule);
        psMode->enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
        psMode->enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
        psMode->enPWMOut=TIMER__enGetPWMOutputLevel(enModule);
        enStatus = TIMER_enOK;
    }
    return enStatus;
}



TIMER_MODE_Typedef* TIMER__psGetMode(TIMER_nMODULE enModule)
{
    TIMER_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (TIMER_MODE_Typedef*) memalign((size_t)4,(size_t)sizeof(TIMER_MODE_Typedef)*sizeof(uint32_t));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc(sizeof(TIMER_MODE_Typedef)*sizeof(uint32_t));
    #endif
    TIMER__enGetModeStruct(enModule, psMode);
    return psMode;

}


