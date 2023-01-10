#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain's constructor is called" << std::endl;

	for (int i = 0; i < 100; ++i) {
		_ideas[i] = "Good idea";
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain's copy constructor is called" << std::endl;

	operator=(other);
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain's copy assignmet operator is called" << std::endl;

	if (this != &rhs) {
		for (int i = 0; i < 100; ++i) {
			_ideas[i] = rhs._ideas[i];
		}
	}

	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain's destructor is called" << std::endl;
}

void	Brain::SetIdeas(std::string idea)
{
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = idea;
	}
}

const std::string*	Brain::GetIdeas() const
{
	return _ideas;
}
