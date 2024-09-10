/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:10:01 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:10:04 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	Zombie*	zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].setName(name);
		i ++;
	}
	return (zombieHorde);
};
