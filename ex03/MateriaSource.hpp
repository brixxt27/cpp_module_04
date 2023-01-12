#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& rhs);
	virtual ~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

private:
	AMateria*	_slot[4];
};

#endif
