/**
 *
 * @file Graphics_ClearSection.c
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
 * @verbatim 19 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Graphics/xHeader/Graphics_ClearSection.h>

void Graphics__vClearSection (void (*pfvCallback)(Graphics_Layer_TypeDef* restrict psLayerArg, Graphics_DIMENSIONS_TypeDef sDimensionsArg, uint32_t  u32Color), Graphics_Layer_TypeDef* restrict psLayerArg, Graphics_DIMENSIONS_TypeDef sDimensionsArg, uint32_t  u32Color)
{
    Graphics_nSTATUS enStatus = Graphics_enSTATUS_OK;
    uint32_t u32StatusWidth = 0UL;
    uint32_t u32StatusHeight = 0UL;
    uint32_t u32HeightReg = 0UL;
    uint32_t u32WidthReg = 0UL;
    uint32_t u32HeightTotalReg = 0UL;
    uint32_t u32WidthTotalReg = 0UL;
    uint32_t u32CoordXReg= 0UL;
    uint32_t u32CoordYReg = 0UL;
    if(0UL != (uint32_t) psLayerArg)
    {
        u32HeightReg = sDimensionsArg.u32Height;
        u32WidthReg = sDimensionsArg.u32Width;
        u32HeightTotalReg = psLayerArg->u32HeightTotal;
        u32WidthTotalReg = psLayerArg->u32WidthTotal;
        u32CoordXReg = sDimensionsArg.u32CoordX_Initial;
        u32CoordYReg = sDimensionsArg.u32CoordY_Initial;
        u32StatusHeight = (uint32_t) Graphics__enCheckParams(u32HeightReg,  u32CoordYReg, u32HeightTotalReg);
        u32StatusWidth = (uint32_t) Graphics__enCheckParams(u32WidthReg,  u32CoordXReg, u32WidthTotalReg);

        u32StatusHeight |= u32StatusWidth;
        enStatus = (Graphics_nSTATUS) u32StatusHeight;

        if(Graphics_enSTATUS_OK == enStatus)
        {
            pfvCallback(psLayerArg, sDimensionsArg, u32Color);
        }
    }
}
