#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define CNT_INVENTORY 4

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource&	operator=(const MateriaSource& rhs);
	virtual ~MateriaSource();

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);

private:
	AMateria*	_slot[CNT_INVENTORY];
};

#endif
