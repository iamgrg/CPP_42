/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:33 by gansard           #+#    #+#             */
/*   Updated: 2023/07/26 19:55:15 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) { };
HumanA::~HumanA(void) { }

void HumanA::setWeapon(Weapon weapon){
	this->_weapon = weapon;
}

Weapon HumanA::getWeapon(void){
	return this->_weapon;
}

void HumanA::attack(void){
 std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}