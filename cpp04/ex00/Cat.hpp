#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat( void );
        Cat(Animal const & src);
        Cat & operator=( Cat const & rhs );
        void virtual makeSound( void ) const;
};

#endif