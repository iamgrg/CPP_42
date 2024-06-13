/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:18:16 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 10:54:36 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
};

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
};

void Animal::makeSound() const{

}

std::string Animal::getType() const{
	return  this->_type;
}