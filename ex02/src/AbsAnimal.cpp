#include "AbsAnimal.hpp"

#pragma region Constructors

AbsAnimal::AbsAnimal(void) : type("Animal")
{
	std::cout << BRIGHT_GREEN << "Animal: constructor called\n" RESET;
}
AbsAnimal::AbsAnimal(const AbsAnimal &other)
{
	std::cout << BRIGHT_GREEN << "Animal: copy constructor called\n" RESET;
	*this = other;
}
AbsAnimal&	AbsAnimal::operator=(const AbsAnimal &other)
{
	std::cout << BRIGHT_GREEN << "Animal: assingment operator called\n" RESET;
	if (this != &other)
		this->type = other.type;
	return (*this);
}
AbsAnimal::~AbsAnimal(void)
{
	std::cout << BRIGHT_RED << "Animal: destructor called\n" RESET;
}
std::ostream &operator<<(std::ostream &out, const AbsAnimal &other)
{
	out << other.getType();
	return (out);
}
#pragma endregion

