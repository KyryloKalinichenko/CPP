#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class ICaracter;

class Cure : public AMateria{
    public:
			virtual AMateria* clone() const;
			Cure( void );
			void use(ICharacter& target);
        	~Cure( void );

    private:
		std::string _type;
};

#endif