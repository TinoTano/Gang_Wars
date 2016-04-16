#include "Player.h"
#include "Rooms.h"

Player::Player(const my_string name, const my_string description, Rooms* room){
	type = PLAYER;
	initial_room = room;
}