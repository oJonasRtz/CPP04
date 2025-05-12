#include "Animal.hpp"

#pragma region Constructors

Animal::Animal(void) : type("Animal")
{
	std::cout << BRIGHT_GREEN << "Animal: constructor called\n" RESET;
}
Animal::Animal(const Animal &other)
{
	std::cout << BRIGHT_GREEN << "Animal: copy constructor called\n" RESET;
	*this = other;
}
Animal&	Animal::operator=(const Animal &other)
{
	std::cout << BRIGHT_GREEN << "Animal: assingment operator called\n" RESET;
	if (this != &other)
		this->type = other.type;
	return (*this);
}
Animal::~Animal(void)
{
	std::cout << BRIGHT_RED << "Animal: destructor called\n" RESET;
}
std::ostream &operator<<(std::ostream &out, const Animal &other)
{
	out << other.getType();
	return (out);
}
#pragma endregion

const std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << ORANGE << "Animal: *weird animal noises*\n" RESET;
}
