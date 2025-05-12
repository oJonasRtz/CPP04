#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	type = "WrongAnimal";
	std::cout << BRIGHT_GREEN "WrongAnimal: constructor called\n" RESET;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << BRIGHT_GREEN "WrongAnimal: copy constructor\n" RESET;
	*this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << BRIGHT_GREEN "WrongAnimal: assingment operator\n" RESET;
	if (this != &other)
		type = other.type;
	return (*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout << BRIGHT_RED "WrongAnimal: destructor\n" RESET;
}

std::ostream &operator<<(std::ostream &out, const WrongAnimal &other)
{
	out << other.getType();
	return (out);
}

const std::string 	WrongAnimal::getType(void) const
{
	return (type);
}
void					WrongAnimal::makeSound(void) const
{
	std::cout << ORANGE "WrongAnimal: *Non sense noises*\n" RESET;
}
