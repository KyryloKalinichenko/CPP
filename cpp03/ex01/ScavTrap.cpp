#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
    std::cout << "ScavTrap " << _name << " is here!" << std::endl;
    _name = name;
    _attack_p = 20;
    _energy_p = 50;
    _guard = 0;
	_hit_p = 100;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src):ClapTrap(src){
    // set all var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    this->_guard = src._guard;
    return ;
}

ScavTrap::~ScavTrap( void ){
    std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
    // delete
    return;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src ){
    // ser var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    return *this;
}

void ScavTrap::attack( std::string const & target){
    if (_energy_p && !_guard){
        _energy_p -= 1;
        std::cout << "ScavTrap " << _name << " attack " << target << std::endl;
    }
    else
        std::cout << "ScavTrap " << _name << "have no energy for attack or guard mode activated." << std::endl;
}

void ScavTrap::takeDammage( unsigned int amount ){
    if (!_guard){
        std::cout << this->_name << " got " << amount << " points of damage" <<  std::endl;
        _attack_p-= amount;
    }
    else
        std::cout << this->_name << " blocked " << amount << "points of damage" <<  std::endl;
}

void ScavTrap::guard( void ){
    _guard = 1;
        std::cout << _name << " guard mode activated." << std::endl;
}