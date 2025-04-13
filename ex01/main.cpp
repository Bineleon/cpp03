#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iomanip>

void printHeader(const std::string& str)
{
	int size = 50;
	int totalPad = size - str.size();
	(totalPad < 0) ? totalPad = 0 : totalPad;
	int lPad = totalPad / 2;
	int rPad = totalPad - lPad;

	std::cout << std::endl << SMGREEN;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setfill(' ') << std::setw(lPad + str.size()) << str << std::setw(rPad) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << RESET << std::endl;
}

int main(void)
{
    printHeader("Test : ClapTrap and ScavTrap construction");
    ClapTrap clap1("Clap");
    ScavTrap scrap1("Scav");

    printHeader("Test : Attacks ans repare");
    clap1.attack("ennemy");
    scrap1.attack("other ennemy");
    clap1.beRepaired(5);
    scrap1.beRepaired(10);

    printHeader("Test : Damages");
    clap1.takeDamage(3);
    scrap1.takeDamage(20);

    printHeader("Test : ScavTrap guard mode activation");
    scrap1.guardGate();

    printHeader("Test : Copy and affectation");
    ScavTrap scrap2(scrap1);
    ScavTrap scrap3;
    scrap3 = scrap1;

    printHeader("Test : No hit points");
    ScavTrap scrap4("DeadScrap");
    scrap4.takeDamage(200);
    scrap4.attack("Someone");
    scrap4.guardGate();
    scrap4.beRepaired(10);
    scrap4.guardGate();

    printHeader("Test : No energy points");
    ScavTrap scrap5("TiredScrap");
    for (int i = 0; i < 51; ++i)
        scrap5.attack("Someone");
    scrap5.guardGate();

    printHeader("Test : Destructors");
    return 0;
}
