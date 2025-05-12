#ifndef ABSANIMAL_HPP
#define ABSANIMAL_HPP

#include <iostream>

# define BRIGHT_RED "\033[1;31m"
# define BRIGHT_BLUE "\033[1;34m"
# define ORANGE "\033[38;5;208m"
# define BRIGHT_GREEN "\033[1;32m"
# define RESET "\033[0m"

class AbsAnimal
{
	protected:
		std::string	type;
	public:
		AbsAnimal(void);
		AbsAnimal(const AbsAnimal &other);
		AbsAnimal	&operator=(const AbsAnimal &other);
		virtual ~AbsAnimal(void);

		//	Getters
		virtual const std::string	getType(void) const = 0;

		//	methods	
		virtual void	makeSound(void) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AbsAnimal &other);

#endif