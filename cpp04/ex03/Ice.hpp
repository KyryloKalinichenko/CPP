#ifndef ORTHO_HPP
#define ORTHO_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    public:
			virtual AMateria* clone() const;
			Ice( void );
			void use(ICharacter& target);
        	~Ice( void );


    private:
		std::string _type;
};

#endif