#include "Cat.hpp"

#pragma region Constructors

Cat::Cat(void) : AbsAnimal()
{
	this->type = "Cat";
	std::cout << BRIGHT_GREEN << *this << ": constructor called\n" RESET;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : AbsAnimal()
{
	std::cout << BRIGHT_GREEN << "Cat: copy constructor called\n" RESET;
	this->brain = NULL;
	*this = other;
}
Cat& Cat::operator=(const Cat &other)
{
	std::cout << BRIGHT_GREEN << *this << ": assignment operator called\n" RESET;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}
Cat::~Cat(void)
{
	delete brain;
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
	std::cout << ORANGE << *this << ": *Miaaaaaaaaaaaauuuuuuu*\n" RESET;
}


void	Cat::addIdea(const std::string &idea)
{
	this->brain->addIdea(idea);
}
void	Cat::showIdeas(void)
{
	this->brain->showIdeas();
}

const std::string	Cat::getType(void) const
{
	return (type);
}