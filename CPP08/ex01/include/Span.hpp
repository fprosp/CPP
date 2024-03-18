#ifndef  SPAN_HPP
# define  SPAN_HPP

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <set>
#include <cstdlib>
#include <ctime>

class  Span
{
	private:

		std::vector<int>	_v;
		unsigned int		_max;

	public:

		Span();
		Span(unsigned int n);
		Span(const  Span &original);
		Span &operator=(const  Span &other);
		~Span();

		void	addNumber(int num);
		void	addNumber(std::set<int>::iterator begin, std::set<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
};

#endif