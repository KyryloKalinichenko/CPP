#include <istream>
#include "Zombie.hpp"

Zombie::Zombie( std::string name ){
	_name = name;
	std::cout << "created" << std::endl;
	return ;
}

Zombie::~Zombie( void ){
	std::cout << "destroyed" << std::endl;
	return ;
}

void	Zombie::announce( void ){
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}