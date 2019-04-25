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
#include "inc/car.h"
#include "inc/scenario.h"
#include "inc/scroll.h"
#include "inc/screen.h"

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
    SPR_init(80, 256, 256);

    Screen_setLanguage(LANGUAGE_SPANISH);

    Scenario_setCurrent(SCENARIO_FIRST);
    Scenario_load(scenario.current);

    Car_init(64, 64, CAR_DIR_LEFT);

    VDP_setHilightShadow(TRUE);

    Scenario_setRegion(SCENARIO_POS_X, SCENARIO_POS_Y, mapx, mapy,
        SCREEN_WIDTH_TILES, SCREEEN_HEIGHT_TILES);

    Scroll_cameraInit(SCENARIO_POS_X, SCENARIO_POS_Y, CAMERA_DEFAULT_SPEED);

    Screen_infoSplashOpen(2);


   // MAIN LOOP
   while(TRUE)
    {

        handleInput();

        //Scroll_cameraUpdate();

        Car_update();

        SPR_update();

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
        camera.posx += camera.speed;
        car.angle += car.turnspeed;

        // if (camera.posx < CAMERA_BOUNDARY_LEFT) camera.posx = CAMERA_BOUNDARY_LEFT;
    }
    else if ((value & BUTTON_RIGHT))
    {
        camera.posx -= camera.speed;
        car.angle -= car.turnspeed;

        // if (camera.posx > CAMERA_BOUNDARY_RIGHT) camera.posx = FIX32(0);
    }

    if ((value & BUTTON_UP))
    {
        camera.posy -= camera.speed;
        //car.posy--; // WIP
        fix16 cdx = sinFix16(car.angle);
        fix16 cdy = - cosFix16(car.angle);

        car.dirx = fix16ToInt(cdx);
        car.diry = fix16ToInt(cdy);


        // if (camera.posx < CAMERA_BOUNDARY_UP) camera.posx = CAMERA_BOUNDARY_UP;
    }
    else if ((value & BUTTON_DOWN))
    {
        camera.posy += camera.speed;
        car.posy++; // WIP

        // if (camera.posy > CAMERA_BOUNDARY_DOWN) camera.posy = FIX32(0);
    }


}

