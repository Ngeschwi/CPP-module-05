#include "Bureaucrat.hpp"

int	 main()
{
	Bureaucrat* bob = new Bureaucrat("Bob", 200);
	Bureaucrat* jean = new Bureaucrat("Jean", 1);
	Bureaucrat* kevin = new Bureaucrat("Kevin", 150);

	std::cout << "---" << std::endl;
	
	bob->getInfoBureaucrat();
	jean->getInfoBureaucrat();
	kevin->getInfoBureaucrat();

	std::cout << "---" << std::endl;
	
	bob->increaseGrade();
	jean->increaseGrade();
	kevin->decreaseGrade();

	std::cout << "---" << std::endl;
	
	bob->getInfoBureaucrat();
	jean->getInfoBureaucrat();
	kevin->getInfoBureaucrat();
	
	std::cout << "---" << std::endl;
	
	delete bob;
	delete jean;
	delete kevin;
}