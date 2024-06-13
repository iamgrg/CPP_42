/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:24:46 by gansard           #+#    #+#             */
/*   Updated: 2023/07/25 18:21:46 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unknown") { } // Constructeur par défaut initialise le nom à "Inconnu"

Zombie::Zombie(std::string name) : _name(name) { }

void Zombie::setName(std::string name) {
    this->_name = name;
}

Zombie::~Zombie(void) {
	std::cout << "\"" << this->_name << "\" is dead." << std::endl;
}

void Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}