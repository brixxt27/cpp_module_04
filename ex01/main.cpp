#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <new>

#define CNT_ANIMALS	10

int main()
{
	/**
	 * Polymorphism
	 */

	Animal*	p_animal[CNT_ANIMALS];

	if (CNT_ANIMALS % 2 != 0) {
		std::cout << "The number of animals is not odd numbers!" << std::endl;
		return 1;
	}

	for (int i = 0; i < CNT_ANIMALS; ++i) {
		if (i < CNT_ANIMALS / 2)
			p_animal[i] = new (std::nothrow) Dog();
		else
			p_animal[i] = new (std::nothrow) Cat();
		if (p_animal[i] == NULL) {
			std::cout << "Memory allocation is fail" << std::endl;
			std::exit(1);
		}
	}

	for (int i = 0; i < CNT_ANIMALS; ++i) {
		p_animal[i]->makeSound();
	}

	for (int i = 0; i < CNT_ANIMALS; ++i) {
		delete p_animal[i];
	}

	/**
	 * Deep copy
	 */

	Dog*	myDog = new (std::nothrow) Dog();
	if (myDog == NULL) {
		std::cout << "Memory allocation is fail" << std::endl;
		std::exit(1);
	}

	for (int i = 0; i < 5; ++i) {
		std::cout << myDog->GetBrain()->GetIdeas()[i] << std::endl;
	}

	myDog->GetBrain()->SetIdeas("Bad idea");

	for (int i = 0; i < 5; ++i) {
		std::cout << myDog->GetBrain()->GetIdeas()[i] << std::endl;
	}

	Dog yourDog(*myDog);

	myDog->GetBrain()->SetIdeas("jayoon");

	for (int i = 0; i < 5; ++i) {
		std::cout << yourDog.GetBrain()->GetIdeas()[i] << std::endl;
	}

	for (int i = 0; i < 5; ++i) {
		std::cout << myDog->GetBrain()->GetIdeas()[i] << std::endl;
	}

	delete myDog;

	/**
	 * WrongCat
	*/
	// WrongCat		yourCat; 

	// {
	// 	WrongCat	myCat;

	// 	yourCat = myCat;		
	// }

	// std::cout << yourCat.getBrain()->GetIdeas() << std::endl;

	//system("leaks i_do_not_want_to_set_the_world_on_fire");

	return 0;
}
