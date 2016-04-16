#include "Exits.h"
#include "Rooms.h"

Exits::Exits(const my_string name, const my_string description, Rooms* ori, Rooms* dest, bool closed){
	type = EXIT;
	if (closed){
		path_closed = true;
	}
}

Exits::~Exits(){

}