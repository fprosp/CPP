#include "include/RPN.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
        std::cout << "Launch with ./rpn \"expression\"" << std::endl;
    else
    {
       RPN rpn(argv[1]);
       std::cout << rpn.RPNcalculator() << std::endl;
    }
    return (1);
}
