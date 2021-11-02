#include "Cat.hpp"

Cat::Cat( void ){
    std::cout << "A new Cat " << std::endl;
    _type = "Cat";
    return;
}

Cat::Cat(Cat const & src){
    // set all var
    _type = src._type;
    return ;
}

Cat::~Cat( void ){
    // delete
    return;
}

void    Cat::makeSound( void ) const{
    std::cout << "The Cat here!" << std::endl;
}

Cat & Cat::operator=( Cat const & rhs ){
    // ser var
    _type = rhs._type;
    return *this;
}