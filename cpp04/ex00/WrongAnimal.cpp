/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:18:28 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 10:55:24 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

Wrong_Animal::Wrong_Animal() : _type("Wrong_Animal") {
	std::cout << "Wrong_Animal constructor called" << std::endl;
};

Wrong_Animal::~Wrong_Animal() {
	std::cout << "Wrong_Animal destructor called" << std::endl;
};

void Wrong_Animal::makeSound() const{

}

std::string Wrong_Animal::getType() const{
	return  this->_type;
}