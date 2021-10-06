#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: IMateriaSource{
	public:
		MateriaSource( void );
        MateriaSource(MateriaSource const & src);
        ~MateriaSource( void );
		// std::string & getType( void ) const;

        MateriaSource & operator=( MateriaSource const & rhs );
    	void learnMateria(AMateria* ex);
    	AMateria* createMateria(std::string const & type);
		int getSize( void ) const;
	private:
		AMateria* _toKnow[4];
		int 	_size;
};

#endif