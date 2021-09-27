#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name): _name("default"){
	std::cout << "created" << std::endl;
    setName(name);
    return ;
}

HumanB::~HumanB( void )
{
	std::cout << "destroyed human b" << std::endl;
    return ;
}

void HumanB::attack( void ){
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}


void HumanB::setWeapon( Weapon* weapon ){
    _weapon = weapon;
    return ;
}

void HumanB::setName( std::string name ){
    _name = name;
    return ;
}