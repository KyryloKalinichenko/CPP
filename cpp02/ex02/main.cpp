#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed const b( 42.42f );
    Fixed const c( 42.42f );

    std::cout << (b == c) << std::endl;

    return 0;
}