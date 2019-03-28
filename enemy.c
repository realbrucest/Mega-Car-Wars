/***********************************************************
 
 MEGA CAR WARS

 ENEMY.C
***********************************************************/
#include "inc/enemy.h"

// LIBS ///////////////////////////////////////////////////


// ASSETS /////////////////////////////////////////////////
#include "sprite.h"


// DATA ///////////////////////////////////////////////////

// ENEMY TYPE DEFINITIONS
const struct t_enemy_def enemy_types[MAX_ENEMY_TYPES] =
{
  // Boss
  {
  	&nmy_boss_sprite,
  	EnemyIABoss,
  	{ 128, 128, 128, 128 }
  },
  // Clam
  {
  	&nmy_clam_sprite,
  	EnemyIAClam,
  	{ 128, 128, 128, 128 }
  },
  // Frog
  {
  	&nmy_frog_sprite,
  	EnemyIAFrog,
  	{ 128, 128, 128, 128 }
  },
  // Octopus
  {
  	&nmy_octopus_sprite,
  	EnemyIAOctopus,
  	{ 128, 128, 128, 128 }
  },
  // Plant
  {
  	&nmy_plant_sprite,
  	EnemyIAPlant,
  	{ 128, 128, 128, 128 }
  },
  // Shooter
  {
  	&nmy_shooter_sprite,
  	EnemyIAShooter,
  	{ 128, 128, 128, 128 }
  },
  // Slug
  {
  	&nmy_slug_sprite,
  	EnemyIASlug,
  	{ 128, 128, 128, 128 }
  },
  // Turret
  {
  	&nmy_turret_sprite,
  	EnemyIATurret,
  	{ 128, 128, 128, 128 }
  },
};

// Enemies handler buffer
struct t_enemy_data enemies[MAX_ENEMIES_ROOM];

// FUNCTIONS //////////////////////////////////////////////


//---------------------------------------------------------
// ENEMY CLEAR DATA
//---------------------------------------------------------
void EnemyClearData()
{
	u8 i;
	for(i = 0; i < MAX_ENEMIES_ROOM; i++)
		SPR_releaseSprite(enemies[i].sprite);

  SPR_update();
}


//---------------------------------------------------------
// NEW ENEMY
//---------------------------------------------------------
void EnemyNew(const struct t_enemy_spawn spawndata, u8 id, u8 difficulty)
{
	u8 type = spawndata.type;
	u16 posx = spawndata.startx;
	u16 posy = spawndata.starty;

	enemies[id].sprite = SPR_addSprite(enemy_types[type].sprite, posx, posy,
		TILE_ATTR(ENEMY_PALETTE, TRUE, FALSE, FALSE));

	enemies[id].posx = intToFix16(posx);
	enemies[id].posy = intToFix16(posy);

	enemies[id].status = ENEMY_STATUS_STAND;
	enemies[id].energy = enemy_types[type].hitpoints[difficulty];

	SPR_setPosition(enemies[id].sprite, posx, posy);
}

//---------------------------------------------------------
// IA BOSS
//---------------------------------------------------------
void EnemyIABoss(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA CLAM
//---------------------------------------------------------
void EnemyIAClam(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA FROG
//---------------------------------------------------------
void EnemyIAFrog(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA OCTOPUS
//---------------------------------------------------------
void EnemyIAOctopus(u8 id, u8 level)
{

}


//---------------------------------------------------------
// IA PLANT
//---------------------------------------------------------
void EnemyIAPlant(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA SHOOTER
//---------------------------------------------------------
void EnemyIAShooter(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA SLUG
//---------------------------------------------------------
void EnemyIASlug(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA TURRET
//---------------------------------------------------------
void EnemyIATurret(u8 id, u8 level)
{

}

