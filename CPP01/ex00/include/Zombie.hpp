#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
    private:
        std::string Name;

    public:
        void announce();
        Zombie (std::string Name);
        ~Zombie ();
};

Zombie* newZombie( std::string name );
void    randomChump(std::string name);

#endif
