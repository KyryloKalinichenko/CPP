#include "Cure.hpp"

AMateria* Cure::clone() const{
	return new Cure();
}

Cure::Cure( void ): AMateria("cure"){
	return ;
}

Cure::~Cure( void ){
	return ;
}

void Cure::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " <<  target.getName() << "*" << std::endl;
}
