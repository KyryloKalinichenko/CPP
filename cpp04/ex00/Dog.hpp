#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog( void );
        Dog(Animal const & src);
        Dog & operator=( Dog const & rhs );
};

#endif