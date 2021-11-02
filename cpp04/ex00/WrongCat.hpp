#ifndef WrongCAT_HPP
#define WrongCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
        
    public:
        WrongCat( void );
        ~WrongCat( void );
        WrongCat(WrongCat const & src);
        WrongCat & operator=( WrongCat const & rhs );
        void makeSound( void ) const;
};

#endif