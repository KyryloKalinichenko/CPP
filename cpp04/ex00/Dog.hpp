#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog( void );
        ~Dog( void );
        Dog(Dog const & src);
        Dog & operator=( Dog const & rhs );
        void virtual makeSound( void ) const;

};

#endif