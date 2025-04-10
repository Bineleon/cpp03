#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
		ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src);
        ScavTrap& operator=(const ScavTrap& rhs);
        ~ScavTrap(void);
		void guardGate();

};

#endif
