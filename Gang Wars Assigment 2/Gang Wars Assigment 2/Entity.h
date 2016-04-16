#ifndef _ENTITY_H_
#define _ENTITY_H_

#include "MyString.h"
#include "DynArray.h"

enum Entity_type
{
	ENTITY,
	ROOM,
	EXIT,
	ITEM,
	PLAYER
};

class Entity{
protected:
	Entity_type type;
	my_string name;
	my_string description;
	dynArray<Entity*> entity_list;
	
public:
	void Look() const;

};

#endif