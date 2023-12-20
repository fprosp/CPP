#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"

int	main(void)
{
	ClapTrap trap1("Clappy");
	ScavTrap scav1;
	ScavTrap scav2("Scavvy");
	
	trap1.attack("Jack");
	scav1.attack("Jack");
	scav2.attack("Jack");
	scav1.takeDamage(30);
	scav2.takeDamage(30);
	for (int i = 0; i < 50; i++)
		scav2.guardGate();
	scav1.takeDamage(75);
	scav1.attack("Jack");
	scav1.guardGate();
		
	return (0);
}
