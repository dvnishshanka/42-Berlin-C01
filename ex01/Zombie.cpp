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