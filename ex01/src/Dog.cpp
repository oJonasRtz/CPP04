#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	std::cout << BRIGHT_GREEN << *this << ": constructor called\n" << RESET;
	this->brain = new Brain();
}
Dog::Dog(const Dog &other): Animal()
{
	std::cout << BRIGHT_GREEN << "Dog: copy constructor\n" RESET;
	this->brain = NULL;
	*this = other;
}
Dog& Dog::operator=(const Dog &other)
{
	std::cout << BRIGHT_GREEN << *this << ": assignment operator\n" RESET;
	if (this != &other)
	{
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
		type = other.type;
	}
	return (*this);
}
Dog::~Dog()
{
	delete brain;
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
