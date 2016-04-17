#ifndef _WORLD_H_
#define _WORLD_H_

#include "Entity.h"

class Player;

class World{
public:
	World();
	~World();
	bool playing();
	bool PlayerInput(Action action, my_string input);

public:
	dynArray<Entity*>entity;
	Player* player;
	bool player_info = false;
};

#endif
