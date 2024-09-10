/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:08:44 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:08:47 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " zombie was created." << std::endl;
}

// Destructor
Zombie::~Zombie(void)
{
	std::cout << this->_name << " zombie was destroyed." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};
