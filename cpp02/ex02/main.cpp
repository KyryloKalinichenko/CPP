#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.5f ) * Fixed( 2 ) );

    std::cout << "------------ OPERATORS -------------- " << std::endl;
    std::cout << "*** + and - *** " << std::endl;

	std::cout << "A value = " << a << std::endl;
    std::cout << "A + 2 = " << (a = (a + Fixed(2))) << std::endl;
    std::cout << "A value = " << a << std::endl;
    std::cout << "A - 2 = " << (a = (a - Fixed(2))) << std::endl;
    std::cout << "A value = " << a << std::endl << std::endl;

    std::cout << "*** ++x and --x *** " << std::endl;
	std::cout << "A value = " << a << std::endl;
    std::cout << ++a << std::endl;
	std::cout << "A value = " << a << std::endl;
    std::cout << --a << std::endl;
	std::cout << "A value = " << a << std::endl << std::endl;

    std::cout << "*** x++ and x-- *** " << std::endl;
	std::cout << "A value = " << a << std::endl;
    std::cout << a++ << std::endl;
	std::cout << "A value = " << a << std::endl;
    std::cout << a-- << std::endl;
	std::cout << "A value = " << a << std::endl << std::endl;

    std::cout << "*** / and * *** " << std::endl;
	std::cout << "A value = " << (a = (a + Fixed(10))) << std::endl;
    std::cout << (a / Fixed(2)) << std::endl;
	std::cout << "A value = " << a << std::endl;
    std::cout << (a * Fixed(2)) << std::endl;
	std::cout << "A value = " << a << std::endl << std::endl;


    std::cout << "------------ Min Max -------------- " << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "MAX is " << Fixed::max( a, b ) << std::endl;
    std::cout << "MIN is "<< Fixed::min( a, b ) << std::endl;

    std::cout << "------------ COMPARE -------------- " << std::endl;

    std::cout << "A = " << a << std::endl;
    std::cout << "B = " << b << std::endl;

    std::cout << "(A == B) = " << (a == b) << std::endl;
    std::cout << "(A != B) = " << (a != b) << std::endl;
    std::cout << "(A > B) = " << (a > b) << std::endl;
    std::cout << "(A < B) = " << (a < b) << std::endl;
    std::cout << "(A >= B) = " << (a >= b) << std::endl;
    std::cout << "(A <= B) = " << (a <= b) << std::endl;
    
    std::cout << "------------ DESTRUCTORS -------------- " << std::endl;
    return 0;
}