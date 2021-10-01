#include "Animal.hpp"

Animal::Animal( void ){
    return;
}

Animal::Animal( std::string type ){
    _type = type;
    return;
}

Animal::Animal(Animal const & src){
    // set all var
    _type = src._type;
    return ;
}

Animal::~Animal( void ){
    // delete
    return;
}

Animal & Animal::operator=( Animal const & rhs ){
    // ser var
    _type = rhs._type;
    return *this;
}

void    Animal::makeSound( void ) const{
    std::cout << "Animal here" << std::endl;
}

const std::string &    Animal::getType( void ) const{
    return _type;
}