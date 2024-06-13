/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:05:07 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/03 10:25:59 by gansard          ###   ########.fr       */
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

void ScavTrap::guardGate() {
	std::cout << _name << " is now in Gate keeper mode." << std::endl;
}

