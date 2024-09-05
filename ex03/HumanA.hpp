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