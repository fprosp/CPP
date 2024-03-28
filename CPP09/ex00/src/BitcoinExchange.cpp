#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange(std::string file, std::string db) : _file(file)
{
	std::ifstream data(_file);
	if (!data.is_open())
	{
		std::cerr << "Could not open file." << std::endl;
		return ;
	}
	std::ifstream database(db);
	if (!database.is_open())
	{
		std::cerr << "Could not open database." << std::endl;
		return ;
	}

	std::string	line;
	std::getline(database, line);
	while (std::getline(database, line))
	{
		size_t		pos = line.find(',');
		std::string	date = line.substr(0, pos);
		float		rate = std::stof(line.substr(pos + 1));
		_btcRate[date] = {rate};
	}
	database.close();
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &original)
{
	*this = original;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		this->_btcValue = other._btcValue;
		this->_btcRate = other._btcRate;
		this->_file = other._file;
	}
	return (*this);
}

 void    	exchange()
 {
	
 }