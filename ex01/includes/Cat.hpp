#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat(void);
		void	makeSound(void) const;
		void	addIdea(const std::string &idea);
		void	showIdeas(void);
};

std::ostream &operator<<(std::ostream &out, const Cat &other);

#endif