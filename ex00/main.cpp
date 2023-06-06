#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	loco("loco");
	ClapTrap	mado("mado");

	loco.attack("mado");
	loco.beRepaired(2);
	mado.takeDamage(2);
	mado.beRepaired(5);

	return (0);
}