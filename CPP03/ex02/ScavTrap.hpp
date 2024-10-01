#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
        ~ScavTrap();
		ScavTrap();
        ScavTrap(std::string name);
		ScavTrap(const ScavTrap &cp);
		ScavTrap& operator=(const ScavTrap &other);
		void attack(const std::string& target);
		void guardGate();
};

#endif