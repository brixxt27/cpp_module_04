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
	if (this != &rhs) {
		std::cout << "While assigning a Materia to another, copying the type doesn't makesense." << std::endl;
	}

	return *this;
}

Cure::~Cure()
{
}

AMateria*	Cure::clone() const
{
	AMateria* newCure = new (std::nothrow) Cure();

	if (newCure == NULL) {
		std::cout << "Mallocation fail" << std::endl;
		exit(1);
	}
	return newCure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

