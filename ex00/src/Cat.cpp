#include "Cat.hpp"

#pragma region Constructors

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	std::cout << BRIGHT_GREEN << *this << ": constructor called\n" RESET;
}
Cat::Cat(const Cat &other): Animal()
{
	std::cout << BRIGHT_GREEN << *this << ": copy constructor called\n" RESET;
	*this = other;
}
Cat& Cat::operator=(const Cat &other)
{
	std::cout << BRIGHT_GREEN << *this << ": assignment operator called\n" RESET;
	if (this != &other)
		this->type = other.type;
	return (*this);
}
Cat::~Cat(void)
{
	std::cout << BRIGHT_RED << *this << ": destructor called\n" RESET;
}

std::ostream &operator<<(std::ostream &out, const Cat &other)
{
	out << other.getType();
	return (out);
}

#pragma endregion

void	Cat::makeSound(void) const
{
	std::cout << ORANGE << *this << ": *confused cat noises*\n" RESET;
}
