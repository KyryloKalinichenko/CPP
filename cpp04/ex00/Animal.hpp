#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        Animal( void );
        Animal( std::string type );
        Animal(Animal const & src);
        ~Animal( void );
        void virtual makeSound( void ) const;

        Animal & operator=( Animal const & rhs );
        const std::string &  getType( void ) const;

    protected:
        std::string _type;
};

#endif