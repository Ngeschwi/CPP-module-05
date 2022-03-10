#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Constructor Bureaucrat call" << std::endl;
	trySetGrade(grade);
	if (grade > 150 || grade < 1)
	{
		std::cout << "Error grade => 0" << std::endl;
		this->grade = 0;
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->grade = rhs.getGrade();
	}
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void	Bureaucrat::trySetGrade(int grade)
{
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "The grade is too high";
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "The grade is too low";
			}
	};

	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->grade = grade;
	}
	catch (GradeTooHighException& e)
	{
		std::cout << "The grade of the bureaucrat " << this->name << ",is too high" << std::endl;
	}
	catch (GradeTooLowException& e)
	{
		std::cout << "The grade of the bureaucrat " << this->name << ",is too low" << std::endl;
	}
}

void	Bureaucrat::increaseGrade(void)
{
	trySetGrade(this->grade - 1);
	return ;
}

void	Bureaucrat::decreaseGrade(void)
{
	trySetGrade(this->grade + 1);
	return ;
}

void	Bureaucrat::getInfoBureaucrat(void) const
{
	std::cout << this->name << ", Bureaucrat garde " << this->grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat call" << std::endl;
	return ;
}
