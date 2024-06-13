/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:45:28 by gansard           #+#    #+#             */
/*   Updated: 2023/09/06 12:27:14 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
    : AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this == &other)
        return *this;

    AForm::operator=(other);
    return *this;
}

void RobotomyRequestForm::action() const {

    std::cout << "Drilling noises" << std::endl;

    if (rand() % 2) {
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    } 
	else {
        std::cout << "Failed to robotomize " << this->getTarget() << "." << std::endl;
    }
}
