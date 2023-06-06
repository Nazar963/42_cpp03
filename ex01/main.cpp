#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	loco("loco");
	ScavTrap	mado("mado");

	loco.attack("mado");
	loco.guardGate();

	return (0);
}