/***********************************************************

 MEGA CAR WARS

 SCROLL.C
***********************************************************/
#include "inc/scroll.h"

// LIBS ///////////////////////////////////////////////////
#include "inc/scenario.h"


// DATA ///////////////////////////////////////////////////
struct Camera camera;


// FUNCTIONS //////////////////////////////////////////////

//---------------------------------------------------------
// CAMERA INIT
//---------------------------------------------------------
void Scroll_cameraInit(u8 column, u8 row, fix32 speed)
{
	camera.column = column;
	camera.row = row;

	camera.posx = column << 3;
	camera.posy = row << 3;

	camera.speed = speed;
}

//---------------------------------------------------------
// CAMERA UPDATE
//---------------------------------------------------------
void Scroll_cameraUpdate()
{
		u8 column = camera.column;
		u8 row = camera.row;

		// Draw right column
		if (column > camera.column)
			Scenario_setRegion(
				SCENARIO_POS_X + SCREEN_WIDTH_TILES, SCENARIO_POS_Y,
				column + SCREEN_WIDTH_TILES, row, 1, SCREEEN_HEIGHT_TILES);
		// Draw left column
		else if (column < camera.column)
			Scenario_setRegion(
				SCENARIO_POS_X,	SCENARIO_POS_Y,
				column, row, 1, SCREEEN_HEIGHT_TILES);

		// Draw bottom row
		if (column > camera.row)
			Scenario_setRegion(
				SCENARIO_POS_X, SCENARIO_POS_Y + SCREEEN_HEIGHT_TILES,
				column, row + SCREEEN_HEIGHT_TILES, SCREEN_WIDTH_TILES, 1);
		// Draw upper row
		else if (column < camera.row)
			Scenario_setRegion(
				SCENARIO_POS_X,	SCENARIO_POS_Y + SCREEEN_HEIGHT_TILES,
				column, row, 1, SCREEEN_HEIGHT_TILES);


        VDP_setHorizontalScroll(PLAN_A, fix32ToInt(-camera.posx));
        VDP_setHorizontalScroll(PLAN_B, fix32ToInt(-camera.posx));

        VDP_setVerticalScroll(PLAN_A,fix32ToInt(camera.posy));
        VDP_setVerticalScroll(PLAN_B,fix32ToInt(camera.posy));
}
