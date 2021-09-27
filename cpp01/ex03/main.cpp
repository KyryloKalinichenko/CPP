#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{

    std::cout << "------------ test 1------------- \n";
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    std::cout << "------------ test 2------------- \n";
    Weapon club2 = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(&club2);
    jim.attack();
    club2.setType("some other type of club");
    jim.attack();
    std::cout << "------------ clean up------------- \n";


    return 0;
}