#include <iostream>
#include "Player.h"
#include "Rooms.h"

Player::Player(const my_string name, const my_string description, Rooms* room) : Entity(name, description){
	type = PLAYER;
	initial_room = room;
}

void Player::get_player_info(){
	char name[20];
	char description[20];
	printf("Whats your name? ");
	gets_s(name);
	my_string player_name(name);
	printf("What side you want to start? ");
	gets_s(description);
	my_string player_description(description);
	printf("Hello %s from %s side. Your adventure starts here...", player_name.c_str(),player_description.c_str());
}