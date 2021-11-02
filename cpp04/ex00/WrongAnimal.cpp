#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
    std::cout << "An WrongAnimal here" << std::endl;
	_type = "WrongAnimal";
    return;
}

WrongAnimal::WrongAnimal( std::string type ){
    _type = type;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
    // set all var
    _type = src._type;
    return ;
}

WrongAnimal::~WrongAnimal( void ){
    // delete
    std::cout << "A WrongAnimal destructed " << std::endl;
    return;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ){
    // ser var
    _type = rhs._type;
    return *this;
}

void    WrongAnimal::makeSound( void ) const{
    std::cout << "Wrong Animal" << " here" << std::endl;
}

const std::string &    WrongAnimal::getType( void ) const{
    return _type;
}