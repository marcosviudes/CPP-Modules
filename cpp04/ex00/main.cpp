#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << "--------------------------" << std::endl;

	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	meta->makeSound();
	std::cout << "--------------------------" << std::endl;

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	wrongMeta->makeSound();
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete k;
	return (0);
}