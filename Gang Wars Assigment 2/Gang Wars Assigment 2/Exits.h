#ifndef _EXITS_H_
#define _EXITS_H_

#include "Entity.h"

class Rooms;

class Exits : public Entity{
protected:
	bool path_closed;
	Rooms* dest;
public:
	Exits(const my_string name, const my_string description, Rooms* ori, Rooms* dest, bool closed = false);
	~Exits();

public:

};

#endif