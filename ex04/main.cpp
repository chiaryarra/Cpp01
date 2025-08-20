#include <string>
#include <iostream>
#include <fstream>

void	find_and_replace(std::string& str, const std::string s1, const std::string s2)
{
	int	i = 0;
	while ((i = str.find(s1, i)) && i != -1)
	{
		str.erase(i, s1.length());
		str.insert(i, s2);
		i += s2.length();
	}
}


int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "You passed the wrong number of arguments" << std::endl;
		return (-1);
	}
	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << "The filename you passed is invalid!" << std::endl;
		return (-1);
	}
	std::string	filetext;
	std::string	line;
	while (std::getline(infile, line))
		filetext.append(line + "\n");
	infile.close();
	find_and_replace(filetext, argv[2], argv[3]);
	std::string outfile_name = argv[1];
	outfile_name.append(".replace");
	std::ofstream outfile((outfile_name).c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error to create and open .replace file" << std::endl;
		return (-1);
	}
	outfile << filetext;
	outfile.close();
	return (0);
}