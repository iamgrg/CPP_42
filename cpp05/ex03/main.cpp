/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:02:50 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/07 14:54:52 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define MAGENTA "\033[35m"
#define GREY    "\033[90m"
#define BOLD    "\033[1m"
#define UNDERLINE   "\033[4m"

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		srand(time(NULL));
		Intern someRandomIntern;
		Bureaucrat Boss("Boss", 1);
		AForm* rrf;
		AForm* ppf;
		AForm* scf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "Prisoner");
		scf = someRandomIntern.makeForm("shrubbery creation", "Tree");
		
		Boss.signForm(*rrf);
		Boss.signForm(*ppf);
		Boss.signForm(*scf);
		Boss.executeForm(*scf);
		Boss.executeForm(*ppf);
		Boss.executeForm(*rrf);
		
		delete rrf;
		delete ppf;
		delete scf;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// try {
	// 	Intern someRandomIntern;
	// 	AForm* rrf;
	// 	rrf = someRandomIntern.makeForm("inexistant form", "Bender");	
	// }
	// catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
}



