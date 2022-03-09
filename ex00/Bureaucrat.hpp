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
	public:
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);

		Bureaucrat &	operator=(Bureaucrat const & rhs);
		
		~Bureaucrat(void);
}

#endif