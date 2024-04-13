#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include <iostream>
#include <string>

class ScravTrap
{
	private:
          std::string name;
          int hp;
          int ps;
          int power;

	public:
	    ScravTrap(std::string name, int hp, int ps, int power);
	    ~ScravTrap();
};

#endif