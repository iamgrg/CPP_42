/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:02:50 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/05 12:09:26 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void printTestHeader(const std::string &testName) {
    std::cout << std::endl << "========== " << testName << " ==========" << std::endl << std::endl;
}

int main(void)
{
    // Test du cas nominal
    printTestHeader("Test Nominal");
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("Alice", 75);
        std::cout << *bureaucrat << std::endl;
        delete bureaucrat;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    // Test avec un grade trop bas
    printTestHeader("Test Grade Trop Bas");
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("Bob", 200);
        std::cout << *bureaucrat << std::endl;
        delete bureaucrat;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    // Test avec un grade trop haut
    printTestHeader("Test Grade Trop Haut");
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("Charlie", 0);
        std::cout << *bureaucrat << std::endl;
        delete bureaucrat;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    // Test d'incrémentation de grade au-delà de la limite
    printTestHeader("Test Incrémentation au-delà de la limite");
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("David", 1);
        std::cout << "Grade initial : " << *bureaucrat << std::endl;
        bureaucrat->incrementGrade();
        std::cout << "Test réussi : Grade après incrémentation : " << *bureaucrat << std::endl;
        delete bureaucrat;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    // Test de décrémentation de grade au-delà de la limite
    printTestHeader("Test Décrémentation au-delà de la limite");
    try {
        Bureaucrat *bureaucrat = new Bureaucrat("Emily", 150);
        std::cout << "Grade initial : " << *bureaucrat << std::endl;
        bureaucrat->decrementGrade();
        std::cout << "Test réussi : Grade après décrémentation : " << *bureaucrat << std::endl;
        delete bureaucrat;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée : " << e.what() << std::endl;
    }

    return 0;
}

