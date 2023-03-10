#include "Dog.hpp"
#include <new>

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog's constructor is called" << std::endl;

	_brain = new (std::nothrow) Brain();
	if (_brain == NULL) {
		std::cout << "Memory allocation is fail" << std::endl;
		std::exit(1);
	}
}

Dog::Dog(const Dog& other)
	: Animal(other._type)
{
	std::cout << "Dog's copy constructor is called" << std::endl;
	
	_brain = new (std::nothrow) Brain();
	if (_brain == NULL) {
		std::cout << "Memory allocation is fail" << std::endl;
		std::exit(1);
	}

	_brain->SetIdeas((other._brain->GetIdeas())[0]);
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog's copy constructor is called" << std::endl;

	if (this != &rhs)
	{
		_type = rhs._type;

		delete _brain;
		_brain = new (std::nothrow) Brain();
		if (_brain == NULL) {
			std::cout << "Memory allocation is fail" << std::endl;
			std::exit(1);
		}

		_brain->SetIdeas(*(rhs._brain->GetIdeas()));
	}

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor is called" << std::endl;

	delete _brain;
	std::cout << "Dog's brain is deleted" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain*	Dog::GetBrain() const
{
	return _brain;
}
