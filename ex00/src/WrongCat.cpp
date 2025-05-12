#include "WrongCat.hpp"

#pragma region Constructors 

WrongCat::WrongCat(void) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << BRIGHT_GREEN "WrongCat: constructor called\n" RESET;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << BRIGHT_GREEN "WrongCat: copy constructor\n" RESET;
	*this = other;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << BRIGHT_GREEN "WrongCat: assingment operator\n" RESET;
	if (this != &other)
		this->type = other.type;
	return (*this);
}
WrongCat::~WrongCat(void)
{
	std::cout << BRIGHT_RED "WrongCat: destructor called\n" RESET;
}
std::ostream &operator<<(std::ostream &out, const WrongCat &other)
{
	out << other.getType();
	return (out);
}

void	WrongCat::makeSound(void) const
{
	std::cout << ORANGE "WrongCat: *Miaaaaaaaau*\n" RESET;
}

#pragma endregion
