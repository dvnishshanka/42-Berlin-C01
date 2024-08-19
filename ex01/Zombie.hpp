#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	// Dummy constructor
	Zombie();

	Zombie(std::string name);
	~Zombie();
	void setName(std::string name);
	void announce(void);
};

#endif


