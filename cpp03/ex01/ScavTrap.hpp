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
        void guard( void );
        void takeDammage( unsigned int amount );


        ScavTrap & operator=( ScavTrap const & rhs );

    private:
        int     _guard;

    //     int _attack_p;
    //     int _energy_p;
    //     std::string _name;
    //     static const int _hit_p;
};

#endif