#include "Cat.hpp"

Cat::Cat( void ){
    _type = "Cat";
	_br = new Brain();
    std::cout << "A new Cat " << std::endl;
    return;
}

// Cat::Cat(Cat const & src){
//     // set all var
//     _type = src._type;
//     return ;
// }

Cat::~Cat( void ){
    delete _br;
    return;
}

void    Cat::makeSound( void ) const{
    std::cout << "The Cat here!" << std::endl;
}

Brain* Cat::getBrain( void ) const {
	return _br;
}

Cat & Cat::operator=( Cat const & rhs ){
    // ser var
    _type = rhs._type;
	delete _br;
	_br = new Brain;
	_br = rhs.getBrain();
    return *this;
}