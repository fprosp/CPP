#include "include/PmergeMe.hpp"

bool check_seq(std::string seq)
{
	std::istringstream	iss(seq);
	int					num;

	for (size_t i = 0; i < seq.length(); i++)
	{
		if (seq[i] == ' ')
			continue ;
		if (!isdigit(seq[i]) && seq[i] != '-' || (seq[i] == '-' && !isdigit(seq[i + 1])))
		{
			std::cout << "Error! Provide only numbers" << std::endl;
			return (0);
		}
	}
	while (iss >> num)
	{
		if (num < 0)
		{
			std::cout << "Error! Provide only positive numbers" << std::endl;
			return (0);
		}
	}
	return (1);
}

std::string save_seq(int argc, char **argv)
{
	std::string seq;
	if (argc == 2)
	  		seq = argv[1];
	else
	{
		for (int i = 1; i < argc; i++)
		{
			seq += argv[i];
			if (i < argc - 1)
				seq += " ";
		}
	}
	return (seq);
}

int main (int argc, char **argv)
{
	if (argc < 2)
		std::cout << "Error! Provide a positive sequence" << std::endl;
	else
	{
		std::string	seq = save_seq(argc, argv);
		if (!check_seq(seq))
			return (0);
		PmergeMe	pm(seq);
	}
	return (1);
}
