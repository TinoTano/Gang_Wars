#ifndef _WORLD_H_
#define _WORLD_H_

class Entity;

class World{
public:
	World();
	~World();

public:
	dynArray<Entity*>entity;
};

#endif
