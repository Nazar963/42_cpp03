#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &other);
		ScavTrap& operator=(ScavTrap const &other);

		void	attack(const std::string &target);
		void	guardGate();

		~ScavTrap();
};

#endif