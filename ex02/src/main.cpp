#include "AbsAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static void	destroy(AbsAnimal **other, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		delete other[i];
}

static void	create(AbsAnimal **other, unsigned int n)
{
	unsigned int	cnt = n / 2;

	for (unsigned int i = 0; i < cnt; i++)
		other[i] = new Dog();
	for (unsigned int i = 0; i < cnt; i++)
		other[i + cnt] = new Cat();
}

int	main(void)
{
	AbsAnimal	*a[10];

	create(a, 10);
	for (int i = 0; i < 10; i++)
		a[i]->makeSound();

	std::cout << "\tAssignment test\n" << std::string(30, '-') << std::endl;
	*a[0] = *a[1];

	std::cout << "\tCopy test\n" << std::string(30, '-') << std::endl;
	Cat	*b = new Cat();
	Cat	*c = new Cat(*b);
	delete b;
	delete c;

	std::cout << "\tBrain test\n" << std::string(30, '-') << std::endl;
	AbsAnimal *d = new Cat();
	static_cast<Cat*>(d)->addIdea("Sell hot dog");
	static_cast<Cat*>(d)->addIdea("Conquer the world");
	static_cast<Cat*>(d)->showIdeas();
	delete d;

	std::cout << "\tDestructor test\n" << std::string(30, '-') << std::endl;
	destroy(a, 10);
	return (0);
}