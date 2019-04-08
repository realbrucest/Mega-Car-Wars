/***********************************************************

 MEGA CAR WARS

 ENEMY.H
***********************************************************/
#ifndef _ENEMY_H_
#define _ENEMY_H_

// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"

// LIBS ///////////////////////////////////////////////////


// CONSTANT ///////////////////////////////////////////////
#define ENEMY_PALETTE			PAL3

#define MAX_ENEMY_TYPES 		7
#define MAX_ENEMIES_ROOM		8

// IDs
#define ENEMY_TIRELAUNCHER	0
#define ENEMY_CRAZYCAR		1
#define ENEMY_HELICOPTER	2
#define ENEMY_SNAKE			3
#define ENEMY_CROW			4
#define ENEMY_DRON			5
#define ENEMY_PENGUIN		6


#define VOID_ENEMY			255

#define ENEMY_DEFAULT_HITPOINTS	1

// States (mainly for animation purposes)
#define ENEMY_STATUS_VOID   0
#define ENEMY_STATUS_STAND  1
#define ENEMY_STATUS_WALK   2
#define ENEMY_STATUS_JUMP   3
#define ENEMY_STATUS_FALL   4
#define ENEMY_STATUS_CLIMB  5
#define ENEMY_STATUS_DEATH  6


// STRUCTS ////////////////////////////////////////////////

// Enemy definition
struct t_enemy_def
{
	const SpriteDefinition *sprite;
	void (*IA)(u8, u8);
	u8 hitpoints;
};

// Enemy spawn
struct t_enemy_spawn
{
	u8 type;
	const u16 startx, starty;
};

// Enemy data
struct t_enemy_data
{
	struct t_enemy_def type;

	Sprite* sprite;

	fix16 posx, posy;
	fix16 movx, movy;

	u8 status;
	u8 energy;

	void (*IA)(u8, u8);
};

// DATA ///////////////////////////////////////////////////

// Types
extern const struct t_enemy_def enemy_types[MAX_ENEMY_TYPES];
// Handler buffer
extern struct t_enemy_data enemies[MAX_ENEMIES_ROOM];


// FUNCTIONS //////////////////////////////////////////////

// IAs
void Enemy_IATireLauncher(u8, u8);
void Enemy_IACrazyCar(u8, u8);
void Enemy_IAHelicopter(u8, u8);
void Enemy_IASnake(u8, u8);
void Enemy_IACrow(u8, u8);
void Enemy_IADron(u8, u8);
void Enemy_IAPenguin(u8, u8);

//
void Enemy_clearData();
void Enemy_new(const struct t_enemy_spawn, u8, u8);


#endif // _ENEMY_H_
