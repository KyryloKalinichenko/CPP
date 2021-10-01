#include "Cat.hpp"

Cat::Cat( void ){
    _type = "Cat";
    _sound = "I'm a Cat.";
    return;
}

Cat::Cat(Cat const & src){
    // set all var
    _type = src._type;
    _sound = src._sound;
    return ;
}

Cat::~Cat( void ){
    // delete
    return;
}

void    Cat::makeSound( void ){
    std::cout << _sound << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ){
    // ser var
    _type = rhs._type;
    _sound = rhs._sound;
    return ;
}