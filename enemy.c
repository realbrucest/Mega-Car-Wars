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
  // Tire launcher
  {
  	&nmy_tirelauncher_sprite,
  	Enemy_IATireLauncher,
    ENEMY_DEFAULT_HITPOINTS
  },
  // Crazy car
  {
  	&nmy_crazycar_sprite,
  	Enemy_IACrazyCar,
    ENEMY_DEFAULT_HITPOINTS
  },
  // Helicopter
  {
  	&nmy_helicopter_sprite,
  	Enemy_IAHelicopter,
    ENEMY_DEFAULT_HITPOINTS
  },
  // Sanke
  {
  	&nmy_snake_sprite,
  	Enemy_IASnake,
    ENEMY_DEFAULT_HITPOINTS
  },
  // Crow
  {
  	&nmy_crow_sprite,
  	Enemy_IACrow,
    ENEMY_DEFAULT_HITPOINTS
  },
  // Dron
  {
  	&nmy_dron_sprite,
  	Enemy_IADron,
    ENEMY_DEFAULT_HITPOINTS
  },
  // Penguin
  {
  	&nmy_penguin_sprite,
  	Enemy_IAPenguin,
    ENEMY_DEFAULT_HITPOINTS
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
	enemies[id].energy = enemy_types[type].hitpoints;

	SPR_setPosition(enemies[id].sprite, posx, posy);
}

//---------------------------------------------------------
// IA TIRE LAUNCHER
//---------------------------------------------------------
void Enemy_IATireLauncher(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA CRAZY CAR
//---------------------------------------------------------
void Enemy_IACrazyCar(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA HELICOPTER
//---------------------------------------------------------
void Enemy_IAHelicopter(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA SNAKE
//---------------------------------------------------------
void Enemy_IASnake(u8 id, u8 level)
{

}


//---------------------------------------------------------
// IA CROW
//---------------------------------------------------------
void Enemy_IACrow(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA DRON
//---------------------------------------------------------
void Enemy_IADron(u8 id, u8 level)
{

}

//---------------------------------------------------------
// IA PENGUIN
//---------------------------------------------------------
void Enemy_IAPenguin(u8 id, u8 level)
{

}

