#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ){
	std::cout << "---- Constructors ----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << "---- Wrong Constructors ----" << std::endl;
	const WrongAnimal* wa = new WrongAnimal(); 
	const WrongAnimal* wc = new WrongCat();

	std::cout << "---- Get type ----" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

	std::cout << "---- Wrong Get type ----" << std::endl;
    std::cout << wa->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;
	
	std::cout << "---- Make sound ----" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
	
	std::cout << "---- Wrong Make sound ----" << std::endl;
    wa->makeSound();
    wc->makeSound();
	
	std::cout << "---- Destructors ----" << std::endl;
	delete meta;
	delete i;
	delete j;

	std::cout << "---- Wrong Destructors ----" << std::endl;
	delete wa;
	delete wc;
    }
