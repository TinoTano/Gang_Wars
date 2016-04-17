#include "Exits.h"
#include "Rooms.h"

Exits::Exits(const my_string name, const my_string description, Rooms* ori, Rooms* dest, bool closed) 
: Entity(name, description), path_closed(false),dest(dest){
	type = EXIT;
	if (closed){
		path_closed = true;
	}
}

Exits::~Exits(){

}