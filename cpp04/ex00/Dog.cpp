#include "Dog.hpp"

Dog::Dog( void ){
    _type = "Dog";
    _sound = "I'm a Dog.";
    return;
}

Dog::Dog(Dog const & src){
    // set all var
    _type = src._type;
    _sound = src._sound;
    return ;
}

Dog::~Dog( void ){
    // delete
    return;
}

Dog & Dog::operator=( Dog const & rhs ){
    // ser var
    _type = rhs._type;
    _sound = rhs._sound;
    return ;
}
