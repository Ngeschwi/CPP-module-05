#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Constructor Bureaucrat call" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat call" << std::endl;
	return ;
}
