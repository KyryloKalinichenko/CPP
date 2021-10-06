#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ){
	_size = 0;
	for(int i = 0; i < 4; i++)
		_toKnow[i] = NULL;
    return;
}

MateriaSource::MateriaSource(MateriaSource const & src){
    // set all var
	_size = src.getSize();
	for(int i = 0; i < 4; i++){
		if (_toKnow[i])
			delete _toKnow[i];
		if (!src._toKnow[i])
			_toKnow[i] = NULL;
		else
			_toKnow[i] = src._toKnow[i]->clone();
	}
    return ;
}

MateriaSource::~MateriaSource( void ){
    // delete
	for(int i = 0; i < 4; i++){
		if (!_toKnow[i])
			continue ;
		else
			delete _toKnow[i];
	}
    return;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ){
    // ser var
	_size = rhs.getSize();
	for(int i = 0; i < 4; i++){
		if (_toKnow[i])
			delete _toKnow[i];
		if (!rhs._toKnow[i])
			_toKnow[i] = NULL;
		else
			_toKnow[i] = rhs._toKnow[i]->clone();
	}
    return *this;
}

int MateriaSource::getSize( void ) const{
	return _size;
}

void MateriaSource::learnMateria( AMateria* ex){
	if (_size == 4)
		return ;
	_toKnow[_size] = ex->clone();
	_size++;
}
    
AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if (_toKnow[i]->getType() == type)
			return _toKnow[i]->clone();
	}
	return NULL;
}
