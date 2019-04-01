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
  	Enemy_IABoss,
  	{ 128, 128, 128, 128 }
  },
  // Clam
  {
  	&nmy_clam_sprite,
  	Enemy_IAClam,
  	{ 128, 128, 128, 128 }
  },
  // Frog
  {
  	&nmy_frog_sprite,
  	Enemy_IAFrog,
  	{ 128, 128, 128, 128 }
  },
  // Octopus
  {
  	&nmy_octopus_sprite,
  	Enemy_IAOctopus,
  	{ 128, 128, 128, 128 }
  },
  // Plant
  {
  	&nmy_plant_sprite,
  	Enemy_IAPlant,
  	{ 128, 128, 128, 128 }
  },
  // Shooter
  {
  	&nmy_shooter_sprite,
  	Enemy_IAShooter,
  	{ 128, 128, 128, 128 }
  },
  // Slug
  {
  	&nmy_slug_sprite,
  	Enemy_IASlug,
  	{ 128, 128, 128, 128 }
  },
  // Turret
  {
  	&nmy_turret_sprite,
  	Enemy_IATurret,
  	{ 128, 128, 128, 128 }
  },
};

// Enemies handler buffer
struct t_enemy_data enemies[MAX_ENEMIES_ROOM];

// FUNCTIONS //////////////////////////////////////////////


//---------------------------------------------------------
// ENEMY CLEAR DATA
//---------------------------------------------------------
void Enemy_clearData()
{
	u8 i;
	for(i = 0; i < MAX_ENEMIES_ROOM; i++)
		SPR_releaseSprite(enemies[i].sprite);

  SPR_update();
}


//---------------------------------------------------------
// NEW ENEMY
//---------------------------------------------------------
void Enemy_new(const struct t_enemy_spawn spawndata, u8 id, u8 difficulty)
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
void Enemy_IABoss(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA CLAM
//---------------------------------------------------------
void Enemy_IAClam(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA FROG
//---------------------------------------------------------
void Enemy_IAFrog(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA OCTOPUS
//---------------------------------------------------------
void Enemy_IAOctopus(u8 id, u8 level)
{

}


//---------------------------------------------------------
// IA PLANT
//---------------------------------------------------------
void Enemy_IAPlant(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA SHOOTER
//---------------------------------------------------------
void Enemy_IAShooter(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA SLUG
//---------------------------------------------------------
void Enemy_IASlug(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA TURRET
//---------------------------------------------------------
void Enemy_IATurret(u8 id, u8 level)
{

}

