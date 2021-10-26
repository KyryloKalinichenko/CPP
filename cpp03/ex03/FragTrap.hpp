#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap( std::string name );
        FragTrap(FragTrap const & src);
        ~FragTrap( void );

        FragTrap & operator=( FragTrap const & rhs );
        void    highFivesGuys( void ) const;

};

#endif