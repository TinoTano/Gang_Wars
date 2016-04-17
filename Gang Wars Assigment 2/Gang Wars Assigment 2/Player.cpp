#include <stdio.h>
#include "Player.h"
#include "Rooms.h"

Player::Player(const my_string name, const my_string description, Rooms* room) : Entity(name, description){
	type = PLAYER;
	initial_room = room;
}

void Player::get_player_info(){

	printf("Whats your name? ");
	

}