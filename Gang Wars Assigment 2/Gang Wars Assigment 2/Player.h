#ifndef __Player__
#define __Player__

#include "Entity.h"

using namespace std;

class Rooms;

class Player : public Entity
{
protected:
	Rooms* initial_room;
	my_string player_name;
	my_string player_description;
public:
	Player(const my_string name, const my_string description, Rooms* room);
	~Player();
	void get_player_info();
	void Look() const;
	void Pick() const;
	void Drop() const;
	void Inventory() const;
	void Equip() const;
	void UnEquip() const;
	void get() const;
	void put() const;

};

#endif //__Player__