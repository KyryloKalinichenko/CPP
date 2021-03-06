#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{
    public:
        FragTrap( std::string name );
        FragTrap(FragTrap const & src);
        ~FragTrap( void );

        FragTrap & operator=( FragTrap const & rhs );
        void    highFivesGuys( void ) const;
        void attack( std::string const & target);

    private:
        int _hit_p;
};

#endif