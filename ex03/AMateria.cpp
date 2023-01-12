#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const& type)
	: _type(type)
{
}

AMateria::AMateria(const AMateria& other)
	: _type(other._type)
{
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
}

std::string const & AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
}

AMateria::AMateria()
{
}
