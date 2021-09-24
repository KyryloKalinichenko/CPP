#include "Zombie.hpp"

int main( void ){
	Zombie* here = newZombie("Kevin");

	randomChump("Mark");
	here->announce();
	delete here;
	return 0;
}