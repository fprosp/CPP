#include "./include/Span.hpp"

int	main()
{
	try
	{
		Span	s(3);
		s.addNumber(42);
		s.addNumber(60);
		s.addNumber(4);

		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		
		s.addNumber(1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	 try
	 {
		Span s(10000);
		std::srand(std::time(NULL));
    	for (int i = 0; i < 10000; i++)
        	s.addNumber(std::rand());
		
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		
		s.addNumber(10001);
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }
	 try
	 {
		Span s(2);
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }
	 try
	 {
		Span s(2);
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	 }
	 catch(const std::exception& e)
	 {
		std::cerr << e.what() << '\n';
	 }
	 
}