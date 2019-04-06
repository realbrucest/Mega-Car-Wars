/***********************************************************

 MEGA CAR WARS

 WEAPON.H
***********************************************************/
#ifndef _WEAPON_H_
#define _WEAPON_H_

// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"

// LIBS ///////////////////////////////////////////////////


// ASSETS /////////////////////////////////////////////////


// CONSTANT ///////////////////////////////////////////////

#define WEAPON_MAX		3

#define WEAPON_FLYTRAP	0
#define WEAPON_MAGNET	1
#define WEAPON_DRILL	2

#define WEAPON_STATUS_VOID		0
#define WEAPON_STATUS_IDDLE		1
#define WEAPON_STATUS_ACTIVE	2


// STRUCTS ////////////////////////////////////////////////

// Definition
struct t_weapon_def
{
	const SpriteDefinition *sprite;	// HUD icon and ingame sprite
	//u8 name[12];
};

// Data
struct t_weapon_data
{
	Sprite icon;
	Sprite sprite;
	u8 type:4;
	u8 status:4;
};


// DATA ///////////////////////////////////////////////////

// Types
extern const struct t_weapon_def weapons[WEAPON_MAX];

// Handler
extern struct t_weapon_data weapon;

#endif // _WEAPON_H_

