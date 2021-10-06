#include "Character.hpp"

Character::Character( void ){
	_name = "default";
	_st_size = 0;
    return;
}

Character::Character( std::string const name ){
	_name = name;
	_st_size = 0;
	for(int i = 0; i < 4; i++)
		_stock[i] = NULL;
    return;
}

Character::Character(Character const & src){
    // set all var
	_name = src.getName();
	_st_size = src.getStSize();
	for(int i = 0; i < 4; i++){
		if (!src._stock[i])
			_stock[i] = NULL;
		else
			_stock[i] = src._stock[i]->clone();
	}
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
	for(int i = 0; i < 4; i++){
		if (_stock[i])
			delete _stock[i];
		if (!rhs._stock[i])
			_stock[i] = NULL;
		else
			_stock[i] = rhs._stock[i]->clone();
	}
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
	std::cout << "equip\n";
	if (_st_size == 4 )
		return ;
	_st_size++;
	_stock[_st_size - 1] = m->clone();
}

void Character::unequip(int idx){
	std::cout << "unequip\n";
	if (!_st_size)
		return ;
	_st_size--;
	_stock[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3 || !_stock[idx])
		return ;
	_stock[idx]->use(target);
	// std::cout << target.getName() << std::endl;
}