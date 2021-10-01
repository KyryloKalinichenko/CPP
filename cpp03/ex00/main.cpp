#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Mike");
    ClapTrap b("Dima");

    a.attack(b.getName());
    b.takeDammage(a.get_attack_p());

    std::cout << "DO you call it 'attack'!?" <<std::endl;
    b.attack(a.getName());
    a.takeDammage(b.get_attack_p());

    std::cout << "it is ATACK!" << std::endl;
    b.beRepaired(4);
    return 0;
}