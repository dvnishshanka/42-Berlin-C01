/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:11:24 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:11:26 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

// Since Human A always has a weapon reference is used. As a reference cannot be null.
class HumanA
{
	public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack(void) const;

	private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif
