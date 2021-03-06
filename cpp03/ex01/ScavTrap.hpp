#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
    public:
        ScavTrap( std::string name );
        ScavTrap(ScavTrap const & src);
        ~ScavTrap( void );

        void attack( std::string const & target);
        void guardGate( void );


        ScavTrap & operator=( ScavTrap const & rhs );

    private:
        int     _guard;

};

#endif