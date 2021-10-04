#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ){
    _type = "Dog";
	_br = new Brain();
    std::cout << "A new Dog " << std::endl;
    return;
}

// Dog::Dog(Dog const & src){
//     // set all var
//     _type = src._type;
//     return ;
// }

Dog::~Dog( void ){
    delete _br;
    return;
}

Dog & Dog::operator=( Dog const & rhs ){
    // ser var
    _type = rhs._type;
		delete _br;
	_br = new Brain;
	_br = rhs.getBrain();
    return *this;
}

Brain* Dog::getBrain( void ) const {
	return _br;
}

void    Dog::makeSound( void ) const{
    std::cout << "The Dog here!" << std::endl;
}