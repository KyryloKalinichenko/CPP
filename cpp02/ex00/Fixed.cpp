#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed( void ):_fixed(0){
    std::cout << "Default constructor." << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor." << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed( void ){
    // delete
    std::cout << "Default destructor." << std::endl;
    return;
}

int Fixed::getRawBits( void ){
    std::cout << "Get raw bits." << std::endl;
    return _fixed;
}

void Fixed::setRawBits(const int raw){
    std::cout << "Set raw bits." << std::endl;
    this->_fixed = raw;
}

Fixed & Fixed::operator=( Fixed const & rhs ){
    std::cout << "Operator =" << std::endl;
    this->_fixed = rhs._fixed;
    // setRawBits(rhs.getRawBits());
    // ser var
    return *this;
}