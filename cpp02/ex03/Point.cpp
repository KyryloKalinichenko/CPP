#include "Point.hpp"
#include "Fixed.hpp"

Point::Point( void ): _x(0), _y(0) {
    return;
}

Point::Point( float x, float y ): _x(x), _y(y) {
    return;
}

Fixed Point::get_x( void ) const{
	return _x;
}

Fixed Point::get_y( void ) const {
	return _y;
}


Point::Point(Point const & src): _x(src.get_x()), _y(src.get_y()){
    // set all var
    return ;
}

Point::~Point( void ){
    // delete
    return;
}

Point & Point::operator=( Point const & rhs ){
	(void)rhs;
    return *this;
}