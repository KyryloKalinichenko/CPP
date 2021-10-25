#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Mike");
    ClapTrap b("Dima");

    a.attack(b.getName());
    b.takeDammage(1);

    std::cout << std::endl << "[Dima] : DO you call it 'attack'!?" <<std::endl;
    b.attack(a.getName());
    a.takeDammage(5);

    std::cout << std::endl << "[Dima] : It is the ATTACK..." << std::endl;
    b.beRepaired(4);
    return 0;
}