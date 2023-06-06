#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	FragTrap	loco("loco");
	FragTrap	mado("mado");
	ScavTrap	zoro("zoro");
	DiamondTrap	diamond("diamond");

	diamond.attack("mado");
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	loco.attack("mado");
	loco.highFivesGuys();
	loco.beRepaired(10);
	zoro.guardGate();

	return (0);
}