#include <iostream>
#include "Zombie.hpp"


Zombie* newZombie( std::string name ){
	Zombie*	lol = new Zombie(name);
	return lol;
}