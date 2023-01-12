#include "Cure.hpp"

Cure::Cure()
	: AMateria("cure")
{
}

Cure::Cure(const Cure& other)
	: AMateria(other._type)
{
}

Cure&	Cure::operator=(const Cure& rhs)
{
	std::cout << "While assigning a Materia to another, copying the type doesn't makesense." << std::endl;
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	AMateria* newIce = new (std::nothrow) Cure();

	if (newIce == NULL) {
		std::cout << "Mallocation fail" << std::endl;
		exit(1);
	}
	return newIce;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *";
}

