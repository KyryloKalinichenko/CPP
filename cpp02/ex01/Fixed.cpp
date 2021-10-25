#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed( void ){
    std::cout << "Default constructor" << std::endl;
    return;
}

Fixed::Fixed( int i ){
    this->_fixed = i << this->_frac;
    std::cout << "Int constructor" << std::endl;
    return;
}

Fixed::Fixed( float i ){
    this->_fixed = (int)roundf(i * (1 << this->_frac));
    std::cout << "Float constructor" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src){
    std::cout << "Copy constructor" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed( void ){
    // delete
    std::cout << "Default destructor" << std::endl;
    return;
}

int Fixed::getRawBits( void ){
    std::cout << "Get raw bits" << std::endl;
    return _fixed;
}

void Fixed::setRawBits(const int raw){
    std::cout << "Set raw bits" << std::endl;
    this->_fixed = raw;
}

Fixed & Fixed::operator=( Fixed const & rhs ){
    std::cout << "Operator =" << std::endl;
    this->_fixed = rhs._fixed;
    // setRawBits(rhs.getRawBits());
    // ser var
    return *this;
}

int Fixed::toInt(void) const {
    std::cout << "Converted to int" << std::endl;
    return (this->_fixed >> this->_frac);
}

float Fixed::toFloat(void) const {
    std::cout << "Converted to float" << std::endl;
    return ((float)this->_fixed / (1 << this->_frac));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ){
    o << rhs.toFloat();
    return o;
}