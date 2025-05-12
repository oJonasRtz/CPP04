#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void	right_classes(void)
{
	std::cout << BRIGHT_GREEN "\tConstructors\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	Animal	*a = new Animal();
	Animal	*b = new Cat();
	Animal	*c = new Dog();

	std::cout << ORANGE "\tmakeSound\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();

	std::cout << "\tOperator \"<<\"\n";
	std::cout << std::string(30, '-') << std::endl;
	std::cout << *a << " " << *b << " " << *c << std::endl;

	std::cout << BRIGHT_RED "\tDestructors\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	delete a;
	delete b;
	delete c;
}

static void	wrong_classes(void)
{
	std::cout << BRIGHT_GREEN "\tConstructors\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	WrongAnimal	*a = new WrongAnimal();
	WrongAnimal	*b = new WrongCat();

	std::cout << ORANGE "\tmakeSound\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	a->makeSound();
	b->makeSound();

	std::cout << "\tOperator \"<<\"\n";
	std::cout << std::string(30, '-') << std::endl;
	std::cout << *a << " " << *b << std::endl;

	std::cout << BRIGHT_RED "\tDestructors\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	delete a;
	delete b;
}

int	main(void)
{
	std::cout << BRIGHT_BLUE "\tright classes\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	right_classes();

	std::cout << BRIGHT_BLUE "\tWrong classes\n";
	std::cout << std::string(30, '-') << RESET << std::endl;
	wrong_classes();
	return (0);
}
