#include <iostream>
#include <conio.h>
#include "World.h"

using namespace std;

int main(){
	
	cout << "Welcome to Gang Wars" << endl;

	World world;
	
	world.Create_World_Init();
	
	cout << "Thanks for playing. Bye!" << endl;

	return 0;
}