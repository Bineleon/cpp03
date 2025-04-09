#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;

    _name = rhs.getName();
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDamage = rhs.getAttackDamage();

    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return _name;
}

int ClapTrap::getHitPoints(void) const
{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return _energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
    return _attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if (!_hitPoints)
    {
        std::cout  << "ClapTrap " << _name << "'s attack failed: no hit points left" << std::endl;
        return;
    }
    if (!_energyPoints)
    {
        std::cout  << "ClapTrap " << _name << "'s attack failed: no energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage <<  " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "Stop attacking this poor " << _name << " it's already dead !! " << std::endl;
        return;
    }
    if (_hitPoints - amount <= 0)
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " lost all it's hit points and died " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " got hit and lost " << amount << " hit points" << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_energyPoints)
    {
        std::cout  << "ClapTrap " << _name << "'s repair failed: no energy points left" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repaired itself" << ", gaining " << amount <<  " hit points!" << std::endl;
    _hitPoints += amount;
    _energyPoints--;
}
