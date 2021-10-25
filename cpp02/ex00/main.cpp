#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    std::cout << "------ CONSTRUCTORS ------" << std::endl;

    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;

    std::cout << "--------- GETTERS --------" << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << "--------- SETTERS --------" << std::endl;
	a.setRawBits(50);
	b.setRawBits(50);
	c.setRawBits(50);

    std::cout << "--------- GETTERS --------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << "------- DESTRUCTORS ------" << std::endl;
    return 0;
}