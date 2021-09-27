
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
class Zombie {

	public:
		void	announce( void );
		Zombie( std::string name );
		Zombie( void );

		// void Zombie::set_name( void	);

		~Zombie( void );
		// Zombie* zombieHorde( int N, std::string name );
		Zombie* zombieHorde( int N, std::string name );

	private:
		Zombie* _hord;
		std::string	_name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif