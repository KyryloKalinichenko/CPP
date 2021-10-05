#include "AMateria.hpp"

AMateria::AMateria( void ){
	std::cout << "A new materia here\n";
	_type = "default";
    return;
}

AMateria::AMateria( std::string const & type ) {
	std::cout << "A new materia here\n";
	_type = type;
    return;
}

AMateria::AMateria(AMateria const & src){
    // set all var
	_type = src.getType();
    return ;
}

AMateria::~AMateria( void ){
	std::cout << "There is no more materia\n";
    // delete
    return;
}

AMateria & AMateria::operator=( AMateria const & rhs ){
    // ser var
	_type = rhs.getType();
    return *this;
}

std::string const & AMateria::getType( void ) const{
	return _type;
}