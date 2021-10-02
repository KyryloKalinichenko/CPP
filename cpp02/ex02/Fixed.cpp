#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed( void ){
    // std::cout << "default constr" << std::endl;
    return;
}

Fixed::Fixed( int i ){
    this->_fixed = i << this->_frac;
    // std::cout << "int constr" << std::endl;
    return;
}

Fixed::Fixed( float i ){
    // std::cout << i << std::endl;
    this->_fixed = (int)roundf(i * (1 << this->_frac));
    // std::cout << _fixed << std::endl;

    return;
}
// 101.00001100110011001101
// 10100001101
// 


Fixed::Fixed(Fixed const & src){
    // std::cout << "copy constr" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed( void ){
    // delete
    // std::cout << "default destr" << std::endl;
    return;
}

int Fixed::getRawBits( void ){
    // std::cout << "get raw bits" << std::endl;
    return _fixed;
}

void Fixed::setRawBits(const int raw){
    // std::cout << "set raw bits" << std::endl;
    this->_fixed = raw;
}

//************************************************

Fixed & Fixed::operator=( Fixed const & rhs ){
    // std::cout << "oper =" << std::endl;
    this->_fixed = rhs._fixed;
    // setRawBits(rhs.getRawBits());
    // ser var
    return *this;
}

Fixed const & Fixed::min(const Fixed & one, const Fixed & two){
    if (one > two)
        return two;
    return one;
}

Fixed const & Fixed::max(const Fixed & one, const Fixed & two){
    if (one < two)
        return two;
    return one;
}

Fixed Fixed::operator+(const Fixed & rhs){
    // std::cout << "oper +" << std::endl;
    Fixed tmp(this->toFloat() + rhs.toFloat());
    return tmp;
}

Fixed & Fixed::operator++( void ){
    // std::cout << "oper ++" << std::endl;
    this->_fixed += 1;
    return *this;
}

Fixed Fixed::operator++( int ){
    // std::cout << "oper ++" << std::endl;
    Fixed tmp = *this;
    operator++();
    return tmp;
}

Fixed & Fixed::operator--( void ){
    // std::cout << "oper --" << std::endl;
    this->_fixed -= 1;
    return *this;
}

Fixed Fixed::operator--( int ){
    // std::cout << "oper --" << std::endl;
    Fixed tmp = *this;
    operator--();
    return tmp;
}

Fixed Fixed::operator-(const Fixed & rhs){
    // std::cout << "oper -" << std::endl;
    Fixed tmp(this->toFloat() - rhs.toFloat());
    return tmp;
}

Fixed Fixed::operator*(const Fixed & rhs){
    // std::cout << "oper *" << std::endl;
    Fixed tmp(this->toFloat() * rhs.toFloat());
    return tmp;
}

Fixed Fixed::operator/(const Fixed & rhs){
    // std::cout << "oper /" << std::endl;
    Fixed tmp(this->toFloat() / rhs.toFloat());
    return tmp;
}

//***************************************************

bool Fixed::operator==(const Fixed  & rhs) const{
    // std::cout << "oper ==" << std::endl;
    return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(const Fixed  & rhs) const{
    // std::cout << "oper !=" << std::endl;
    return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator<(const Fixed  & rhs) const{
    // std::cout << "oper <" << std::endl;
    return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator<=(const Fixed  & rhs) const{
    // std::cout << "oper <=" << std::endl;
    return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator>(const Fixed  & rhs) const{
    // std::cout << "oper >" << std::endl;
    return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator>=(const Fixed  & rhs) const{
    // std::cout << "oper >=" << std::endl;
    return this->toFloat() >= rhs.toFloat();
}

//******************************************************

int Fixed::toInt(void) const {
    // std::cout << "to int" << std::endl;
    return (this->_fixed >> this->_frac);
}

float Fixed::toFloat(void) const {
    // std::cout << "to float" << std::endl;
    return ((float)this->_fixed / (1 << this->_frac));
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs ){
    // std::cout << "oper <<" << std::endl;
    o << rhs.toFloat();
    return o;
}