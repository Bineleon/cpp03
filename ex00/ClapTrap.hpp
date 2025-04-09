#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& src);
        ClapTrap& operator=(const ClapTrap& rhs);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;
        
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

};

#endif
