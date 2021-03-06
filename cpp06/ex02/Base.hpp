#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
    public:
        Base( void );
        Base(Base const & src);
        virtual ~Base( void );
        Base & operator=( Base const & rhs );

};

#endif