#include "Fixed.hpp"

Fixed::Fixed( void ){
    std::cout << "default constr" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "copy constr" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed( void ){
    // delete
    std::cout << "default destr" << std::endl;
    return;
}

int Fixed::getRawBits( void ){
    std::cout << "get raw bits" << std::endl;
    return _fixed;
}

void Fixed::setRawBits(const int raw){
    std::cout << "set raw bits" << std::endl;
    this->_fixed = raw;
}

Fixed & Fixed::operator=( Fixed const & rhs ){
    std::cout << "oper" << std::endl;
    this->_fixed = rhs._fixed;
    // setRawBits(rhs.getRawBits());
    // ser var
    return *this;
}