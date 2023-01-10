#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(const Animal& other);
	Animal&	operator=(const Animal& rhs);
	virtual ~Animal();

	virtual void	makeSound() const;

	std::string		getType() const;
	virtual Brain*	GetBrain() const = 0;

protected:
	std::string	_type;
	
	Animal(std::string type);
};

#endif
