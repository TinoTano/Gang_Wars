#include <stdio.h>
#include "Entity.h"
#include "World.h"


int main(){
	World* gang_wars_world = new World;

	while (gang_wars_world->playing()){

	}

	delete gang_wars_world;
	
	getchar();
	return 0;
}