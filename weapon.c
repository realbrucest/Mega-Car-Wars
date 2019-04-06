/***********************************************************

 MEGA CAR WARS

 WEAPON.C
***********************************************************/

#include "inc/weapon.h"

// LIBS ///////////////////////////////////////////////////


// ASSETS /////////////////////////////////////////////////
#include "sprite.h"


// DATA ///////////////////////////////////////////////////

// Types
const struct t_weapon_def weapons[WEAPON_MAX] =
{
	{
        &weapon_flytrap_sprite
	},
	{
        &weapon_magnet_sprite
	},
	{
        &weapon_drill_sprite
	}
};


// Handler
struct t_weapon_data weapon;

