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


