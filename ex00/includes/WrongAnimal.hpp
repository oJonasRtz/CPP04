#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
		
		virtual const std::string 	getType(void) const;
		void						makeSound(void) const;
};

std::ostream &operator<<(std::ostream &out, const WrongAnimal &other);

#endif