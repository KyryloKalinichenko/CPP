#include "Ice.hpp"


Ice::Ice( void ): AMateria("ice"){
	return ;
}

AMateria* Ice::clone() const{
	return new Ice();
}

void Ice::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "’s wounds *" << std::endl;
}

Ice::~Ice( void ){
	return ;
}