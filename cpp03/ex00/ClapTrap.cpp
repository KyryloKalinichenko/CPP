#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ):_name(name), _attack_p(0), _energy_p(10), _hit_p(10){
    std::cout << "ClapTrap " << _name <<  " is here!" << std::endl;
    return;
}

ClapTrap::ClapTrap( void ): _name("default"), _attack_p(0), _energy_p(10), _hit_p(10){
    std::cout << "ClapTrap is here!" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src){
    // set all var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
	this->_hit_p = src._hit_p;
    return ;
}

ClapTrap::~ClapTrap( void ){
    std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
    // delete
    return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src ){
    // ser var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
	this->_hit_p = src._hit_p;
    return *this;
}

std::string & ClapTrap::getName( void ){
    return _name;
}

int & ClapTrap::get_energy_p( void ){
    return _energy_p;
}

int & ClapTrap::get_attack_p( void ){
    return _attack_p;
}

void ClapTrap::attack( std::string const & target){
    if (_energy_p){
        _energy_p -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << "have no energy for the attack." << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ){
    std::cout << "ClapTrap " << this->_name << " got " << amount << " points of damage!" <<  std::endl;
    _attack_p -= amount;

}

void ClapTrap::beRepaired( unsigned int amount ){
    std::cout << "ClapTrap " << this->_name << " got got repared for " << amount << " points!" <<  std::endl;
    _attack_p += amount;
}