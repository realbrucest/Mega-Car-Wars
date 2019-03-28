// SGDK LIBS //////////////////////////////////////////////
#include <genesis.h>

// ASSETS /////////////////////////////////////////////////
#include "gfx.h"
#include "sprite.h"

// CONSTANT VALUES ////////////////////////////////////////
#define SCREEN_WIDTH_TILES     40
#define SCREEEN_HEIGHT_TILES   28

#define SCENARIO_POS_X          0
#define SCENARIO_POS_Y          0

#define SCENARIO_WIDTH_TILES    SCREEN_WIDTH_TILES
#define SCENARIO_HEIGHT_TILES   SCREEEN_HEIGHT_TILES

#define SCENARIO_NUM_TILES      SCENARIO_WIDTH_TILES * SCENARIO_HEIGHT_TILES


///////////////////////////////////////////////////////////
// MAIN
///////////////////////////////////////////////////////////
int main()
{

    // Local data _________________________________________

    // Scenario (planes)
    u16 tilemap_buffer[SCENARIO_NUM_TILES];
    u16 *aplan_tilemap = &tilemap_buffer[0];

    Map *prioritymap = unpackMap(bga_priority_image.map, NULL);
    u16 *shadowmap_tilemap = prioritymap->tilemap;

    u16 numtiles = SCENARIO_NUM_TILES;

    // Sprite stuff
    u16 sprite_x, sprite_y, sprite_movx, sprite_movy;
    Sprite* sprite;

    // Process ____________________________________________

    // Dump BGA tilemap into RAM
    memcpyU16(aplan_tilemap, bga_image.map->tilemap, SCENARIO_NUM_TILES);

    while(numtiles--)
    {
        if(*shadowmap_tilemap)
            *aplan_tilemap |= TILE_ATTR_PRIORITY_MASK;

        aplan_tilemap++;
        shadowmap_tilemap++;
    }

    // Load tileset and tilemap for APLAN
    VDP_loadTileSet(bga_image.tileset, bgb_image.tileset->numTile, DMA);
    VDP_setTileMapDataRectEx(PLAN_A, &tilemap_buffer[0], 0/*u16 basetile*/,
        SCENARIO_POS_X, SCENARIO_POS_Y,
        SCENARIO_WIDTH_TILES, SCENARIO_HEIGHT_TILES, SCENARIO_WIDTH_TILES);

    // Free RAM buffers
    MEM_free(prioritymap);
    MEM_free(aplan_tilemap);

    // Load scenario for BPLAN "as it is"
    VDP_drawImage(PLAN_B, &bgb_image, SCENARIO_POS_X, SCENARIO_POS_Y);

    // Init and load the sprite
    SPR_init(16, 256, 256);
    sprite_x = 0; sprite_y = 0; sprite_movx = 1; sprite_movy = 1;
    sprite = SPR_addSprite(&star_sprite, sprite_x, sprite_y, TILE_ATTR(PAL3, TRUE, FALSE, FALSE));

    // Set the palette taken from the scenario (BLAN image)
    VDP_setPalette(PAL0, (u16*) bgb_image.palette->data);

    // Set the palette from the sprite
    VDP_setPalette(PAL3, (u16*) star_sprite.palette->data);

    // Enable HL/S mode
    VDP_setHilightShadow(1);

   // LOOP
   while(TRUE)
    {

        // Check border collisions (reverse mov)
        if(sprite_x < 0 || sprite_x > 304) sprite_movx *= -1;
        if(sprite_y < 0 || sprite_y > 196) sprite_movy *= -1;

        sprite_x += sprite_movx; sprite_y += sprite_movy;

        SPR_setPosition(sprite, sprite_x, sprite_y);

        SPR_update();

        VDP_waitVSync();
    }

    return 0;
}

