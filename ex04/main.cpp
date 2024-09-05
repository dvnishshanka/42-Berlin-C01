#include <iostream>

#define INPUT_ERROR "Please enter valid parameters."
#define INVALID_FILENAME "Please enter valid filename."

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		if (filename.empty())
		{
			std::cout << INVALID_FILENAME << std::endl;
			return (1);
		}
		std::cout << "OK" << filename <<" " << s1 << " "<< s2 << std::endl;
	}
	else
		std::cout << INPUT_ERROR << std::endl;

	return (0);
}