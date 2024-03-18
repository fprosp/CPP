#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()																	// DefaultCostructor
{
	std::cout << "Costruction of ScalarConvertion object." << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter &otherObj) 										// Copy constructor
{
	*this = otherObj;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &otherObj)								// Copy assigment operator overload
{
	if (this != &otherObj)
	{
		std::cout << "Copying attributes in " << this << "." <<std::endl;
	}
}

ScalarConverter::~ScalarConverter()																	// Destructor
{
	std::cout << "ScalarConverter object destruction. " << std::endl;
}

























void	convertToDouble(const std::string &value)
{
	if (!isdigit(value[0]))
	{
		char	c = value[0];
		double	d = static_cast<double>(c);
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	else
	{
		try
		{
			double	d = std::stod(value);
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "float: Impossible" << std::endl;
		}
	}
}

void	convertToFloat(const std::string &value)
{
	if (!isdigit(value[0]))
	{
		char	c = value[0];
		float	f = static_cast<float>(c);
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	else
	{
		try
		{
			float f = std::stof(value);
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "float: Impossible" << std::endl;
		}
	}
}

int		symCount(const std::string &value, char sym)
{
	int	c = 0;
	for (std::string::size_type i = 0; i < value.length(); i++)
		if (value[i] == sym)
			c++;
	if (c > 1)
		return (0);
	return (1);
}

int	isDot(const std::string &value)
{
	if (!symCount(value, '.') || !symCount(value, '+') || !symCount(value, '-'))
		return (0);
	int	i = 0;
	while (i < value.length())
	{
		if (value[i] == '+' || value[i] == '-')
			i++;
		while (isdigit(value[i]))
			i++;
		if (value[i] == '.')
			i++;
		while (isdigit(value[i]))
			i++;
		if (value[i] == 'f' && value[i + 1] == '\0')
			return (1);
		else if (value[i] != '\0')
			return (0);
	}
	return (1);
}

int		specialCheck(const std::string &value)
{
	if ((!value.compare(0, 3, "nan") && value.length() > 3) || (!value.compare(0, 3, "inf") && value.length() > 3) ||
		(!value.compare(0, 4, "-inf") && value.length() > 4) || (!value.compare(0, 4, "+inf") && value.length() > 4) ||
		(!value.compare(0, 4, "inff") && value.length() > 4) || (!value.compare(0, 5, "+inff") && value.length() > 5) ||
		(!value.compare(0, 5, "-inff") && value.length() > 5) || (!value.compare(0, 4, "nanf") && value.length() > 4))
	{
		std::cout << "Invalid argument" << std::endl;
		return (0);
	}
	if (value == "nan" || value == "inf" || value == "inff" || value == "nanf" || value == "+inf" ||
		value == "-inf" || value == "-inff" || value == "+inff")
	{
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";		
		std::cout << "float: " << std::stof(value) << "f \n";
		std::cout << "char: " << std::stod(value) << std::endl;
		return (0);
	}
	return (1);
}

void	convertToInt(const std::string &value)
{
	if (!isdigit(value[0]))
	{
		char	c = value[0];
		int		i = static_cast<int>(c);
		std::cout << "int: " << i << std::endl;
	}
	else
	{
		try
		{
			int i = std::stoi(value);
			std::cout << "int: " << i << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cerr << "int: Impossible" << std::endl;
		}
	}
}

void	convertToChar(const std::string &value)
{
	std::istringstream cStream(value);
	int		i;
	char	c;
	cStream >> i;
	c = i;
	if (value.length() == 1 && !isdigit(value[0]))
		std::cout << "char: " << value[0] << std::endl;
	else if (isprint(c))
		std::cout << "char: " << c << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
}

void	ScalarConverter::convert(std::string argv)
{
	if (!specialCheck(argv))
		return ;
	if ((argv.length() > 1 && !isdigit(argv[0])) || (isdigit(argv[0]) && !isDot(argv)))
	{
		std::cout << "Invalid argument" << std::endl;
		return ;
	}
	convertToChar(argv);
	convertToInt(argv);
	convertToFloat(argv);
	convertToDouble(argv);
	return ;
}
