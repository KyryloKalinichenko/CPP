#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed( void ){
    std::cout << "default constr" << std::endl;
    return;
}

Fixed::Fixed( int i ){
    this->_fixed = i << this->_frac;
    std::cout << "int constr" << std::endl;
    return;
}

Fixed::Fixed( float i ){
    this->_fixed = (int)roundf(i * (1 << this->_frac));
    std::cout << "float constr" << std::endl;
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
    std::cout << "oper =" << std::endl;
    this->_fixed = rhs._fixed;
    // setRawBits(rhs.getRawBits());
    // ser var
    return *this;
}

int Fixed::toInt(void) const {
    std::cout << "to int" << std::endl;
    return (this->_fixed >> this->_frac);
}

float Fixed::toFloat(void) const {
    std::cout << "to float" << std::endl;
    return ((float)this->_fixed / (1 << this->_frac));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ){
    std::cout << "oper <<" << std::endl;
    o << rhs.toFloat();
    return o;
}