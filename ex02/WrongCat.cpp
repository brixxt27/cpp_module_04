#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat's constructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
	: WrongAnimal(other._type)
{
	std::cout << "WrongCat's copy constructor is called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat's copy constructor is called" << std::endl;

	if (this != &rhs)
	{
		_type = rhs._type;
	}

	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor is called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
