#include "Ice.hpp"


Ice::Ice( void ): AMateria("ice"){
	return ;
}

AMateria* Ice::clone() const{
	return new Ice();
}
