/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:18:12 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 10:41:17 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_dogBrain = new Brain();
	this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
};

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
};

void Dog::makeSound() const{
	std::cout << "Wouf !" << std::endl;
}