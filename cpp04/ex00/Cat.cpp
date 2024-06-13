/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:18:21 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 10:54:47 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
};

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound() const {
	std::cout << "Miaaaouw" << std::endl;
}

