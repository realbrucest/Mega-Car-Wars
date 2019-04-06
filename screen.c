/***********************************************************

 MEGA CAR WARS

 SCREEN.C
***********************************************************/

#include "inc/screen.h"

// LIBS ///////////////////////////////////////////////////



// DATA ///////////////////////////////////////////////////

// Info messages
const struct t_infosplash infosplahes[INFOSPLASH_MAX] =
{
	// Level 0 ("Circuit") Messages
	{
		NULL,
		{
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
		NULL,
		{
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
		NULL,
		{
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
		NULL,
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
		NULL,
		{
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
		NULL,
		{
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
		NULL,
		{
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
		NULL,
		{
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
		NULL,
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
		NULL,
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
		NULL,
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
		NULL,
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
		NULL,
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
		NULL,
		{
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
		NULL,
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
		NULL,
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
		NULL,
		{
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
		NULL,
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
		NULL,
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
		NULL,
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
		NULL,
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
		NULL,
		{
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
