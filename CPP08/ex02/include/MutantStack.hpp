#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <vector>
#include <iostream>
#include <stack>

template <typename T>
class  MutantStack : public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack();
		MutantStack(const  MutantStack &original);
		MutantStack &operator=(const  MutantStack &other);
		~MutantStack();

		iterator	begin();
		iterator	end();
};

#include "../src/MutantStack.tpp"

#endif