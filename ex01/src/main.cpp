#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static void	destroy(Animal **other, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		delete other[i];
}

static void	create(Animal **other, unsigned int n)
{
	unsigned int	cnt = n / 2;

	for (unsigned int i = 0; i < cnt; i++)
		other[i] = new Dog();
	for (unsigned int i = 0; i < cnt; i++)
		other[i + cnt] = new Cat();
}

int	main(void)
{
	Animal	*a[10];

	create(a, 10);
	for (int i = 0; i < 10; i++)
		a[i]->makeSound();
	destroy(a, 10);
	return (0);
}
