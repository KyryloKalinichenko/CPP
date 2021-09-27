#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout << "created" << std::endl;
    this->setType(type);
    return ;
}

Weapon::~Weapon( void )
{
	std::cout << "destroyed weapon" << std::endl;
    return ;
}

const std::string& Weapon::getType( void ){
    return _type;
}

void Weapon::setType( std::string type ){
    _type = type;
}
