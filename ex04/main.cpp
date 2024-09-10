/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:13:44 by dnishsha          #+#    #+#             */
/*   Updated: 2024/09/06 19:13:46 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#define INPUT_ERROR "Please enter valid parameters."
#define INVALID_FILENAME "Please enter valid filename."

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string newFilename = filename + ".replace";

		std::ifstream readFile(filename, std::ifstream::in);
		if (!readFile.is_open())
		{
			std::cerr << INVALID_FILENAME << std::endl;
			return (1);
		}

		char c = readFile.get();
		std::ofstream writeFile(newFilename);
		while (readFile.good()) {
			writeFile << c;
			c = readFile.get();
		}

		readFile.close();
		writeFile.close();
	}
	else
		std::cerr << INPUT_ERROR << std::endl;

	return (0);
}
