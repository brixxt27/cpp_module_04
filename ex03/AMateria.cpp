#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
	: _type(type)
{
	std::cout << "AMateria's constructor is called" << std::endl;
}




AMateria::AMateria()
{
	std::cout << "AMateria's default constructor is called" << std::endl;
}
