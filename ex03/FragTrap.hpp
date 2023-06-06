#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		FragTrap& operator=(FragTrap const &other);

		void	attack(const std::string &target);
		void	highFivesGuys();

		~FragTrap();
};

#endif