#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main (void)
{
	// Create a Zombie on the stack. At the end of the program it is destroyed automatically.
	std::cout << "----------- Creating Zombie on 'Stack' ------------" << std::endl;
	randomChump("Tom");

	// Create a Zombie on the heap. It is not destroyed automatically.
	std::cout << std::endl << "----------- Creating Zombie on 'Heap' ------------" << std::endl;
	Zombie* jamesZombie = newZombie("James");
	jamesZombie->announce();
	delete jamesZombie;

	return (0);
}