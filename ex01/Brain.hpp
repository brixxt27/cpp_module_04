#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain& other);
	Brain&	operator=(const Brain& rhs);
	~Brain();

private:
	std::string	_ideas[100];
};

#endif
