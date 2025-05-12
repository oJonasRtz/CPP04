#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*a = new Animal();
	Animal	*b = new Cat();
	Animal	*c = new Dog();

	a->makeSound();
	b->makeSound();
	c->makeSound();
	delete a;
	delete b;
	delete c;
	return (0);
}
