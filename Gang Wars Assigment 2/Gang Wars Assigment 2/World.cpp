#include <iostream>
#include "Entity.h"
#include "Item.h"
#include "Exits.h"
#include "Rooms.h"
#include "Player.h"
#include "World.h"

World::World(){
	
	Rooms* West_Side_Suburbs = new Rooms("West Side Suburbs", "The main place of the west side gang.");
	Rooms* Destroyed_Hospital = new Rooms("Destroyed Hospital", "There are no doctors left but probably you can find some medicines.");
	Rooms* Little_Casino = new Rooms("Little Casino", "Here you can ask for favors.");
	Rooms* Town_Hall = new Rooms("Town Hall", "This is an important place. Sure you will find important things");
	Rooms* Sports_Center = new Rooms("Sports Center", "This was a place where people met often.");
	Rooms* Up_Town = new Rooms("Up Town", "A neutral place at the north of the city where usually occur most of the fights");
	Rooms* Central_Garden = new Rooms("Central Garden", "In the past it was a beautiful place full of vegetation. Now there is only blood, death and destuction.");
	Rooms* Down_Town = new Rooms("Down Town", "A neutral place at the south of the city where usually occur most of the fights");
	Rooms* Central_Station = new Rooms("Central Station", "Will the trains still work?");
	Rooms* Sewers = new Rooms("Sewers", "A very filthy place");
	Rooms* The_Club = new Rooms("The Club", "Here you can ask for favors.");
	Rooms* Abandoned_Medical_Center = new Rooms("Abandoned Medical Center", "There are no medics left but probably you can find some medicines.");
	Rooms* East_Side_Suburbs = new Rooms("East Side Suburbs", "The main place of the east side gang");

	entity.PushBack(West_Side_Suburbs);
	entity.PushBack(Destroyed_Hospital);
	entity.PushBack(Little_Casino);
	entity.PushBack(Town_Hall);
	entity.PushBack(Sports_Center);
	entity.PushBack(Up_Town);
	entity.PushBack(Central_Garden);
	entity.PushBack(Down_Town);
	entity.PushBack(Central_Station);
	entity.PushBack(Sewers);
	entity.PushBack(The_Club);
	entity.PushBack(Abandoned_Medical_Center);
	entity.PushBack(East_Side_Suburbs);

	//West_Side_Suburbs exits
	Exits* west_side_to_destroyed = new Exits("North", "2 ways path", West_Side_Suburbs, Destroyed_Hospital);
	Exits* west_side_to_central = new Exits("East", "2 ways path", West_Side_Suburbs, Central_Garden);
	Exits* west_side_to_casino = new Exits("South", "2 ways path", West_Side_Suburbs, Little_Casino);

	//Destroyed hospital exits
	Exits* destroyed_to_up_town = new Exits("North", "2 ways path", Destroyed_Hospital, Up_Town);
	Exits* destroyed_to_club = new Exits("East", "2 ways path", Destroyed_Hospital, The_Club);
	Exits* destroyed_to_casino = new Exits("South", "2 ways path", Destroyed_Hospital, Little_Casino);
	Exits* destroyed_to_west_side = new Exits("West", "2 ways path", Destroyed_Hospital, West_Side_Suburbs);

	//Little Casino exits
	Exits* casino_to_destroyed = new Exits("North", "2 ways path", Little_Casino, Destroyed_Hospital);
	Exits* casino_to_abandoned = new Exits("East", "2 ways path", Little_Casino, Abandoned_Medical_Center);
	Exits* casino_to_down_town = new Exits("South", "2 ways path", Little_Casino, Down_Town);
	Exits* casino_to_west_side = new Exits("West", "2 ways path", Little_Casino, West_Side_Suburbs);
	Exits* casino_to_sports_center = new Exits("North East", "2 ways path", Little_Casino, Sports_Center);

	//Town Hall exits
	Exits* town_hall_to_central_garden = new Exits("South East", "2 ways path", Town_Hall, Central_Garden);

	//Sports Center exits
	Exits* sports_center_to_casino = new Exits("South West", "2 ways path", Sports_Center, Little_Casino);
	Exits* sports_center_to_central_garden = new Exits("North East", "2 ways path", Sports_Center, Central_Garden);

	//Up town exits



	Player* player = new Player("name", "description", West_Side_Suburbs);
	entity.PushBack(player);

}