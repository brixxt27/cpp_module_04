#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new (std::nothrow) Animal();
	const Animal* j = new (std::nothrow) Dog();
	const Animal* i = new (std::nothrow) Cat();
	if (meta == NULL || i == NULL || j == NULL) {
		std::cout << "Memory allocation is fail" << std::endl;
		std::exit(1);
	}

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	
	const WrongAnimal*	Wmeta = new (std::nothrow) WrongAnimal();
	const WrongAnimal*	Wi = new (std::nothrow) WrongCat();
	if (Wmeta == NULL || Wi == NULL) {
		std::cout << "Memory allocation is fail" << std::endl;
		std::exit(1);
	}

	std::cout << Wi->getType() << " " << std::endl;

	Wi->makeSound(); //will output the animal sound!

	Wmeta->makeSound();

	delete Wmeta;
	delete Wi;
	
	//system("leaks polymorphism");

	return 0;
}
