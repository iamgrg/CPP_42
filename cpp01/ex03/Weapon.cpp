/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:15:51 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 16:33:04 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { };
//Weapon::Weapon() { };
Weapon::~Weapon(void) { }

void Weapon::setType(std::string type){
	this->_type = type;
}

std::string Weapon::getType(void){
	return this->_type;
}