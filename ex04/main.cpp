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
#define OUTPUT_FILE_ERROR "Error occurred when writing to the newfile."

std::string	replaceWord(std::ifstream *ifs, char c, std::string s1, std::string s2)
{
	int	i = 1;
	std::string	outputStr = "";

	outputStr += c;
	while (s1[i])
	{
		c = (*ifs).get();
		if (!(*ifs))
			return (outputStr);
		outputStr += c;
		if (c != s1[i])
			return (outputStr);
		i ++;
	}
	return (s2);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		std::ifstream ifs(filename);
		if (!ifs.is_open())
		{
			std::cerr << INVALID_FILENAME << std::endl;
			return (1);
		}
		std::string newFilename = filename + ".replace";
		char c = ifs.get();
		std::ofstream ofs(newFilename);
		if (!ofs.is_open())
		{
			std::cerr << OUTPUT_FILE_ERROR << std::endl;
			return (1);
		}
		
		while (ifs.good())
		{
			if (c == s1[0])
				ofs << replaceWord(&ifs, c, s1, s2);
			else
				ofs << c;
			c = ifs.get();
		}
		ifs.close();
		ofs.close();
	}
	else
		std::cerr << INPUT_ERROR << std::endl;
	return (0);
}
