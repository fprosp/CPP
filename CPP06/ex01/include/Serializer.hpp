#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

#include "Data.hpp"

class Serializer
{
	private:

		Serializer();
		Serializer(std::string const name, int grade);
		Serializer(const  Serializer &original);
		Serializer &operator=(const  Serializer &other);

	public:

		static uintptr_t serialize(Data *ptr);
		static Data	*deserialize(uintptr_t raw);
		~Serializer();
};


#endif