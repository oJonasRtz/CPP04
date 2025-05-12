#ifndef DOG_HPP
#define DOG_HPP

#include "AbsAnimal.hpp"
#include "Brain.hpp"

class Dog : public AbsAnimal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		const std::string	getType(void) const;
		void	makeSound(void) const;
		void	addIdea(const std::string &idea);
		void	showIdeas(void);
};

std::ostream &operator<<(std::ostream &out, const Dog &other);

#endif
