#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <new>

int main()
{
	//Animal*	p_animal[42];

	//for (int i = 0; i < 21; ++i) {
	//	p_animal[i] = new Dog();
	//}
	//for (int i = 21; i < 42; ++i) {
	//	p_animal[i] = new Cat();
	//}

	Dog*	myDog = new (std::nothrow) Dog();
	if (myDog == NULL) {
		std::cout << "Memory allocation is fail!" << std::endl;
		std::exit(1);
	}

	myDog->GetBrain()->SetIdeas("Bad idea");

	for (int i = 0; i < 5; ++i) {
		std::cout << myDog->GetBrain()->GetIdeas()[i] << std::endl;
	}

	Dog	yourDog(*myDog);

	for (int i = 0; i < 5; ++i) {
		std::cout << yourDog.GetBrain()->GetIdeas()[i] << std::endl;
	}

	myDog->GetBrain()->SetIdeas("jayoon");

	for (int i = 0; i < 5; ++i) {
		std::cout << myDog->GetBrain()->GetIdeas()[i] << std::endl;
	}
	
	delete myDog;


	//for (int i = 0; i < 42; ++i) {
	//	delete p_animal[i];
	//}

	//system("leaks i_do_not_want_to_set_the_world_on_fire");

	return 0;
}
