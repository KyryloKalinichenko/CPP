#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "--- CONSTRUCTOR ---" << std::endl << std::endl;
    DiamondTrap a("Mike");
    DiamondTrap b("Dima");

    std::cout << "--- ACTION ---" << std::endl << std::endl;
    a.attack(b.getName());
    b.takeDamage(2);

    std::cout << "DO you call it 'attack'!?" <<std::endl;
    b.attack(a.getName());
    a.takeDamage(10);

    std::cout << "it is ATACK!" << std::endl;
    b.beRepaired(4);

    a.highFivesGuys();
	b.guardGate();

	a.whoAmI();
    std::cout << "--- DESTRUCTOR ---" << std::endl << std::endl;
    return 0;
}