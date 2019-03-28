/***********************************************************
 ENEMY.H
***********************************************************/
#ifndef _ENEMY_H_
#define _ENEMY_H_

// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"

// LIBS ///////////////////////////////////////////////////


// CONSTANT ///////////////////////////////////////////////
#define ENEMY_PALETTE			PAL3

#define NUM_DIFFICULT_LEVELS	4

#define MAX_ENEMY_TYPES 		8
#define MAX_ENEMIES_ROOM		8

// IDs
#define ENEMY_BOSS 			0
#define ENEMY_CLAM 			1
#define ENEMY_SLUG			2
#define ENEMY_SHOOTER		3
#define ENEMY_PLANT			4
#define ENEMY_OCTOPUS		5
#define ENEMY_FROG			6
#define ENEMY_TURRET		7

#define VOID_ENEMY			255


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
	u8 hitpoints[NUM_DIFFICULT_LEVELS];
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
void EnemyIABoss(u8, u8);
void EnemyIAClam(u8, u8);
void EnemyIAFrog(u8, u8);
void EnemyIAOctopus(u8, u8);
void EnemyIAPlant(u8, u8);
void EnemyIAShooter(u8, u8);
void EnemyIASlug(u8, u8);
void EnemyIATurret(u8, u8);

//
void EnemyClearData();
void EnemyNew(const struct t_enemy_spawn, u8, u8);


#endif // _ENEMY_H_
