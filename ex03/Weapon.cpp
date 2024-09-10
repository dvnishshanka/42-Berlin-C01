/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:13:11 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:13:13 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) :  _type(type){};

Weapon::~Weapon(){};

std::string const & Weapon::getType(void) const
{
	return (this->_type);
};

void Weapon::setType(std::string type)
{
	this->_type = type;
};
