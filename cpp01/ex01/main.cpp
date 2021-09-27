#include "Zombie.hpp"

int main( void ){
	Zombie* here = newZombie("Kevin");
	Zombie* there;

	randomChump("Mark");
	here->announce();
	there = here->zombieHorde(10, "lol");
	delete here ;
	delete [] there;
	return 0;
}