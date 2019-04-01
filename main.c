/**********************************************************

 MEGA CAR WARS

 MAIN.C (TEST)

**********************************************************/

// SGDK LIBS //////////////////////////////////////////////
#include <genesis.h>


// ASSETS /////////////////////////////////////////////////
#include "gfx.h"
#include "sprite.h"

// LIBS ///////////////////////////////////////////////////
#include "inc/scenario.h"
#include "inc/scroll.h"
#include "inc/car.h"

// FUNCTIONS //////////////////////////////////////////////
static void handleInput();


///////////////////////////////////////////////////////////
// MAIN
///////////////////////////////////////////////////////////
int main()
{

    // Local data _________________________________________

    // Camera variables
    u16 mapx = 266;
    u16 mapy = 12;



    // Sprite stuff
    // u16 sprite_x, sprite_y, sprite_movx, sprite_movy;
    // Sprite* sprite;

    // Process ____________________________________________

    // Init and load the sprite
    // SPR_init(16, 256, 256);
    // sprite_x = 0; sprite_y = 0; sprite_movx = 1; sprite_movy = 1;
    // sprite = SPR_addSprite(&star_sprite, sprite_x, sprite_y, TILE_ATTR(PAL3, TRUE, FALSE, FALSE));

    // Set the palette from the sprite
    // VDP_setPalette(PAL3, (u16*) star_sprite.palette->data);

    Scenario_setCurrent(SCENARIO_FIRST);
    Scenario_load(scenario.current);

    VDP_setHilightShadow(TRUE);

    Scenario_setRegion(SCENARIO_POS_X, SCENARIO_POS_Y, mapx, mapy,
        SCREEN_WIDTH_TILES, SCREEEN_HEIGHT_TILES);

    Scroll_cameraInit(SCENARIO_POS_X, SCENARIO_POS_Y, CAMERA_DEFAULT_SPEED);


   // MAIN LOOP
   while(TRUE)
    {

        handleInput();

        Scroll_cameraUpdate();

        // SPR_setPosition(sprite, sprite_x, sprite_y);

        // SPR_update();

        VDP_waitVSync();
    }

    return 0;
}

/*********************************************************/

static void handleInput()
{
    u16 value = JOY_readJoypad(JOY_1);

    if ((value & BUTTON_LEFT))
    {
        camera.posx -= camera.speed;
        car.angle -= car.turnspeed;

        if (camera.posx < CAMERA_BOUNDARY_LEFT) camera.posx = CAMERA_BOUNDARY_LEFT;
    }
    else if ((value & BUTTON_RIGHT))
    {
        camera.posx += camera.speed;
        car.angle += car.turnspeed;

        if (camera.posx > CAMERA_BOUNDARY_RIGHT) camera.posx = FIX32(0);
    }

    if ((value & BUTTON_UP))
    {
        camera.posy -= camera.speed;

        if (camera.posx < CAMERA_BOUNDARY_UP) camera.posx = CAMERA_BOUNDARY_UP;
    }
    else if ((value & BUTTON_DOWN))
    {
        camera.posy += camera.speed;

        if (camera.posy > CAMERA_BOUNDARY_DOWN) camera.posy = FIX32(0);
    }


}

