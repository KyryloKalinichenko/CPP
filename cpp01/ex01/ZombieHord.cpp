#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ){
	_hord = new Zombie[N];
	for(int i = 0; i < N; i++){
        _hord[i].set_name(name);    
    }
    for(int i = 0; i < N; i++){
        _hord[i].announce();    
    }
	return _hord;
}

void    Zombie::set_name( std::string name){
    _name = name;
}

Zombie::Zombie( void ): _name("default"){
	std::cout << "created" << std::endl;
	std::cout << _name << std::endl;
	return ;
}