/***********************************************************

 MEGA CAR WARS

 HUD.H

 - Weapon and object icons will be shown at the bottom left
   corner, orbitating and simulating scalling (frame reload).
   When both of them are simultaneously achieved the sorting
   order must be taking care of to resolve which one must be
   placed on top of the other.

***********************************************************/
#ifndef _HUD_H_
#define _HUD_H_


// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"


// CONSTANT ///////////////////////////////////////////////

#define HUD_ICON_MONEY_POSX				12
#define HUD_ICON_MONEY_POSY				12
#define HUD_ICON_MONEY_COUNTER_POSX		36
#define HUD_ICON_MONEY_COUNTER_POSY		20

#define HUD_ICONS_ENHACEMENTS_POSX  	12
#define HUD_ICONS_ENHACEMENTS_POSY  	200

#define HUD_BAR_ENERGY_POSX				304
#define HUD_BAR_ENERGY_POSY				64




// FUNCTIONS //////////////////////////////////////////////

void HUD_drawMoney(u8);
void HUD_drawEnhancements(u8, u8);
void HUD_drawEnergy(u8, u8);


#endif // _HUD_H_

