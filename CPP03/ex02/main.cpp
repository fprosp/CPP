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
	for (int i = 0; i < 5; i++)	
		frag1.highFivesGuys();
	frag2.attack("Jack");
	frag2.takeDamage(120);
	frag2.attack("Jack");
	
	return (0);
}

/*

int main ()
{
	ClapTrap Hitler("Hitler");
	ScavTrap Mussolini("Mussolini");
	FragTrap Hirohito("Hirohito");

	ClapTrap Stalin("Stalin");
	ScavTrap Molotov("Molotov");
	FragTrap Partigiani("Partigiani");
	
	FragTrap Churchill("Churchill");
	ClapTrap Roosevelt("Roosevelt");
	FragTrap Alleati("Alleati");

	Hitler.takeDamage(50);
	Hitler.attack("Churchill");
	Mussolini.attack("Churchill");
	Hitler.attack("Stalin");
	Mussolini.attack("Stalin");
	Stalin.takeDamage(500);
	Churchill.takeDamage(500);
	Roosevelt.takeDamage(500);
	Stalin.attack("Hitler");
	Stalin.attack("Mussolini");
	Roosevelt.attack("Hitler");
	Churchill.attack("Mussolini");
	Hitler.attack("himself");
	Mussolini.attack("himself");
	std::cout << Stalin.getName() << " , " << Roosevelt.getName() << " and " << Churchill.getName() << " won the war" << std::endl;
	return (0);
}

*/
