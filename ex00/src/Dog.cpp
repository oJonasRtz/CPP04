#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	std::cout << BRIGHT_GREEN << *this << ": constructor called\n" << RESET;
}
Dog::Dog(const Dog &other): Animal()
{
	std::cout << BRIGHT_GREEN << *this << ": copy constructor\n" RESET;
	*this = other;
}
Dog& Dog::operator=(const Dog &other)
{
	std::cout << BRIGHT_GREEN << *this << ": assignment operator\n" RESET;
	if (this != &other)
		type = other.type;
	return (*this);
}
Dog::~Dog()
{
	std::cout << BRIGHT_RED << *this << ": destructor called\n" RESET;
}

std::ostream &operator<<(std::ostream &out, const Dog &other)
{
	out << other.getType();
	return (out);
}

void	Dog::makeSound(void) const
{
	std::cout << ORANGE << *this << ": *AAAAAAAuuuuuuuuuuuuuu*\n" RESET;
}
