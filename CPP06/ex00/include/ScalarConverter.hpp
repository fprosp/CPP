#ifndef SalarConverter_HPP
# define SalarConverter_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <sstream>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	public:
		ScalarConverter();											// Default costructor
		ScalarConverter(std::string argv);							// Custom constructor
		ScalarConverter(ScalarConverter &otherObj);					// Copy costructotr
		ScalarConverter &operator=(ScalarConverter &otherObj);		// Copy asssigment operator overload
		~ScalarConverter();											// Default destructor

		void static	convert(std::string argv);

		class InvalidInput : public std::exception
		{
			private:
				std::string		_message;
			public:
				InvalidInput(std::string msg) : _message(msg) {}
				~InvalidInput() _NOEXCEPT {}; 	// _NOEXCEPT non necessario su linux
				const std::string	what()
				{
					return (_message);
				}
		};
		class NonDisplayable : public std::exception
		{
			private:
				std::string		_message;
			public:
				NonDisplayable(std::string msg) : _message(msg) {}
				~NonDisplayable() _NOEXCEPT {}; 	// _NOEXCEPT non necessario su linux
				const std::string	what()
				{
					return (_message);
				}
		};
};

#endif 