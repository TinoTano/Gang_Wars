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
	Entity(const my_string name, const my_string description);
	~Entity();
	void Look() const;

};

#endif