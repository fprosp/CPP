#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap Hitler("Hitler");
	ScavTrap Himler("Himler");
	ClapTrap Stalin("Stalin");
	ClapTrap Churchill("Churchill");
	ClapTrap Roosevelt("Roosevelt");

	Hitler.takeDamage(50);
	Hitler.attack("Churchill");
	Himler.attack("Churchill");
	Hitler.attack("Stalin");
	Himler.attack("Stalin");
	Stalin.takeDamage(500);
	Churchill.takeDamage(500);
	Roosevelt.takeDamage(500);
	Stalin.attack("Hitler");
	Stalin.attack("Himler");
	Roosevelt.attack("Hitler");
	Churchill.attack("Himler");
	Hitler.attack("himself");
	Himler.attack("himself");
	return (0);
}
