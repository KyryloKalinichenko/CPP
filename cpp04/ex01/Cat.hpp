#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    public:
        Cat( void );
        ~Cat( void );
        Cat(Cat const & src);
        Cat & operator=( Cat const & rhs );
        void virtual makeSound( void ) const;
		Brain* getBrain( void ) const;

	private:
		Brain * _br;
};

#endif