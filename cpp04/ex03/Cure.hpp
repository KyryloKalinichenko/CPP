#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
    public:
			virtual AMateria* clone() const;
			Cure( void );

    private:
		std::string _type;
};

#endif