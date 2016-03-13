#include <iostream>
#include "Rooms.h"

void Rooms::Room_info(areas area){
	switch(area){
	case West_side_suburbs:
		name = "West Side Suburbs";
		description = "The main place of the west side gang.";
		break;
	case Destroyed_hospital:
		name = "Destroyed Hospital";
		description = "There are no doctors left but probably you can find some medicines.";
		break;
	case Little_casino:
		name = "Little Casino";
		description = "Here you can ask for favors.";
		break;
	case Town_hall:
		name = "Town Hall";
		description = "This is an important place. Sure you will find important things";
		break;
	case Sports_center:
		name = "Sports Center";
		description = "This was a place where people met often.";
		break;
	case Up_town:
		name = "Up Town";
		description = "A neutral place at the north of the city where usually occur most of the fights";
		break;
	case Central_garden:
		name = "Central Garden";
		description = "In the past it was a beautiful place full of vegetation. Now there is only blood, death and destuction.";
		break;
	case Down_town:
		name = "Down Town";
		description = "A neutral place at the south of the city where usually occur most of the fights";
		break;
	case Central_station:
		name = "Central Station";
		description = "Will the trains still work?";
		break;
	case Sewers:
		name = "Sewers";
		description = "A very filthy place";
		break;
	case The_club:
		name = "The club";
		description = "Here you can ask for favors.";
		break;
	case Abandoned_medical_center:
		name = "Abandoned Medical Center";
		description = "There are no medics left but probably you can find some medicines.";
		break;
	case East_side_suburbs:
		name = "East Side Suburbs";
		description = "The main place of the east side gang";
		break;
	}
}