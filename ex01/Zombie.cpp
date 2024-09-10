/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:09:49 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:09:51 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->setName(name);
	std::cout << this->_name << " zombie was created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " zombie was destroyed." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::Zombie(){
	std::cout << "Zombie was created." << std::endl;
};

void Zombie::setName(std::string name)
{
	this->_name = name;
};
