/***********************************************************

 MEGA CAR WARS

 PICKUP.C

 Coins, health and info-spots question marks

***********************************************************/
#include "inc/pickup.h"


// LIBS ///////////////////////////////////////////////////
#include "inc/scenario.h"
#include "inc/screen.h"
#include "inc/hud.h"


// DATA ///////////////////////////////////////////////////
u8 colected_energy;
u8 colected_coins;


// FUNCTIONS //////////////////////////////////////////////


//---------------------------------------------------------
// INIT
//---------------------------------------------------------
u8 Pickup_init()
{
    colected_energy = 0;
    colected_coins = 0;
}


//---------------------------------------------------------
// PICKUP COIN
//---------------------------------------------------------
u8 Pickup_Coin()
{
    if (colected_coins < MAX_COLECTED_COINS) colected_coins++;

    HUD_drawCoins(colected_coins);
}


//---------------------------------------------------------
// PICKUP ENERGY
//---------------------------------------------------------
u8 Pickup_Energy()
{
    if (colected_energy < MAX_COLECTED_ENERGY) colected_energy++;

    HUD_drawEnergy(colected_energy);
}


//---------------------------------------------------------
// IS A COIN?
//---------------------------------------------------------
u8 Pickup_isCoin(u8 mapx, u8 mapy)
{
    return (scenario.hardnessmap[(mapy * SCENARIO_WIDTH_TILES) + mapx] == TILE_COIN);
}


//---------------------------------------------------------
// IS ENERGY?
//---------------------------------------------------------
u8 Pickup_isEnergy(u8 mapx, u8 mapy)
{
    return (scenario.hardnessmap[(mapy * SCENARIO_WIDTH_TILES) + mapx] == TILE_ENERGY);
}


//---------------------------------------------------------
// IS INFO?
// Check for "INFOSPLASH_ID_VOID" instead of zero
//---------------------------------------------------------
u8 Pickup_isInfo(u8 mapx, u8 mapy)
{
    u8 value = scenario.hardnessmap[(mapy * SCENARIO_WIDTH_TILES) + mapx];

    if TILE_IS_INFO(value)
    {
        // Return Info ID for that map
        return TILE_GET_ATTRIBUTE(value);
    }

    // Else
    return INFOSPLASH_ID_VOID;
}




