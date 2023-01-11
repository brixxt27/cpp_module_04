#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal&	operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal();

	void	makeSound() const;

	std::string	getType() const;

protected:
	std::string	_type;
	
	WrongAnimal(std::string type);
};

#endif
