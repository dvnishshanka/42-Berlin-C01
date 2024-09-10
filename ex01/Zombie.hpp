/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:10:13 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:10:15 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	_name;

public:
	// Dummy constructor
	Zombie();

	Zombie(std::string name);
	~Zombie();
	void setName(std::string name);
	void announce(void) const;
};

#endif


