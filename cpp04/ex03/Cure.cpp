#include "Cure.hpp"

AMateria* Cure::clone() const{
	return new Cure();
}

Cure::Cure( void ): AMateria("cure"){
	return ;
}