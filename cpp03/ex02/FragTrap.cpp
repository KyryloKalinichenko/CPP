#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name){
    std::cout << "FragTrap is here!" << std::endl;
    _name = name;
    _attack_p = 30;
    _energy_p = 100;
	_hit_p = 100;
    return;
}

FragTrap::FragTrap(FragTrap const & src):ClapTrap(src){
    // set all var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    return ;
}

FragTrap::~FragTrap( void ){
    std::cout << "FragTrap " << _name << " is dead!" << std::endl;
    // delete
    return;
}

FragTrap & FragTrap::operator=( FragTrap const & src ){
    // ser var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    return *this;
}

void    FragTrap::highFivesGuys( void ) const{
    std::cout << "Hey, give me high five!" << std::endl;
}

void FragTrap::attack( std::string const & target){
    if (_energy_p){
        _energy_p -= 1;
        std::cout << "FragTrap " << _name << " attacks " << target << std::endl;
    }
    else
        std::cout << "FragTrap " << _name << "have no energy for attack." << std::endl;
}