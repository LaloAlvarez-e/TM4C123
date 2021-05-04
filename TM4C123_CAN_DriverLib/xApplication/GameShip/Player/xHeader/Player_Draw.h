/**
 *
 * @file Player_Draw.h
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
 * @verbatim 12 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_DRAW_H_
#define XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_DRAW_H_

#include <xApplication/GameShip/Player/xHeader/Player_Struct.h>

void Player__vDraw(const Player_TypeDef* pstPlayerArg);
void Player__vDrawLifes(const Player_TypeDef* pstPlayerArg);

#endif /* XAPPLICATION_GAMESHIP_PLAYER_XHEADER_PLAYER_DRAW_H_ */
