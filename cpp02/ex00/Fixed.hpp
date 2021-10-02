#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    public:
        Fixed( void );
        Fixed(Fixed const & src);
        ~Fixed( void );

        Fixed & operator=( Fixed const & rhs );

        int getRawBits( void );
        void setRawBits( int const raw );
    private:
        int _fixed;
        static const int _frac;
};

#endif