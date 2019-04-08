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

#define LANGUAGE_MAX		6
#define LANGUAGE_ENGLISH	0
#define LANGUAGE_SPANISH	1
#define LANGUAGE_PORTUGUESE	2
#define LANGUAGE_FRENCH		3
#define LANGUAGE_GERMAN		4
#define LANGUAGE_RUSSIAN	5

#define INFOSPLASH_NUMLINES  4
#define INFOSPLASH_LINESIZE  31
#define INFOSPLASH_MAX       22

// Level 0 ("Circuit") messages
#define INFOSPLASH_ID_AVOID_CONTACT					0
#define INFOSPLASH_ID_PUSHABLE_OBJECTS				1
#define INFOSPLASH_ID_ENTER_GARAGE					2
#define INFOSPLASH_ID_REFILL_ENERGY					3
#define INFOSPLASH_ID_FLYING_ENEMIES				4
#define INFOSPLASH_ID_PUZZLES_THINKING				5
#define INFOSPLASH_ID_ENTER_WITH_COINS_1			6
#define INFOSPLASH_ID_ELIMINATE_GROUND_ENEMIES_1	7
#define INFOSPLASH_ID_CONVINCE_POLICE_OFFICER		8
#define INFOSPLASH_ID_ENTER_WITH_WEAPONS_1			9
#define INFOSPLASH_ID_TOLL_BARRIER					10
// Level 1 ("Desert") messages
#define INFOSPLASH_ID_ENTER_WITH_COINS_2			11
#define INFOSPLASH_ID_ELIMINATE_GROUND_ENEMIES_2	12
#define INFOSPLASH_ID_ENTER_WITH_COINS_3			13
#define INFOSPLASH_ID_BUY_AXE						14
#define INFOSPLASH_ID_BREAK_THE_BARRIER				15
// Level 2 ("Snowy") messages
#define INFOSPLASH_ID_USE_TUNNELS					16
#define INFOSPLASH_ID_ENTER_WITH_COINS_4			17
#define INFOSPLASH_ID_ELIMINATE_GROUND_ENEMIES_3	18
#define INFOSPLASH_ID_ENTER_WITH_COINS_5			19
#define INFOSPLASH_ID_BUY_FLAMETHROWER				20
#define INFOSPLASH_ID_BUY_MELT_OBSTACLES			21
// Void message value
#define INFOSPLASH_ID_VOID 							255

#define INFOSPLASH_CANVAS_POSX					2
#define INFOSPLASH_CANVAS_POSY					4
#define INFOSPLASH_CANVAS_WIDTH					36
#define INFOSPLASH_CANVAS_HEIGHT				20

#define INFOSPLASH_MECHANIC_POSX				16
#define INFOSPLASH_MECHANIC_POSY				96
#define INFOSPLASH_MECHANIC_DEFAULT_PALETTE		PAL2

#define INFOSPLASH_ANIMATION_DELAY_DEFAULT		60

#define INFOSPLASH_TEXT_POSX		5
#define INFOSPLASH_TEXT_POSY		5


// MACROS /////////////////////////////////////////////////

#define Screen_setLanguage(lang); language = lang;
#define Screen_infoSplashLoadFont(); VDP_loadFont(&infosplash_font, TRUE);

// STRUCTS ////////////////////////////////////////////////

// Ingame Info splash
struct t_infosplash
{
	void (*animguy)();
	void (*cartoon)();
    const char text[LANGUAGE_MAX][INFOSPLASH_NUMLINES][INFOSPLASH_LINESIZE];
};


// DATA ///////////////////////////////////////////////////

// Info messages
extern const struct t_infosplash infosplahes[INFOSPLASH_MAX];

// Info guy sprite
extern Sprite *infoguy;

// Language set
extern u8 language;

// FUNCTIONS //////////////////////////////////////////////

void Screen_infoSplashOpen(u8);
void Screen_infoSplashClose();

void Screen_waitForAnimation(u8);


#endif // _SCREEN_H_

