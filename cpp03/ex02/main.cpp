#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("Mike");
    FragTrap b("Dima");
    std::cout << "**********************************************" << std::endl;

    a.attack(b.getName());
    b.takeDammage(2);

    std::cout << "DO you call it 'attack'!?" <<std::endl;
    b.attack(a.getName());
    a.takeDammage(10);

    std::cout << "it is ATACK!" << std::endl;
    b.beRepaired(4);
    a.highFivesGuys();
    b.highFivesGuys();
    return 0;
}