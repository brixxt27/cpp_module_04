#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat's constructor is called" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal(other._type)
{
	std::cout << "Cat's copy constructor is called" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat's copy constructor is called" << std::endl;

	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor is called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
