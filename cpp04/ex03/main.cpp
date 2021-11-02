#include <iostream>
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

#include <unistd.h>

// class IMateriaSource;
// class MateriaSource;

int main()
{
	// Cure a;
	// Ice b;
	


	// std::cout << a.getType() << std::endl;
	// std::cout << b.getType() << std::endl;

	// Character bob("Bob");

	// bob.equip(&a);
	// bob.equip(&b);

	// bob.use(0, bob);
	// bob.use(1, bob);
	
	// std::cout << "*****************************\n";
	// bob.unequip(0);
	// bob.unequip(1);

	// bob.use(0, bob);
	// bob.use(1, bob);

	// std::cout << "*****************************\n";
	// Cure tmp(a);

	// std::cout << tmp.getType() << std::endl;

	// MateriaSource mat_s;

	// mat_s.learnMateria(&a);
	// mat_s.learnMateria(&b);

	// void* ex = mat_s.createMateria("ice");

	// std::cout << ((Ice*)(ex))->getType() << std::endl;




	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}