#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class Bureaucrat
{
	private:
		std::string	name;
		int			grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		trySetGrade(int grade);
		void		increaseGrade(void);
		void		decreaseGrade(void);

		void		getInfoBureaucrat(void) const;
		
		~Bureaucrat(void);
};

#endif