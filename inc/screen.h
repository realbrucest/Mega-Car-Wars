/***********************************************************

 MEGA CAR WARS

 SCREEN.H
***********************************************************/
#ifndef _SCREEN_H_
#define _SCREEN_H_

// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"

// LIBS ///////////////////////////////////////////////////


// ASSETS /////////////////////////////////////////////////


// CONSTANT ///////////////////////////////////////////////

#define INFOSPLASH_NUMLINES  4
#define INFOSPLASH_LINESIZE  31
#define INFOSPLASH_MAX       11//22




// STRUCTS ////////////////////////////////////////////////

// Ingame Info splash
struct t_infosplash
{
	const SpriteDefinition *icon;
    u8 text[INFOSPLASH_NUMLINES][INFOSPLASH_LINESIZE];
};


// DATA ///////////////////////////////////////////////////

// Info messages
extern const struct t_infosplash infosplahes[INFOSPLASH_MAX];


#endif // _SCREEN_H_

