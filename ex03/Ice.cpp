#include "Ice.hpp"

Ice::Ice()
	: AMateria("ice")
{
}

Ice::Ice(const Ice& other)
	: AMateria(other._type)
{
}

Ice&	Ice::operator=(const Ice& rhs)
{
	std::cout << "While assigning a Materia to another, copying the type doesn't makesense." << std::endl;
}

Ice::~Ice()
{
}

AMateria*	Ice::clone() const
{
	AMateria* newIce = new (std::nothrow) Ice();

	if (newIce == NULL) {
		std::cout << "Mallocation fail" << std::endl;
		exit(1);
	}
	return newIce;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}
