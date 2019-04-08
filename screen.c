/***********************************************************

 MEGA CAR WARS

 SCREEN.C
***********************************************************/

#include "inc/screen.h"

// LIBS ///////////////////////////////////////////////////


// ASSETS /////////////////////////////////////////////////
#include "font.h"
#include "gfx.h"
#include "sprite.h"


// DATA ///////////////////////////////////////////////////

// Info messages
const struct t_infosplash infosplahes[INFOSPLASH_MAX] =
{
	// Level 0 ("Circuit") Messages
	{
		NULL, NULL,
		{
			{
				"AVOID CONTACT WITH MOVING AND ",
				"PARKED VEHICLES, EACH HIT WILL",
				"SUSTRACT YOU ENERGY.          ",
				"                              ",
			},
			{
				"EVITA EL CONTACTO CON LOS     ",
				"VEHICULOS. CADA GOLPE TE      ",
				"RESTARA UN PUNTO DE ENERGIA.  ",
				"                              ",
			},
			{
				"AVOID CONTACT WITH MOVING AND ",
				"PARKED VEHICLES, EACH HIT WILL",
				"SUSTRACT YOU ENERGY.          ",
				"                              ",
			},
			{
				"AVOID CONTACT WITH MOVING AND ",
				"PARKED VEHICLES, EACH HIT WILL",
				"SUSTRACT YOU ENERGY.          ",
				"                              ",
			},
			{
				"AVOID CONTACT WITH MOVING AND ",
				"PARKED VEHICLES, EACH HIT WILL",
				"SUSTRACT YOU ENERGY.          ",
				"                              ",
			},
			{
				"AVOID CONTACT WITH MOVING AND ",
				"PARKED VEHICLES, EACH HIT WILL",
				"SUSTRACT YOU ENERGY.          ",
				"                              ",
			},
		}
	},
	{
		NULL, NULL,
		{
			{
				"SOME OBJECTS ARE PUSHABLE.    ",
				"MOVE THEM TO ACCESS SOME AREAS",
				"AND BLOCK ENEMIES.            ",
				"                              ",
			},
			{
				"ALGUNOS OBJETOS SON           ",
				"EMPUJABLES. MUEVELOS PARA     ",
				"ACCEDER A DETERMINADOS LUGARES",
				"Y BLOQUEAR ENEMIGOS.          ",
			},
			{
				"SOME OBJECTS ARE PUSHABLE.    ",
				"MOVE THEM TO ACCESS SOME AREAS",
				"AND BLOCK ENEMIES.            ",
				"                              ",
			},
			{
				"SOME OBJECTS ARE PUSHABLE.    ",
				"MOVE THEM TO ACCESS SOME AREAS",
				"AND BLOCK ENEMIES.            ",
				"                              ",
			},
			{
				"SOME OBJECTS ARE PUSHABLE.    ",
				"MOVE THEM TO ACCESS SOME AREAS",
				"AND BLOCK ENEMIES.            ",
				"                              ",
			},
			{
				"SOME OBJECTS ARE PUSHABLE.    ",
				"MOVE THEM TO ACCESS SOME AREAS",
				"AND BLOCK ENEMIES.            ",
				"                              ",
			},
		}
	},
	{
		NULL, NULL,
		{
			{
				"GET COINS TO ENTER THE GARAGE ",
				"AND EQUIP YOUR VEHICLE WITH   ",
				"WEAPONS JUST TO ELIMINATE     ",
				"YOUR OPPONENTS.               ",
			},
			{
				"CONSIGUE MONEDAS PARA ENTRAR  ",
				"EN EL TALLER Y EQUIPAR TU     ",
				"VEHICULO CON ARMAS. ASI PODRAS",
				"ELIMINAR A TUS OPONENTES.     ",
			},
			{
				"GET COINS TO ENTER THE GARAGE ",
				"AND EQUIP YOUR VEHICLE WITH   ",
				"WEAPONS JUST TO ELIMINATE     ",
				"YOUR OPPONENTS.               ",
			},
			{
				"GET COINS TO ENTER THE GARAGE ",
				"AND EQUIP YOUR VEHICLE WITH   ",
				"WEAPONS JUST TO ELIMINATE     ",
				"YOUR OPPONENTS.               ",
			},
			{
				"GET COINS TO ENTER THE GARAGE ",
				"AND EQUIP YOUR VEHICLE WITH   ",
				"WEAPONS JUST TO ELIMINATE     ",
				"YOUR OPPONENTS.               ",
			},
			{
				"GET COINS TO ENTER THE GARAGE ",
				"AND EQUIP YOUR VEHICLE WITH   ",
				"WEAPONS JUST TO ELIMINATE     ",
				"YOUR OPPONENTS.               ",
			}
		}
	},
		{
		NULL, NULL,
		{
			{
				"BESIDES THE COINS, TRY TO TAKE",
				"ALL POSSIBLE ENERGY REFILLS   ",
				"TO ENSURE SUCCESS.            ",
				"                              ",
			},
			{
				"BESIDES THE COINS, TRY TO TAKE",
				"ALL POSSIBLE ENERGY REFILLS   ",
				"TO ENSURE SUCCESS.            ",
				"                              ",
			},
			{
				"BESIDES THE COINS, TRY TO TAKE",
				"ALL POSSIBLE ENERGY REFILLS   ",
				"TO ENSURE SUCCESS.            ",
				"                              ",
			},
			{
				"BESIDES THE COINS, TRY TO TAKE",
				"ALL POSSIBLE ENERGY REFILLS   ",
				"TO ENSURE SUCCESS.            ",
				"                              ",
			},
			{
				"BESIDES THE COINS, TRY TO TAKE",
				"ALL POSSIBLE ENERGY REFILLS   ",
				"TO ENSURE SUCCESS.            ",
				"                              ",
			},
			{
				"BESIDES THE COINS, TRY TO TAKE",
				"ALL POSSIBLE ENERGY REFILLS   ",
				"TO ENSURE SUCCESS.            ",
				"                              ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"FLYING ENEMIES ARE NOT        ",
				"ACCESSIBLE AND CANT'T BE      ",
				"DESTROYED.                    ",
				"STAY AWAY FROM THEM.          ",
			},
			{
				"LOS ENEMIGOS VOLADORES NO     ",
				"ESTAN A TU ALCANCE.           ",
				"NO PUEDEN SER DESTRUIDOS.     ",
				"ALEJATE DE ELLOS.             ",
			},
			{
				"FLYING ENEMIES ARE NOT        ",
				"ACCESSIBLE AND CANT'T BE      ",
				"DESTROYED.                    ",
				"STAY AWAY FROM THEM.          ",
			},
			{
				"FLYING ENEMIES ARE NOT        ",
				"ACCESSIBLE AND CANT'T BE      ",
				"DESTROYED.                    ",
				"STAY AWAY FROM THEM.          ",
			},
			{
				"FLYING ENEMIES ARE NOT        ",
				"ACCESSIBLE AND CANT'T BE      ",
				"DESTROYED.                    ",
				"STAY AWAY FROM THEM.          ",
			},
			{
				"FLYING ENEMIES ARE NOT        ",
				"ACCESSIBLE AND CANT'T BE      ",
				"DESTROYED.                    ",
				"STAY AWAY FROM THEM.          ",
			}
		}
	},
		{
		NULL, NULL,
		{
			{
				"THINK A WHILE BEFORE RESOLVING",
				"SOME PUZZLES NOT TO GET       ",
				"CAUGHT. YOU CAN ALSO TAKE     ",
				"ALTERNATIVE ROUTES.           ",
			},
			{
				"PIENSA UN POCO ANTES DE       ",
				"RESOLVER ALGUNOS PUZZLES PARA ",
				"NO QUEDAR ATRAPADO. O RECURRE ",
				"TAMBIEN A RUTAS ALTERNATIVAS. ",
			},
			{
				"THINK A WHILE BEFORE RESOLVING",
				"SOME PUZZLES NOT TO GET       ",
				"CAUGHT. YOU CAN ALSO TAKE     ",
				"ALTERNATIVE ROUTES.           ",
			},
			{
				"THINK A WHILE BEFORE RESOLVING",
				"SOME PUZZLES NOT TO GET       ",
				"CAUGHT. YOU CAN ALSO TAKE     ",
				"ALTERNATIVE ROUTES.           ",
			},
			{
				"THINK A WHILE BEFORE RESOLVING",
				"SOME PUZZLES NOT TO GET       ",
				"CAUGHT. YOU CAN ALSO TAKE     ",
				"ALTERNATIVE ROUTES.           ",
			},
			{
				"THINK A WHILE BEFORE RESOLVING",
				"SOME PUZZLES NOT TO GET       ",
				"CAUGHT. YOU CAN ALSO TAKE     ",
				"ALTERNATIVE ROUTES.           ",
			},
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME SUPERSTICKY FLYTRAP.     ",
			},
			{
				"SOLO PUEDES ENTRAR AQUI SI    ",
				"TIENES AL MENOS ** MONEDAS    ",
				"PARA EQUIPARTE CON UN 'ACME'  ",
				"ATRAPAMOSCAS SUPERPEGAJOSO.   ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME SUPERSTICKY FLYTRAP.     ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME SUPERSTICKY FLYTRAP.     ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME SUPERSTICKY FLYTRAP.     ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME SUPERSTICKY FLYTRAP.     ",
			}
		}
	},
			{
		NULL, NULL,
		{
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"THE GROUND. THEY WILL PROVIDE ",
				"YOU THE NECESSARY EXTRA COINS ",
				"TO FINISH THE STAGE.          ",
			},
			{
				"ELIMINA A TUS OPONENTES EN    ",
				"TIERRA. TE PROPORCIONARAN     ",
				"MONEDAS EXTRA PARA TERMINAR   ",
				"LA ETAPA.                     ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"THE GROUND. THEY WILL PROVIDE ",
				"YOU THE NECESSARY EXTRA COINS ",
				"TO FINISH THE STAGE.          ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"THE GROUND. THEY WILL PROVIDE ",
				"YOU THE NECESSARY EXTRA COINS ",
				"TO FINISH THE STAGE.          ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"THE GROUND. THEY WILL PROVIDE ",
				"YOU THE NECESSARY EXTRA COINS ",
				"TO FINISH THE STAGE.          ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"THE GROUND. THEY WILL PROVIDE ",
				"YOU THE NECESSARY EXTRA COINS ",
				"TO FINISH THE STAGE.          ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"GET ** COINS TO CONVINCE THE  ",
				"POLICE OFFICER TO LET YOU GO. ",
				"                              ",
				"YOU KNOW...                   ",
			},
			{
				"GET ** COINS TO CONVINCE THE  ",
				"POLICE OFFICER TO LET YOU GO. ",
				"                              ",
				"YOU KNOW...                   ",
			},
			{
				"GET ** COINS TO CONVINCE THE  ",
				"POLICE OFFICER TO LET YOU GO. ",
				"                              ",
				"YOU KNOW...                   ",
			},
			{
				"GET ** COINS TO CONVINCE THE  ",
				"POLICE OFFICER TO LET YOU GO. ",
				"                              ",
				"YOU KNOW...                   ",
			},
			{
				"GET ** COINS TO CONVINCE THE  ",
				"POLICE OFFICER TO LET YOU GO. ",
				"                              ",
				"YOU KNOW...                   ",
			},
			{
				"GET ** COINS TO CONVINCE THE  ",
				"POLICE OFFICER TO LET YOU GO. ",
				"                              ",
				"YOU KNOW...                   ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY A TOLL  ",
				"CARD.                         ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY A TOLL  ",
				"CARD.                         ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY A TOLL  ",
				"CARD.                         ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY A TOLL  ",
				"CARD.                         ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY A TOLL  ",
				"CARD.                         ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY A TOLL  ",
				"CARD.                         ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"WITH THIS CARD YOU CAN        ",
				"OVERCOME THE FINAL BARRIER.   ",
				"                              ",
				"YOU ALMOST GOT IT...          ",
			},
			{
				"WITH THIS CARD YOU CAN        ",
				"OVERCOME THE FINAL BARRIER.   ",
				"                              ",
				"YOU ALMOST GOT IT...          ",
			},
			{
				"WITH THIS CARD YOU CAN        ",
				"OVERCOME THE FINAL BARRIER.   ",
				"                              ",
				"YOU ALMOST GOT IT...          ",
			},
			{
				"WITH THIS CARD YOU CAN        ",
				"OVERCOME THE FINAL BARRIER.   ",
				"                              ",
				"YOU ALMOST GOT IT...          ",
			},
			{
				"WITH THIS CARD YOU CAN        ",
				"OVERCOME THE FINAL BARRIER.   ",
				"                              ",
				"YOU ALMOST GOT IT...          ",
			},
			{
				"WITH THIS CARD YOU CAN        ",
				"OVERCOME THE FINAL BARRIER.   ",
				"                              ",
				"YOU ALMOST GOT IT...          ",
			}
		}
	},
	// Level 1 ("Desert") Messages
	{
		NULL, NULL,
		{
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME ULTRAPOWERFULL MAGNET.   ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME ULTRAPOWERFULL MAGNET.   ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME ULTRAPOWERFULL MAGNET.   ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME ULTRAPOWERFULL MAGNET.   ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME ULTRAPOWERFULL MAGNET.   ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME ULTRAPOWERFULL MAGNET.   ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY AN ACME ",
				"GIANT AXE.                    ",
			},
			{
				"SOLO PUEDES ENTRAR AQUI SI YA ",
				"TIENES ARMAS Y AL MENOS **    ",
				"MONEDAS PARA COMPRAR UN HACHA ",
				"GIANTE 'ACME'.                ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY AN ACME ",
				"GIANT AXE.                    ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY AN ACME ",
				"GIANT AXE.                    ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY AN ACME ",
				"GIANT AXE.                    ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEAPONS AND AT   ",
				"LEAST ** COINS TO BUY AN ACME ",
				"GIANT AXE.                    ",
			}
		}
	},
		{
		NULL, NULL,
		{
			{
				"YOU CAN PURCHASE AN AXE IN OUR",
				"STORE, IT'S REQUIRED TO UNLOCK",
				"THE WAY AND TO FINISH THE     ",
				"STAGE.                        ",
			},
			{
				"YOU CAN PURCHASE AN AXE IN OUR",
				"STORE, IT'S REQUIRED TO UNLOCK",
				"THE WAY AND TO FINISH THE     ",
				"STAGE.                        ",
			},
			{
				"YOU CAN PURCHASE AN AXE IN OUR",
				"STORE, IT'S REQUIRED TO UNLOCK",
				"THE WAY AND TO FINISH THE     ",
				"STAGE.                        ",
			},
			{
				"YOU CAN PURCHASE AN AXE IN OUR",
				"STORE, IT'S REQUIRED TO UNLOCK",
				"THE WAY AND TO FINISH THE     ",
				"STAGE.                        ",
			},
			{
				"YOU CAN PURCHASE AN AXE IN OUR",
				"STORE, IT'S REQUIRED TO UNLOCK",
				"THE WAY AND TO FINISH THE     ",
				"STAGE.                        ",
			},
			{
				"YOU CAN PURCHASE AN AXE IN OUR",
				"STORE, IT'S REQUIRED TO UNLOCK",
				"THE WAY AND TO FINISH THE     ",
				"STAGE.                        ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN BREAK THE FINAL       ",
				"BARRIER WITH THIS AXE. YOU    ",
				"ALMOST REACHED THE LAST STAGE.",
				"                              ",
			},
			{
				"YOU CAN BREAK THE FINAL       ",
				"BARRIER WITH THIS AXE. YOU    ",
				"ALMOST REACHED THE LAST STAGE.",
				"                              ",
			},
			{
				"YOU CAN BREAK THE FINAL       ",
				"BARRIER WITH THIS AXE. YOU    ",
				"ALMOST REACHED THE LAST STAGE.",
				"                              ",
			},
			{
				"YOU CAN BREAK THE FINAL       ",
				"BARRIER WITH THIS AXE. YOU    ",
				"ALMOST REACHED THE LAST STAGE.",
				"                              ",
			},
			{
				"YOU CAN BREAK THE FINAL       ",
				"BARRIER WITH THIS AXE. YOU    ",
				"ALMOST REACHED THE LAST STAGE.",
				"                              ",
			},
			{
				"YOU CAN BREAK THE FINAL       ",
				"BARRIER WITH THIS AXE. YOU    ",
				"ALMOST REACHED THE LAST STAGE.",
				"                              ",
			}
		}
	},

	// Level 2 ("Snowy") Messages
		{
		NULL, NULL,
		{
			{
				"USE THE TUNNELS TO MOVE       ",
				"YOURSELF FAST BETWEEN THE     ",
				"DIFFERENT AREAS OF THE TRACK. ",
				"                              ",
			},
			{
				"UTILIZA LOS TUNELES PARA      ",
				"MOVERTE RAPIDAMENTE ENTRE     ",
				"DIFERENTES ZONAS DEL TRAZADO. ",
				"                              ",
			},
			{
				"USE THE TUNNELS TO MOVE       ",
				"YOURSELF FAST BETWEEN THE     ",
				"DIFFERENT AREAS OF THE TRACK. ",
				"                              ",
			},
			{
				"USE THE TUNNELS TO MOVE       ",
				"YOURSELF FAST BETWEEN THE     ",
				"DIFFERENT AREAS OF THE TRACK. ",
				"                              ",
			},
			{
				"USE THE TUNNELS TO MOVE       ",
				"YOURSELF FAST BETWEEN THE     ",
				"DIFFERENT AREAS OF THE TRACK. ",
				"                              ",
			},
			{
				"USE THE TUNNELS TO MOVE       ",
				"YOURSELF FAST BETWEEN THE     ",
				"DIFFERENT AREAS OF THE TRACK. ",
				"                              ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME HAMMER DRILL.            ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME HAMMER DRILL.            ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME HAMMER DRILL.            ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME HAMMER DRILL.            ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME HAMMER DRILL.            ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"HAVE AT LEAST ** COINS TO     ",
				"EQUIP YOUR VEHICLE WITH AN    ",
				"ACME HAMMER DRILL.            ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			},
			{
				"ELIMINATE YOUR OPPONENTS ON   ",
				"ON THE GROUND. THEY WILL      ",
				"PROVIDE THE NECESSARY EXTRA   ",
				"COINS TO FIHISH THE STAGE.    ",
			}
		}
	},
		{
		NULL, NULL,
		{
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEPONS AND AT    ",
				"LEAST ** COINS TO BUY AN ACME ",
				"FLAMETHROWER.                 ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEPONS AND AT    ",
				"LEAST ** COINS TO BUY AN ACME ",
				"FLAMETHROWER.                 ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEPONS AND AT    ",
				"LEAST ** COINS TO BUY AN ACME ",
				"FLAMETHROWER.                 ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEPONS AND AT    ",
				"LEAST ** COINS TO BUY AN ACME ",
				"FLAMETHROWER.                 ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEPONS AND AT    ",
				"LEAST ** COINS TO BUY AN ACME ",
				"FLAMETHROWER.                 ",
			},
			{
				"YOU CAN ONLY ENTER HERE IF YOU",
				"ALREADY HAVE WEPONS AND AT    ",
				"LEAST ** COINS TO BUY AN ACME ",
				"FLAMETHROWER.                 ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN PURCHASE A            ",
				"FLAMETHROWER TO MELT THE WAY'S",
				"OBSTACLES AND TO FINISH THE   ",
				"GAME.                         ",
			},
			{
				"YOU CAN PURCHASE A            ",
				"FLAMETHROWER TO MELT THE WAY'S",
				"OBSTACLES AND TO FINISH THE   ",
				"GAME.                         ",
			},
			{
				"YOU CAN PURCHASE A            ",
				"FLAMETHROWER TO MELT THE WAY'S",
				"OBSTACLES AND TO FINISH THE   ",
				"GAME.                         ",
			},
			{
				"YOU CAN PURCHASE A            ",
				"FLAMETHROWER TO MELT THE WAY'S",
				"OBSTACLES AND TO FINISH THE   ",
				"GAME.                         ",
			},
			{
				"YOU CAN PURCHASE A            ",
				"FLAMETHROWER TO MELT THE WAY'S",
				"OBSTACLES AND TO FINISH THE   ",
				"GAME.                         ",
			},
			{
				"YOU CAN PURCHASE A            ",
				"FLAMETHROWER TO MELT THE WAY'S",
				"OBSTACLES AND TO FINISH THE   ",
				"GAME.                         ",
			}
		}
	},
	{
		NULL, NULL,
		{
			{
				"YOU CAN MELT THE FINAL        ",
				"OBSTACLE WITH THIS            ",
				"FLAMETHROWER. YOU ALMOST      ",
				"COMPLETED THE GAME.           ",
			},
			{
				"CON ESTE LANZALLAMAS PODRAS   ",
				"DERRETIR EL OBSTACULO FINAL.  ",
				"YA CASI HAS CONSEGUIDO        ",
				"FINALIZAR EL JUEGO.           ",
			},
			{
				"YOU CAN MELT THE FINAL        ",
				"OBSTACLE WITH THIS            ",
				"FLAMETHROWER. YOU ALMOST      ",
				"COMPLETED THE GAME.           ",
			},
			{
				"YOU CAN MELT THE FINAL        ",
				"OBSTACLE WITH THIS            ",
				"FLAMETHROWER. YOU ALMOST      ",
				"COMPLETED THE GAME.           ",
			},
			{
				"YOU CAN MELT THE FINAL        ",
				"OBSTACLE WITH THIS            ",
				"FLAMETHROWER. YOU ALMOST      ",
				"COMPLETED THE GAME.           ",
			},
			{
				"YOU CAN MELT THE FINAL        ",
				"OBSTACLE WITH THIS            ",
				"FLAMETHROWER. YOU ALMOST      ",
				"COMPLETED THE GAME.           ",
			}

		}
	},
};

