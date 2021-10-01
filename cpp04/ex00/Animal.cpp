#include "Animal.hpp"

Animal::Animal( void ){
    return;
}

Animal::Animal( std::string type ){
    _type = type;
    _sound = "I'm an animal.";
    return;
}

Animal::Animal(Animal const & src){
    // set all var
    _type = src._type;
    _sound = src._sound;
    return ;
}

Animal::~Animal( void ){
    // delete
    return;
}

Animal & Animal::operator=( Animal const & rhs ){
    // ser var
    _type = rhs._type;
    _sound = rhs._sound;
    return ;
}

void    Animal::makeSound( void ){
    std::cout << _sound << std::endl;
}

std::string &    Animal::getType( void ){
    return _type;
}