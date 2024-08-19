#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main (void)
{
	Zombie*	jamesZombie;

	// Create a Zombie on the stack
	randomChump("Tom");

	// Create a Zombie on the heap
	jamesZombie = newZombie("James");
	jamesZombie->announce();
	delete jamesZombie;

	return (0);
}