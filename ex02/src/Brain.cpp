#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << BRIGHT_GREEN "Brain: constructor called\n" RESET;
	last_idea = 0;
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

void	Brain::addIdea(const std::string &idea)
{
	if (last_idea >= 100)
		std::cout << "Brain: your brain is full of ideas\n";
	this->ideas[last_idea] = idea;
	last_idea++;
}

const std::string	Brain::getIdea(unsigned int n) const
{
	return (this->ideas[n]);
}
void				Brain::showIdeas(void)
{
	for (unsigned int i = 0; i < last_idea; i++)
		std::cout << ORANGE "Idea " << i << ": " RESET << this->ideas[i] << std::endl;

}