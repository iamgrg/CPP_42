/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:05:07 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/03 11:13:54 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Unit [" << _name << "] has been activated by ScavTrap constructor." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Unit [" << _name << "] has been deactivated by ScavTrap destructor." << std::endl;
};

void ScavTrap::highFivesGuys() {
	std::cout << _name << " asked for a highFive !" << std::endl;
}

