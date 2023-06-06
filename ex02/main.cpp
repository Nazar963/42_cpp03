#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	loco("loco");
	FragTrap	mado("mado");
	ScavTrap	zoro("zoro");

	loco.attack("mado");
	loco.highFivesGuys();
	loco.beRepaired(10);
	zoro.guardGate();

	return (0);
}