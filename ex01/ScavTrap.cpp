#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << SMGREEN << "ScavTrap default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << SMGREEN << "ScavTrap " << name << " constructor called" << RESET << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

}

ScavTrap::ScavTrap(const ScavTrap& src)
{
    std::cout << SMGREEN << "ScavTrap copy constructor called" << RESET << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << SMGREEN << "ScavTrap copy assignment operator called" << RESET << std::endl;
    _name  = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << RED << "ScavTrap " << _name << " destructor called" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << SMCYAN << "ScavTrap " << _name << " is now in Gate keeper mode" << RESET << std::endl;
}