#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
          std::string name;
          int hp;
          int ps;
          int power;

	public:
	     ClapTrap(std::string name);
          ~ClapTrap();
          ClapTrap& operator=(const ClapTrap &other);
		ClapTrap(const ClapTrap &cp);
          void attack(const std::string& target);
          void takeDamage(unsigned int amount);
          void beRepaired(unsigned int amount);
          std::string getName(void);
          int getPower(void);
          int getPs(void);
          int getHp(void);
};

#endif