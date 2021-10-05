#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        // virtual Animal( void );
        // virtual Animal( std::string type );
        // virtual Animal(AAnimal const & src);
        virtual ~Animal( void );
        void virtual makeSound( void ) const = 0;

        // AAnimal & operator=( AAnimal const & rhs );
    //     virtual const std::string &  getType( void ) const;
    // protected:
    //     std::string _type;

};

#endif