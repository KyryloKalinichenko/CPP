#include "WrongCat.hpp"

WrongCat::WrongCat( void ){
    std::cout << "A new WrongCat " << std::endl;
    _type = "WrongCat";
    return;
}

WrongCat::WrongCat(WrongCat const & src){
    // set all var
    _type = src._type;
    return ;
}

WrongCat::~WrongCat( void ){
    // delete
    return;
}

void    WrongCat::makeSound( void ) const{
    std::cout << "The WrongCat here!" << std::endl;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs ){
    // ser var
    _type = rhs._type;
    return *this;
}