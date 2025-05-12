#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "AbsAnimal.hpp"

class Brain
{
	private:
		std::string		ideas[100];
		unsigned int	last_idea;
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();

		void				addIdea(const std::string &idea);
		const std::string	getIdea(unsigned int n) const;
		void				showIdeas(void);
};

std::ostream &operator<<(std::ostream &out, const Brain &other);

#endif
