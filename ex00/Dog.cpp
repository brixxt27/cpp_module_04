#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog's constructor is called" << std::endl;
}

Dog::Dog(const Dog& other)
	: Animal(other._type)
{
	std::cout << "Dog's copy constructor is called" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog's copy constructor is called" << std::endl;

	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor is called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
