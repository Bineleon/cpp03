#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap a("Bob");
    ScavTrap b("John");
	FragTrap c("Billy");

    a.attack("John");
	std::cout << std::endl;
    b.takeDamage(3);
	std::cout << std::endl;
    b.beRepaired(3);
	std::cout << std::endl;
    a.attack("John");
	std::cout << std::endl;
	b.takeDamage(10);
	std::cout << std::endl;
	b.attack("Bob");
	std::cout << std::endl;
    a.attack("Bob");
	std::cout << std::endl;
    b.takeDamage(3);
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
    return 0;
}
