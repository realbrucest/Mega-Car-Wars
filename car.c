/***********************************************************

 MEGA CAR WARS

 CAR.C
***********************************************************/

#include "inc/car.h"

// LIBS ///////////////////////////////////////////////////
#include "kdebug.h"

// ASSETS /////////////////////////////////////////////////
#include "sprite.h"


// DATA ///////////////////////////////////////////////////

// Handler
struct t_car car;

// FUNCTIONS //////////////////////////////////////////////

//---------------------------------------------------------
// INIT
//---------------------------------------------------------
void Car_init(u8 posx, u8 posy, u16 angle)
{
	car.posx = posx;//FIX32(posx);
	car.posy = posy;//FIX32(posy);
	car.angle = angle;

	car.turnspeed = CAR_DEFAULT_TURNSPEED;

    car.sprite = SPR_addSprite(&car_sprite, car.posx, car.posy, TILE_ATTR(CAR_DEFAULT_PALETTE, TRUE, FALSE, FALSE));

    // Set the general sprites palette as PAL3
    VDP_setPalette(PAL3, (u16*) car_sprite.palette->data);
}


//---------------------------------------------------------
// UPDATE
//---------------------------------------------------------
void Car_update()
{

	if (car.angle > CAR_DIR_LOOP) car.angle = CAR_DIR_DOWN;
	if (car.angle < CAR_DIR_DOWN) car.angle = CAR_DIR_LOOP;

	fix16 cdx = sinFix16(car.angle);
	fix16 cdy = - cosFix16(car.angle);

	car.dirx = fix16ToInt(cdx);
	car.diry = fix16ToInt(cdy);

	car.posx += car.dirx;
	car.posy += car.diry;
	car.dirx *= 0.95;
	car.diry *= 0.95;

	u8 frame = CAR_ANGLE_TO_FRAME(car.angle);

	KDebug_AlertNumber (car.angle);
	KDebug_AlertNumber (frame);

	SPR_setFrame(car.sprite, CAR_ANGLE_TO_FRAME(car.angle));
	SPR_setPosition(car.sprite, car.posx, car.posy);
}
