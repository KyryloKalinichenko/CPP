#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Mike");
    ScavTrap b("Dima");

    a.attack(b.getName());
    b.takeDammage(2);

    std::cout << "DO you call it 'attack'!?" <<std::endl;
    b.attack(a.getName());
    a.takeDammage(10);

    std::cout << "it is ATACK!" << std::endl;
    b.beRepaired(4);
    return 0;
}