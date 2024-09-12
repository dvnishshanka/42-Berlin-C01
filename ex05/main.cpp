#include "Harl.hpp"

#define DEBUG "DEBUG"
#define INFO "INFO"
#define WARNING "WARNING"
#define ERROR "ERROR"

int	main()
{
	Harl	harl;

	harl.complain(DEBUG);
	harl.complain(INFO);
	harl.complain(WARNING);
	harl.complain(ERROR);

	return (0);
}