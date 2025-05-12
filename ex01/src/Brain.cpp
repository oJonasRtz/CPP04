#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BRIGHT_GREEN "Brain: constructor called\n" RESET;
}
Brain::Brain(const Brain &other)
{
	std::cout << BRIGHT_GREEN "Brain: copy constructor\n" RESET;
	*this = other;
}
Brain& Brain::operator=(const Brain &other)
{
	std::cout << BRIGHT_GREEN "Brain: assingment constructor\n" RESET;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas [i];
	return (*this);
}
Brain::~Brain()
{
	std::cout << BRIGHT_RED "Brain: destructor called\n" RESET;
}
std::ostream &operator<<(std::ostream &out, const Brain &other)
{
	(void)other;
	out << "Brain";
	return (out);
}