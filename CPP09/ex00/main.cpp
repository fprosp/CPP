#include "include/BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
        std::cout << "Launch with ./BitcoinExhcange input.txt" << std::endl;
    else
    {
        BitcoinExchange BitcoinExhcange(std::string(av[1]), "data.csv");
        BitcoinExhcange.exchange();
    }
    return (1);
}
