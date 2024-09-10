/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:09:27 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:09:28 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		std::cout << "Call announce on Zombie " << i << std::endl;
		zombies[i].announce();
		i ++;
	}

	delete []zombies;

	return (0);
}
