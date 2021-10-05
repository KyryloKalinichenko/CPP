#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class ICharacter;

class Character : public ICharacter{
    public:
        Character( void );
        Character( std::string const name );
        Character(Character const & src);
        ~Character( void );
		Character & operator=( Character const & rhs );

		std::string & getType( void );
		std::string const & getName() const;
		void equip(AMateria * m);
		void unequip(int idx);
		const int & getStSize( void ) const;

		void use(int idx, ICharacter& target);


    private:
		std::string _type;
		std::string _name;
		AMateria* _stock[4];
		int		_st_size;
};

#endif