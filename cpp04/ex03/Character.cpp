#include "Character.hpp"

Character::Character( void ){
	_name = "default";
	_st_size = 0;
    return;
}

Character::Character( std::string const name ){
	_name = name;
	_st_size = 0;
    return;
}

Character::Character(Character const & src){
    // set all var
	_name = src.getName();
	_st_size = src.getStSize();
    return ;
}

Character::~Character( void ){
    // delete
    return;
}

Character & Character::operator=( Character const & rhs ){
    // ser var
	_name = rhs.getName();
	_st_size = rhs.getStSize();
    return *this;
}

std::string & Character::getType( void ){
	return _type;
}

const int & Character::getStSize( void ) const{
	return _st_size;
}

std::string const & Character::getName() const{
	return _name;
}

void Character::equip(AMateria* m){
	if (_st_size == 4 )
		return ;
	_stock[_st_size - 1] = m->clone();
}

void Character::unequip(int idx){
	if (!_st_size)
		return ;
	_stock[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3)
		return ;
	std::cout << _stock[idx]->getType() << std::endl;
	std::cout << target.getName() << std::endl;
}