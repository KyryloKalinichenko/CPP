#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    public:
        Fixed( void );
        Fixed(Fixed const & src);
        Fixed( const int n_fix );
        Fixed( const float n );
        ~Fixed( void );

        Fixed & operator=( Fixed const & rhs );
        Fixed & operator++( void );
        Fixed operator++( int );
        Fixed & operator--( void );
        Fixed operator--( int );


        bool operator==( const Fixed  & rhs) const;
        bool operator!=( const Fixed  & rhs) const;
        bool operator<=( const Fixed  & rhs) const;
        bool operator<( const Fixed  & rhs) const;
        bool operator>=( const Fixed  & rhs) const;
        bool operator>( const Fixed  & rhs) const;

        Fixed operator+(const Fixed & rhs);
        Fixed operator-(const Fixed & rhs);
        Fixed operator*(const Fixed & rhs);
        Fixed operator/(const Fixed & rhs);



        int getRawBits( void );
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
    private:
        int _fixed;
        static const int _frac;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif