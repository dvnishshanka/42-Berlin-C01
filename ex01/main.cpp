#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main (void)
{
	int	i = 0;
	int	n = 10;

	Zombie* zombies = zombieHorde(n, "James");

	while (i < n)
	{
		zombies[i].announce();
		i ++;
	}

	delete []zombies;

	return (0);
}