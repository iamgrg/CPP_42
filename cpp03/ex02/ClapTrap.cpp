/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:11:38 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/03 11:12:03 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// Constructor
ClapTrap::ClapTrap(std::string name) : 
	_name(name), 
	_hitPoints(100), 
	_energyPoints(30), 
	_attackDamage(20)
{
	std::cout << "Unit [" << _name << "] has been activated." << std::endl;
};

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Unit [" << _name << "] has been deactivated." << std::endl;
};

// Attack method
void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << _name << " has insufficient energy to launch an attack!" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << ", dealing "
			  << _attackDamage << " damage points!" << std::endl;
	_energyPoints--;
}

// Repair method
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
	{
		std::cout << _name << " has insufficient energy to perform repairs!" << std::endl;
		return;
	}
	_hitPoints += amount;
	_energyPoints--; // Reducing energy by 1 for repair action
	std::cout << _name << " is undergoing repairs." << std::endl;
	std::cout << "Health Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
}

// Take damage method
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ouch! " << _name << " has taken damage!" << std::endl;
	if(_hitPoints < amount) {
		_hitPoints = 0;
		std::cout << _name << " is critically damaged!" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << "Remaining Health Points: " << _hitPoints << std::endl;
	}
};
