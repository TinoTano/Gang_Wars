#include <stdio.h>
#include "Entity.h"
//#include "Item.h"
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
	Exits* up_town_to_club = new Exits("East", "2 ways path", Up_Town, The_Club);
	Exits* up_town_to_central_garden = new Exits("South", "2 ways path", Up_Town, The_Club,Central_Garden);
	Exits* up_town_to_destroyed = new Exits("West", "2 ways path", Up_Town, The_Club,Destroyed_Hospital);

	//Central garden exits
	Exits* central_garden_to_up_town = new Exits("North", "2 ways path", Central_Garden, Up_Town);
	Exits* central_garden_to_east_side = new Exits("East", "2 ways path", Central_Garden, East_Side_Suburbs);
	Exits* central_garden_to_down_town = new Exits("South", "2 ways path", Central_Garden, Down_Town);
	Exits* central_garden_to_west_side = new Exits("West", "2 ways path", Central_Garden, West_Side_Suburbs);
	Exits* central_garden_to_town_hall = new Exits("North West", "2 ways path", Central_Garden, Town_Hall);
	Exits* central_garden_to_central_station = new Exits("North East", "2 ways path", Central_Garden, Central_Station);
	Exits* central_garden_to_sport_center = new Exits("South West", "2 ways path", Central_Garden, Sports_Center);
	Exits* central_garden_to_sewers = new Exits("Down", "2 ways path", Central_Garden, Sewers);

	//Down Town exits
	Exits* down_town_to_central_garden = new Exits("North", "2 ways path", Down_Town, Central_Garden);
	Exits* down_town_to_abandoned = new Exits("East", "2 ways path", Down_Town, Abandoned_Medical_Center);
	Exits* down_town_to_casino = new Exits("West", "2 ways path", Down_Town, Little_Casino);

	//Central Station exits
	Exits* central_station_to_central_garden = new Exits("South West", "2 ways path", Central_Station, Central_Garden);
	Exits* central_station_to_club = new Exits("North East", "2 ways path", Central_Station, The_Club);

	//Sewers exits
	Exits* sewers_to_central_garden = new Exits("Up", "2 ways path", Sewers, Central_Garden);

	//The club exits
	Exits* club_to_up_town = new Exits("North", "2 ways path", The_Club, Up_Town);
	Exits* club_to_east_side = new Exits("East", "2 ways path", The_Club, East_Side_Suburbs);
	Exits* club_to_abandoned = new Exits("South", "2 ways path", The_Club, Abandoned_Medical_Center);
	Exits* club_to_destoyed = new Exits("West", "2 ways path", The_Club, Destroyed_Hospital);
	Exits* club_to_central_station = new Exits("South West", "2 ways path", The_Club, Central_Station);

	//Abandoned Medical Center
	Exits* abandoned_to_club = new Exits("North", "East", Abandoned_Medical_Center, The_Club);
	Exits* abandoned_to_east_side = new Exits("East", "East", Abandoned_Medical_Center, East_Side_Suburbs);
	Exits* abandoned_to_down_town = new Exits("South", "East", Abandoned_Medical_Center, Down_Town);
	Exits* abandoned_to_casino = new Exits("West", "East", Abandoned_Medical_Center, Little_Casino);

	//East Side Suburbs exits
	Exits* east_side_to_club = new Exits("North", "2 ways path", East_Side_Suburbs, The_Club);
	Exits* east_side_to_central_garden = new Exits("West", "2 ways path", East_Side_Suburbs, Central_Garden);
	Exits* east_side_to_abandoned = new Exits("South", "2 ways path", East_Side_Suburbs, Abandoned_Medical_Center);

	entity.PushBack(west_side_to_casino);
	entity.PushBack(west_side_to_central);
	entity.PushBack(west_side_to_destroyed);
	entity.PushBack(destroyed_to_casino);
	entity.PushBack(destroyed_to_club);
	entity.PushBack(destroyed_to_up_town);
	entity.PushBack(destroyed_to_west_side);
	entity.PushBack(casino_to_abandoned);
	entity.PushBack(casino_to_destroyed);
	entity.PushBack(casino_to_down_town);
	entity.PushBack(casino_to_sports_center);
	entity.PushBack(casino_to_west_side);
	entity.PushBack(town_hall_to_central_garden);
	entity.PushBack(sports_center_to_casino);
	entity.PushBack(sports_center_to_central_garden);
	entity.PushBack(up_town_to_central_garden);
	entity.PushBack(up_town_to_club);
	entity.PushBack(up_town_to_destroyed);
	entity.PushBack(central_garden_to_central_station);
	entity.PushBack(central_garden_to_down_town);
	entity.PushBack(central_garden_to_east_side);
	entity.PushBack(central_garden_to_sewers);
	entity.PushBack(central_garden_to_sport_center);
	entity.PushBack(central_garden_to_town_hall);
	entity.PushBack(central_garden_to_up_town);
	entity.PushBack(central_garden_to_west_side);
	entity.PushBack(down_town_to_abandoned);
	entity.PushBack(down_town_to_casino);
	entity.PushBack(down_town_to_central_garden);
	entity.PushBack(central_station_to_central_garden);
	entity.PushBack(central_station_to_club);
	entity.PushBack(sewers_to_central_garden);
	entity.PushBack(club_to_abandoned);
	entity.PushBack(club_to_central_station);
	entity.PushBack(club_to_destoyed);
	entity.PushBack(club_to_east_side);
	entity.PushBack(club_to_up_town);
	entity.PushBack(abandoned_to_casino);
	entity.PushBack(abandoned_to_club);
	entity.PushBack(abandoned_to_down_town);
	entity.PushBack(abandoned_to_east_side);
	entity.PushBack(east_side_to_abandoned);
	entity.PushBack(east_side_to_central_garden);
	entity.PushBack(east_side_to_club);

	player->get_player_info();
	//printf("wfefe");
	player = new Player("name", "description", West_Side_Suburbs);
	entity.PushBack(player);

}

World::~World(){
	for (int i = 0; i < entity.size(); i++){
		delete entity[i];
	}
}