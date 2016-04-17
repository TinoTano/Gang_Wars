#include <iostream>
#include "Player.h"
#include "Rooms.h"
#include "World.h"

Player::Player(const my_string name, const my_string description, Rooms* room) : Entity(name, description){
	type = PLAYER;
	initial_room = room;
}

void Player::get_player_name(){
	printf("Whats your name? ");
	gets_s(name);
	my_string player_name(name);
}

bool Player::get_player_side(){
	printf("What side you want to start? West or East? ");
	gets_s(side);
	if (world->PlayerInput(PLAYER_INFO, side)){
		my_string player_description(description);
		printf("Hello %s from %s side. Your adventure starts here...", player_name.c_str(), player_description.c_str());
		return false;
	}
}