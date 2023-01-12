#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "Brain.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& other);
	// WrongCat&	operator=(const WrongCat& rhs);
	virtual ~WrongCat();

	void	makeSound() const;
	Brain*	getBrain() const;

private:
	Brain*	_brain;
};

#endif
