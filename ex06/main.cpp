#include "Harl.hpp"

#define INPUT_ERROR "Please enter one log level correctly."

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cerr << INPUT_ERROR << std::endl;
		return (1);
	}
	harl.complain(argv[1]);

	return (0);
}