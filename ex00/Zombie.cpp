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