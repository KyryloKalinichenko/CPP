#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ){
    return;
}

MateriaSource::MateriaSource(MateriaSource const & src){
    // set all var
    return ;
}

MateriaSource::~MateriaSource( void ){
    // delete
    return;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ){
    // ser var
    return ;
}

int & MateriaSource::getSize( void ){
	return _size;
}

void MateriaSource::learnMateria( AMateria* ex){
	if (_size == 4)
		return ;
	_toKnow[_size] = ex->clone();
	_size++;
}
    
AMateria* createMateria(std::string const & type){
	AMateria* = new AMateria(type); ///  TODO
}
