#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <unistd.h>


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();



    delete j;//should not create a leak
	delete i;


	system("leaks animal");

    Animal* tab[10];
	for (int i = 0; i < 10; i++){
		if (i % 2)
			tab[i] = new Cat();
		else 
			tab[i] = new Dog();
	}
	for (int i = 0; i < 10; i++){
		delete tab[i];
	}
	system("leaks animal");
	return 0;

}
