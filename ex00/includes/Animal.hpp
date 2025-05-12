#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

# define BRIGHT_RED "\033[1;31m"
# define BRIGHT_BLUE "\033[1;34m"
# define ORANGE "\033[38;5;208m"
# define BRIGHT_GREEN "\033[1;32m"
# define RESET "\033[0m"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal &other);
		Animal	&operator=(const Animal &other);
		virtual ~Animal(void);

		//	Getters
		virtual const std::string	getType(void) const;

		//	methods	
		virtual void	makeSound(void) const;
};

std::ostream &operator<<(std::ostream &out, const Animal &other);

#endif