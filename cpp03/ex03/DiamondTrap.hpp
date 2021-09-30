#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : virtual public ClapTrap, public FragTrap, public ScavTrap{
    public:
        DiamondTrap( std::string name );
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap( void );

        DiamondTrap & operator=( DiamondTrap const & rhs );
        using ClapTrap::getName;
        void whoAmI( void );
        using ScavTrap::attack;
    private:
        using FragTrap::_attack_p;
        using ScavTrap::_energy_p;

        std::string _name;
        using FragTrap::_hit_p;
};

#endif