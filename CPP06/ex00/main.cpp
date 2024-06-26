#include "./include/ScalarConverter.hpp"

int main(int argc, const char **argv)
{	
	try
	{
		if (argc != 2)
			throw ScalarConverter::InvalidInput("Bad use. Run ./convert []. ");
		ScalarConverter::convert(argv[1]);
	}
	catch (ScalarConverter::InvalidInput e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}