#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>


class ICharacter;

class AMateria
{
    	protected:
			std::string _type;

		public:
				AMateria( void );
       			AMateria(AMateria const & src);
        		virtual ~AMateria( void );
        		AMateria & operator=( AMateria const & rhs );

       			AMateria(std::string const & type);
				std::string const & getType() const; //Returns the materia type
				virtual AMateria* clone() const = 0;
				virtual void use(ICharacter& target) = 0;
};

#endif