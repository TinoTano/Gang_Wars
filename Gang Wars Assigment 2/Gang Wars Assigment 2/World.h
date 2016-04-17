#ifndef _WORLD_H_
#define _WORLD_H_

#include "Entity.h"

class Player;

class World{
public:
	World();
	~World();

public:
	dynArray<Entity*>entity;
	Player* player;
};

#endif
