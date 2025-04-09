#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Bob");
    ClapTrap b ("John");
	ClapTrap c(a);

    a.attack("John");
    b.takeDamage(3);
    b.beRepaired(3);
    a.attack("John");
    b.takeDamage(10);
    b.attack("Bob");
    a.attack("Bob");
    b.takeDamage(3);
	std::cout << c.getName() << std::endl;
    return 0;
}
