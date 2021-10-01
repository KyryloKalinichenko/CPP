#include "Dog.hpp"

Dog::Dog( void ){
    _type = "Dog";
    return;
}

// Dog::Dog(Dog const & src){
//     // set all var
//     _type = src._type;
//     return ;
// }

// Dog::~Dog( void ){
//     // delete
//     return;
// }

Dog & Dog::operator=( Dog const & rhs ){
    // ser var
    _type = rhs._type;
    return *this;
}

void    Dog::makeSound( void ){
    std::cout << "The Dog here!" << std::endl;
}