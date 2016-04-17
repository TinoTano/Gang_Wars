#include "Rooms.h"

Rooms::Rooms(const my_string name, const my_string description) : Entity(name,description){
	type = ROOM;
}

Rooms::~Rooms(){

}

void Rooms::look() const{

}