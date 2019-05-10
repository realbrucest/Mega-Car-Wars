/***********************************************************

 MEGA CAR WARS

 PICKUP.H

 Coins, health and info-spots question marks

 Reference:
 https://gamedevelopment.tutsplus.com/tutorials/updated-primer-for-creating-isometric-worlds-continued--cms-28503


***********************************************************/
#ifndef _PICKUP_H_
#define _PICKUP_H_

// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"

// LIBS ///////////////////////////////////////////////////


// CONSTANT ///////////////////////////////////////////////
#define MAX_COLLECTED_ENERGY			99
#define MAX_COLLECTED_COINS				99


// DATA ///////////////////////////////////////////////////
u8 colected_energy;
u8 colected_coins;


// FUNCTIONS //////////////////////////////////////////////

u8 Pickup_init();

u8 Pickup_Coin(u8, u8);
u8 Pickup_Energy(u8, u8)

u8 Pickup_isCoin(u8, u8);
u8 Pickup_isEnergy(u8, u8)
u8 Pickup_isInfo(u8, u8)


 #endif // _PICKUP_H_

