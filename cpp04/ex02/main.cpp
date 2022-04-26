#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NUM_ANIMALS 5
int main()
{
	const Animal* j = new Dog();
	Animal* k = new Cat();
	Animal *domesticAnimals[NUM_ANIMALS];
	//Animal animal;

	std::cout << "----------------------" << std::endl;
	for(int i = 0; i < NUM_ANIMALS; i++)
	{
		if(i % 2)
			domesticAnimals[i] = new Dog();
		else
			domesticAnimals[i] = new Cat();
	}
	std::cout << "----------------------" << std::endl;
	for(int i = 0; i < NUM_ANIMALS; i++)
		delete domesticAnimals[i];

	std::cout << "----------------------" << std::endl;
	std::cout << "Type: " << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << "Type: " << k->getType() << " " << std::endl;
	k->makeSound();

	std::cout << "----------------------" << std::endl;
	Cat *cat = new Cat();
	Brain *catIdeas;
	
	catIdeas = cat->getBrain();

	catIdeas->ideas[0] = "Meow Meow";
	catIdeas->ideas[1] = "rrrrrrrrrrrrrrrrr";
	catIdeas->ideas[2] = "Kareeeeeeeeeen";
	catIdeas->ideas[3] = "Meeeeeeeew";

	Cat copycat = *cat;

	std::cout << cat->getBrain() << std::endl;
	std::cout << copycat.getBrain() << std::endl;
	std::cout << "----------------------" << std::endl;
	for(int i = 0; i < 4; i++)
		std::cout << "Copycat idea["<< i <<"]: "<<  copycat.getBrain()->ideas[i]<< std::endl;

	std::cout << "----------------------" << std::endl;
	delete cat;
	delete j;
	delete k;
	std::cout << "----------------------" << std::endl;


	std::cout << "----------------------" << std::endl;
	Cat test;
	{
		Cat tmp = test;
	}
	std::cout << "----------------------" << std::endl;
	std::cout << "----------------------" << std::endl;
	//system("leaks brain");
}
