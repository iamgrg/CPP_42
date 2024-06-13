/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:02:50 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/05 18:07:32 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void printTestHeader(const std::string &testName) {
    std::cout << std::endl << "========== " << testName << " ==========" << std::endl << std::endl;
}

int main(void) {
    // Test: Construction normale d'un formulaire
    printTestHeader("Test: Construction normale d'un formulaire");
    try {
        Form form("A01", 20, 5);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) { 
        std::cout << "Exception attrapée: " << e.what() << std::endl;
    }

    // Test: Construction avec un grade trop bas pour signer
    printTestHeader("Test: Construction avec un grade trop bas pour signer");
    try {
        Form form("A02", 0, 5);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée: " << e.what() << std::endl;
    }

    // Test: Bureaucrate signe le formulaire
    printTestHeader("Test: Bureaucrate signe le formulaire");
    try {
        Bureaucrat bureaucrat("Alice", 10);
        Form form("A03", 20, 5);
        form.beSigned(bureaucrat);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée: " << e.what() << std::endl;
    }
    
    // Test: Bureaucrate n'arrive pas à signer le formulaire
    printTestHeader("Test: Bureaucrate n'arrive pas à signer le formulaire");
    try {
        Bureaucrat bureaucrat("Bob", 50);
        Form form("A04", 20, 5);
        form.beSigned(bureaucrat);
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Exception attrapée: " << e.what() << std::endl;
    }

    return 0;
}


