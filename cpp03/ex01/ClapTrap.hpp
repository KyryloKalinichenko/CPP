#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    public:
        ClapTrap( std::string name );
        ClapTrap(ClapTrap const & src);
        ~ClapTrap( void );

        ClapTrap & operator=( ClapTrap const & src );
        void attack( std::string const & target);
        void takeDammage( unsigned int amount );
        void beRepaired( unsigned int amount );

        std::string & getName( void );
        int & get_attack_p( void );
        int & get_energy_p( void );

       protected:
        int _attack_p;
        int _energy_p;
        std::string _name;
        static const int _hit_p;

};

#endif