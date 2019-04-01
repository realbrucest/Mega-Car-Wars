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

#define CAR_DIR_RIGHT	0		// Angle range: 0 to 1027
#define CAR_DIR_UP		256		
#define CAR_DIR_DOWN	768
#define CAR_DIR_LEFT	512



// STRUCTS ////////////////////////////////////////////////
struct t_car
{
    fix32 mapx, mapy; // Map coords
    fix32 posx, posy; // Screen coords
    
    fix32 dirx, diry;
    
    u8 turnspeed;	// Angle addition or substraction

    fix32 angle;
};

// DATA ///////////////////////////////////////////////////

// Handler
extern struct t_car car;

// FUNCTIONS //////////////////////////////////////////////

void Car_init(u8, u8, u8);


#endif // _CAR_H_

