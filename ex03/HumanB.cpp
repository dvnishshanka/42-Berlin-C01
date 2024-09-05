#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = nullptr;
}

HumanB::~HumanB() {};

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
};

void HumanB::attack(void) const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << (this->_weapon)->getType() << std::endl;
	else
		std::cout << this->_name << " cannot attack. No weapon." << std::endl;
};