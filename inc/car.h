/***********************************************************

 MEGA CAR WARS

 CAR.H
***********************************************************/
#ifndef _CAR_H_
#define _CAR_H_

// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"

// LIBS ///////////////////////////////////////////////////


// ASSETS /////////////////////////////////////////////////


// CONSTANT ///////////////////////////////////////////////

#define CAR_DIR_DOWN	0   // Angle range: 0 to 1023
#define CAR_DIR_RIGHT	256
#define CAR_DIR_UP		512
#define CAR_DIR_LEFT	768
#define CAR_DIR_LOOP    1023

#define CAR_ANGLE_TO_FRAME(ang) ((ang) / 42)

#define CAR_DEFAULT_TURNSPEED   16

#define CAR_DEFAULT_PALETTE	PAL3



// STRUCTS ////////////////////////////////////////////////
struct t_car
{
    Sprite *sprite;

    u16 mapx, mapy; // Map coords
    u16 posx, posy; // Screen coords

    u16 dirx, diry;

    u8 turnspeed;	// Angle addition or substraction

    s16 angle;

    struct t_weapon *weapon;
};

// DATA ///////////////////////////////////////////////////

// Handler
extern struct t_car car;

// FUNCTIONS //////////////////////////////////////////////

void Car_init(u8, u8, u16);
void Car_update();


#endif // _CAR_H_

