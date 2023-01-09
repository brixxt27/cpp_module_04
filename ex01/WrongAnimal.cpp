#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: _type("WrongAnimal")
{
	std::cout << "WrongAnimal's constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: _type(other._type)
{
	std::cout << "WrongAnimal's copy constructor is called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal's copy constructor is called" << std::endl;

	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor is called" << std::endl;
}

void		WrongAnimal::makeSound() const
{
	std::cout << "An WrongAnimal is making sound!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}

WrongAnimal::WrongAnimal(std::string type)
	: _type(type)
{
	std::cout << "WrongAnimal's constructor is called" << std::endl;
}
