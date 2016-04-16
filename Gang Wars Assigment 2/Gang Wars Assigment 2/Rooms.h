#ifndef _ROOMS_H_
#define _ROOMS_H_

#include "Entity.h"

class Rooms : public Entity{
public:
	Rooms(const my_string name, const my_string description);
	~Rooms();

	void look() const;
};

#endif