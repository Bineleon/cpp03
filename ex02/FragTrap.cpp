#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << SMGREEN << "FragTrap " << name << " constructor called" << RESET << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

}

FragTrap::FragTrap(const FragTrap& src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
        // copy members here
    return *this;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << SMCYAN << "FragTrap " << _name << " is requesting an awosome HIGH FIVE ! 🖐️" << RESET << std::endl;
}