/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:39 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 17:16:17 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	//this->_weapon = NULL;
 };
HumanB::~HumanB(void) { }

void HumanB::setWeapon(Weapon& weapon){
	this->_weapon = &weapon;
}

Weapon HumanB::getWeapon(void){
	return *(this->_weapon);
}

void HumanB::attack(void){
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}