#include "Animal.hpp"

Animal::Animal()
	: _type("Animal")
{
	std::cout << "Animal's constructor is called" << std::endl;
}

Animal::Animal(std::string type)
	: _type(type)
{
	std::cout << "Animal's constructor is called" << std::endl;
}

Animal::Animal(const Animal& other)
	: _type(other._type)
{
	std::cout << "Animal's copy constructor is called" << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal's copy constructor is called" << std::endl;

	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal's destructor is called" << std::endl;
}

void		Animal::makeSound() const
{
	std::cout << "An animal is making sound!" << std::endl;
}

std::string	Animal::getType() const
{
	return _type;
}
