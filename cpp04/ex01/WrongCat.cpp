/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:18:32 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 10:42:57 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

Wrong_Cat::Wrong_Cat() {
	this->_type = "Wrong_Cat";
    std::cout << "Wrong_Cat constructor called" << std::endl;
};

Wrong_Cat::~Wrong_Cat() {
	std::cout << "Wrong_Cat destructor called" << std::endl;
};

void Wrong_Cat::makeSound() const {
	std::cout << "Wrong Miaaaouw" << std::endl;
}

