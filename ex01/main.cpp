#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal*	p_animal[42];

	//for (int i = 0; i < 21; ++i) {
	//	p_animal[i] = new Dog();
	//}
	//for (int i = 21; i < 42; ++i) {
	//	p_animal[i] = new Cat();
	//}

	const Animal*	myDog = new Dog();

	myDog->GetBrain()->SetIdeas("Bad idea");

	for (int i = 0; i < 5; ++i) {
		std::cout << (myDog->GetBrain())[i] << std::endl;
	}

	delete myDog;



	//for (int i = 0; i < 42; ++i) {
	//	delete p_animal[i];
	//}

	//system("leaks i_do_not_want_to_set_the_world_on_fire");

	return 0;
}
