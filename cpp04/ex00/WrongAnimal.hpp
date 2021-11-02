#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal(WrongAnimal const & src);
        virtual ~WrongAnimal( void );
        void makeSound( void ) const;

        WrongAnimal & operator=( WrongAnimal const & rhs );
        const std::string &  getType( void ) const;

    protected:
        std::string _type;
};

#endif