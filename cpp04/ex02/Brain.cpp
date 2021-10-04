#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "WOW a new brain." << std::endl;
    return;
}

Brain::Brain(Brain const & src){
    // set all var
	const std::string* tmp = src.get_br();
	for (int i = 0; i < 100; i++)
		_ideas[i] = tmp[i];
    return ;
}

Brain::~Brain( void ){
	std::cout << "Brain is destructed." << std::endl;
    return;
}

Brain & Brain::operator=( Brain const & rhs ){
    // ser var
	const std::string* tmp = rhs.get_br();
	for (int i = 0; i < 100; i++)
		_ideas[i] = tmp[i];
    return *this;
}

const std::string*  Brain::get_br( void ) const{
	return &(_ideas[0]);
}