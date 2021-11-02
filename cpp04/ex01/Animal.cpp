#include "Animal.hpp"

Animal::Animal( void ){
    std::cout << "An Animal here" << std::endl;
    return;
}

Animal::Animal( std::string type ){
    _type = type;
    return;
}

Animal::Animal(Animal const & src){
	(void)src;
    // set all var
    return ;
}

Animal::~Animal( void ){
    std::cout << "An Animal" << " destruction" << std::endl;
    return;
}

Animal & Animal::operator=( Animal const & rhs ){
    // ser var
	(void)rhs;
    return *this;
}

void    Animal::makeSound( void ) const{
    std::cout << "An Animal" << " here" << std::endl;
}

const std::string &    Animal::getType( void ) const{
    return _type;
}