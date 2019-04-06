/***********************************************************

 MEGA CAR WARS

 SCROLL.H
***********************************************************/
#ifndef _SCROLL_H_
#define _SCROLL_H_


// SGDK LIBS //////////////////////////////////////////////
#include "genesis.h"


// LIBS ///////////////////////////////////////////////////
#include "scenario.h"


// CONSTANT ///////////////////////////////////////////////
#define CAMERA_DEFAULT_SPEED	FIX32(1)

#define CAMERA_BOUNDARY_LEFT	0 // TODO: CHECK VALUES!
#define CAMERA_BOUNDARY_RIGHT	2048
#define CAMERA_BOUNDARY_UP		0
#define CAMERA_BOUNDARY_DOWN	1024

#define CAMERA_NUM_ROWS			SCENARIO_HEIGHT_TILES

// STRUCT /////////////////////////////////////////////////

// Handler
struct Camera
{
	u32 posx;
	u32 posy;

	u32 limitx;
	u32 limity;

	u8 column;
	u8 row;

	fix32 speed;
};

// DATA ///////////////////////////////////////////////////

// Handler
extern struct Camera camera;


// FUNCTIONS //////////////////////////////////////////////
void Scroll_cameraInit(u8, u8, fix32);
void Scroll_cameraUpdate();

#endif
