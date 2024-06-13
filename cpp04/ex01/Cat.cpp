/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:18:21 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 10:40:46 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	this->_catBrain = new Brain();
	this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
};

Cat::~Cat() { 
	delete this->_catBrain;
    std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound() const {
	std::cout << "Miaaaouw" << std::endl;
}

