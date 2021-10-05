#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: IMateriaSource{
	public:
		MateriaSource( void );
        MateriaSource(MateriaSource const & src);
        ~MateriaSource( void );
		std::string & getType( void );

        MateriaSource & operator=( MateriaSource const & rhs );
    	void learnMateria(AMateria* ex) = 0;
    	AMateria* createMateria(std::string const & type) = 0;
		int & getSize( void );
	private:
		AMateria* _toKnow[4];
		int 	_size;
};

#endif