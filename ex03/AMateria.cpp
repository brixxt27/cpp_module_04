#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
	: _type(type)
{
	std::cout << "AMateria's constructor is called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
	: _type(other._type)
{
	std::cout << "AMateria's copy constructor is called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMataria's destructor is called" << std::endl;
}

AMateria::AMateria()
{
	std::cout << "AMateria's default constructor is called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return _type;
}

//void	AMateria::use(ICharacter& target)
//{

//}
