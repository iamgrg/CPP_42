/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:02:50 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/07 14:51:42 by gansard          ###   ########.fr       */
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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void printTestHeader(const std::string &testName) {
    std::cout << std::endl << "========== " << testName << " ==========" << std::endl << std::endl;
}

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
		srand(time(NULL));
        printTestHeader("Testing Bureaucrats");
        Bureaucrat b1("Alice", 10);
        Bureaucrat b2("Bob", 50);
        Bureaucrat b3("Charlie", 150);
        
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        printTestHeader("Testing ShrubberyCreationForm");

        AForm* shrubbery = new ShrubberyCreationForm("Garden");
        std::cout << *shrubbery << std::endl;
        
        b1.signForm(*shrubbery);
        b1.executeForm(*shrubbery);

        printTestHeader("Testing RobotomyRequestForm");

        AForm* robotomy = new RobotomyRequestForm("Robot");
        std::cout << *robotomy << std::endl;

        b2.signForm(*robotomy);
        b2.executeForm(*robotomy);

        printTestHeader("Testing PresidentialPardonForm");

        AForm* pardon = new PresidentialPardonForm("Prisoner");
        std::cout << *pardon << std::endl;

        try {
            b3.signForm(*pardon);  // Should throw an exception
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        b1.signForm(*pardon);  // Should work
        b1.executeForm(*pardon);

        delete shrubbery;
        delete robotomy;
        delete pardon;
    }
    catch (std::exception& e) {
        std::cout << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}



