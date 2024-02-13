#include "./include/ClapTrap.hpp"

int main(void)
{
	ClapTrap Hitler("Hitler");
	ClapTrap Stalin("Stalin");

	Hitler.attack("Stalin");
	Hitler.takeDamage(5);
	for (int i = 0; i < 5; i++)
		Hitler.beRepaired(5);
	Hitler.takeDamage(30);
	Hitler.attack("Stalin");
	Hitler.beRepaired(5);
	Hitler.takeDamage(20);
	Hitler.beRepaired(5);
	Hitler.attack("Stalin");
	Hitler.takeDamage(500);
	Stalin.attack("itself");
	return (0);
}