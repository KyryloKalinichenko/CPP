#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        Animal( void );
        Animal( std::string type );
        Animal(Animal const & src);
        ~Animal( void );
        virtual void    makeSound( void );

        Animal & operator=( Animal const & rhs );
        virtual std::string &  getType( void );

    protected:
        std::string _type;
        std::string _sound;
};

#endif