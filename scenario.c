/***********************************************************

 MEGA CAR WARS

 SCENARIO.C
***********************************************************/

#include "inc/scenario.h"

// LIBS ///////////////////////////////////////////////////



// DATA ///////////////////////////////////////////////////

// Definitions
const struct t_scenario_def scenarios[SCENARIO_MAX] =
{
	// SCENARIO 0: CIRCUIT
	{
		&scn_00_bga_image, &scn_00_bgb_image,
		NULL,
		NULL,
		3, 1,
		NULL
	},
	// SCENARIO 1: DESERT
	{
		&scn_01_bga_image, &scn_01_bgb_image,
		NULL,
		NULL,
		2, 2,
		NULL
	},
	// SCENARIO 2: SNOWY
	{
		&scn_02_bga_image, &scn_02_bgb_image,
		NULL,
		NULL,
		2, 2,
		NULL
	}
};

// Handler
struct t_scenario_data scenario;


// FUNCTIONS //////////////////////////////////////////////

//---------------------------------------------------------
// LOAD MAPS
//---------------------------------------------------------
void Scenario_load(u8 id)
{
	scenario.palette = scenarios[id].bgb->palette;

    scenario.atileset = scenarios[id].bga->tileset;
    scenario.btileset = scenarios[id].bgb->tileset;

    Scenario_loadTileset();
    Scenario_setPalette();
    Scenario_loadMaps(id);
}


//---------------------------------------------------------
// LOAD MAPS
//---------------------------------------------------------
void Scenario_loadMaps(u8 id)
{
	if (scenario.amap != NULL) MEM_free(scenario.amap);
	if (scenario.bmap != NULL) MEM_free(scenario.bmap);

	scenario.amap =  unpackMap(scenarios[id].bga->map, NULL);
	scenario.bmap =  unpackMap(scenarios[id].bgb->map, NULL);

	MEM_free(scenario.hardnessmap);
	memcpy(scenario.hardnessmap, scenarios[id].hardnessmap->map->tilemap, SCENARIO_NUM_TILES);
}


//---------------------------------------------------------
// SET REGION
//---------------------------------------------------------
void Scenario_setRegion(u16 scnx, u16 scny, u16 mapx, u16 mapy, u8 width, u8 height)
{
    VDP_setMapEx(PLAN_B, scenario.bmap,
    	TILE_ATTR_FULL(SCENARIO_DEFAULT_PAL, FALSE, FALSE, FALSE, SCENARIO_BPLAN_VRAM_POS),
		scnx, scny, mapx, mapy, width, height);

    VDP_setMapEx(PLAN_A, scenario.amap,
    	TILE_ATTR_FULL(SCENARIO_DEFAULT_PAL, FALSE, FALSE, FALSE, SCENARIO_APLAN_VRAM_POS),
		scnx, scny, mapx, mapy, width, height);
}


//---------------------------------------------------------
// SET COLUMN
//---------------------------------------------------------
void Scenario_setColumn(u8 column)
{

}


//---------------------------------------------------------
// SET ROW
//---------------------------------------------------------
void Scenario_setRow(u8 row)
{

}
