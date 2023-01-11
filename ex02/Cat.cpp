#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat's constructor is called" << std::endl;

	_brain = new (std::nothrow) Brain();
	if (_brain == NULL) {
		std::cout << "Memory allocation is fail!" << std::endl;
		std::exit(1);
	}
}

Cat::Cat(const Cat& other)
	: Animal(other._type)
{
	std::cout << "Cat's copy constructor is called" << std::endl;
	
	_brain = new (std::nothrow) Brain();
	if (_brain == NULL) {
		std::cout << "Memory allocation is fail" << std::endl;
		std::exit(1);
	}

	_brain->SetIdeas((other._brain->GetIdeas())[0]);
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat's copy constructor is called" << std::endl;

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

Cat::~Cat()
{
	std::cout << "Cat's destructor is called" << std::endl;

	delete _brain;
	std::cout << "Cat's brain is deleted" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain*	Cat::GetBrain() const
{
	return _brain;
}
