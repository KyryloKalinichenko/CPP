#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "---- CONSTRUCTORS ----" << std::endl << std::endl;
    ScavTrap a("Mike");
    ScavTrap b("Dima");


    std::cout << "---- ACTION ----" << std::endl << std::endl;
    a.attack(b.getName());
    b.takeDammage(2);

    std::cout << "DO you call it 'attack'!?" <<std::endl;
    b.attack(a.getName());
    a.takeDammage(10);

    std::cout << "it is ATACK!" << std::endl;
    b.beRepaired(4);

	a.guard();
	b.guard();
    std::cout << "---- DESTRUCTORS ----" << std::endl <<std::endl;
    return 0;
}