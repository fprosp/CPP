#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    public:
        Brain();                                  // Default costructor
        ~Brain();                                 // Default destructor
        Brain(const Brain &className);            // Copy constructor
        Brain &operator=(const Brain &className); // Copy Assignment operator overload
        
        std::string _ideas[100];
};

#endif