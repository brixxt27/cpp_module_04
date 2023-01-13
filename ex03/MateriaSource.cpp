#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		_slot[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		if (other._slot[i] == NULL)
			_slot[i] = NULL;
		else {
			if (other._slot[i]->getType() == "ice")
				_slot[i] = new Ice();
			else
				_slot[i] = new Cure();
		}
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs) {
		for (int i = 0; i < CNT_INVENTORY; ++i) {
			if (_slot[i] != NULL) {
				delete _slot[i];
			}

			if (rhs._slot[i] == NULL) {
				_slot[i] = NULL;
			}				
			else {
				if (rhs._slot[i]->getType() == "ice")
					_slot[i] = new Ice();
				else
					_slot[i] = new Cure();
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		if (_slot[i] != NULL)
			delete _slot[i];
	}
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		if (_slot[i] == NULL) {
			_slot[i] = m;
			return;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i;

	if (type != "cure" && type != "ice")
		return NULL;

	for (i = 0; i < CNT_INVENTORY; i++) {
		if (_slot[i]->getType() == type)
			return _slot[i]->clone();
	}
	return NULL;
}
