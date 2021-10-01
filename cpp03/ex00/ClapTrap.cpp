#include "ClapTrap.hpp"

const int ClapTrap::_hit_p = 10;

ClapTrap::ClapTrap( std::string name ){
    std::cout << "ClapTrap is here!" << std::endl;
    _name = name;
    _attack_p = 0;
    _energy_p = 10;
    return;
}

ClapTrap::ClapTrap( void ): _name("default"), _attack_p(0), _energy_p(0){
    std::cout << "ClapTrap is here!" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src){
    // set all var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
    return ;
}

ClapTrap::~ClapTrap( void ){
    std::cout << "ClapTrap is dead!" << std::endl;
    // delete
    return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src ){
    // ser var
    this->_name = src._name;
    this->_attack_p = src._attack_p;
    this->_energy_p = src._energy_p;
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
        std::cout << target << " attack " << this->_name << std::endl;
    }
    else
        std::cout << _name << "have no energy for attack." << std::endl;
}

void ClapTrap::takeDammage( unsigned int amount ){
    std::cout << this->_name << "got" << amount << "point of damage" <<  std::endl;
    _attack_p-= amount;

}

void ClapTrap::beRepaired( unsigned int amount ){
    std::cout << this->_name << "got got repared for" << amount << "point" <<  std::endl;
    _attack_p += amount;
}