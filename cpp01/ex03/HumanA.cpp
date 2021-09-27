#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon): _weapon(weapon){
	std::cout << "created" << std::endl;
    setName(name);
    return ;
}

HumanA::~HumanA( void )
{
	std::cout << "destroyed" << std::endl;
    return ;
}

void HumanA::attack( void ){
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}


void HumanA::setWeapon( Weapon weapon ){
    _weapon = weapon;
    return ;
}

void HumanA::setName( std::string name ){
    _name = name;
    return ;
}