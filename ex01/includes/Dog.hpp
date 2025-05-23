#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		void	makeSound(void) const;
		void	addIdea(const std::string &idea);
		void	showIdeas(void);
};

std::ostream &operator<<(std::ostream &out, const Dog &other);

#endif
