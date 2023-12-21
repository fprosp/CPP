#include "./include/ClapTrap.hpp"
#include "./include/ScavTrap.hpp"
#include "./include/FragTrap.hpp"

int	main(void)
{
	ClapTrap trap1("Will_Smith");
	ScavTrap scav1("Fraggy");
	FragTrap frag1;
	FragTrap frag2("Bombastic");
	
	trap1.attack("Jack");
	scav1.attack("Jack");
	frag1.attack("Jack");
	frag2.attack("Jack");
	scav1.guardGate();
	for (int i = 0; i < 100; i++)	
		frag1.highFivesGuys();
	frag2.attack("Jack");
	frag2.takeDamage(120);
	frag2.attack("Jack");
	
	return (0);
}
