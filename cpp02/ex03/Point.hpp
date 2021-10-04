#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
    public:
        Point( void );
        Point( float x, float y );
        Point(Point const & src);
        ~Point( void );

		Fixed get_x( void ) const;
		Fixed get_y( void ) const;

        Point & operator=( Point const & rhs );

    private:
		Fixed const _x;
		Fixed const _y;

};

#endif