// Info guy sprite
Sprite *infoguy;

// Language set
u8 language;


// FUNCTIONS //////////////////////////////////////////////

//---------------------------------------------------------
// INFO SPLASH OPEN
//---------------------------------------------------------
void Screen_infoSplashOpen(u8 id)
{
	// Local data _______________________________
	u8 i;

	// Process __________________________________

	infoguy = SPR_addSprite
		(&mechanic_sprite, INFOSPLASH_MECHANIC_POSX, INFOSPLASH_MECHANIC_POSY,
		TILE_ATTR(INFOSPLASH_MECHANIC_DEFAULT_PALETTE, TRUE, FALSE, FALSE));

	// Load background
	// WIP - TODO: set just a flat shadow layer
	VDP_fillTileMapRect(PLAN_A, TILE_ATTR_FULL(PAL0, TRUE, 0, 0, 3) ,
		INFOSPLASH_CANVAS_POSX, INFOSPLASH_CANVAS_POSY,
		INFOSPLASH_CANVAS_WIDTH, INFOSPLASH_CANVAS_HEIGHT);

	//infosplahes[id].animguy();
	// Screen_waitForAnimation(INFOSPLASH_ANIMATION_DELAY_DEFAULT);
	//infosplahes[id].cartoon();

	Screen_infoSplashLoadFont();

	VDP_setTextPriority(TRUE);
	for(i=0; i<INFOSPLASH_NUMLINES; i++)
		VDP_drawTextBG(PLAN_A, infosplahes[id].text[language][i],
			INFOSPLASH_TEXT_POSX, INFOSPLASH_TEXT_POSY + (i << 1));
}

//---------------------------------------------------------
// INFO SPLASH CLOSE
//---------------------------------------------------------
void Screen_infoSplashClose()
{
	SPR_releaseSprite(infoguy);
}

//---------------------------------------------------------
// WAIT FOR ANIMATION
//---------------------------------------------------------
void Screen_waitForAnimation(u8 delay)
{
	while(delay--) VDP_waitVSync();
}

