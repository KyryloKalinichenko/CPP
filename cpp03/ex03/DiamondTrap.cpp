#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ):FragTrap(name), ScavTrap(name){
    std::cout << "DiamondTrap is here!" << std::endl;
    _attack_p = 30;
    _energy_p = 100;
    return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src):FragTrap(src), ScavTrap(src){
    // set all var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    return ;
}

DiamondTrap::~DiamondTrap( void ){
    std::cout << "DiamondTrap is dead!" << std::endl;
    // delete
    return;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src ){
    // ser var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    return *this;
}

void DiamondTrap::whoAmI( void ){
    std::cout << _name << " faser's name " << getName() << std::endl;
}