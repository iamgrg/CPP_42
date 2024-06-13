/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:52:48 by gansard           #+#    #+#             */
/*   Updated: 2023/08/09 12:10:16 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	this->complaintFuncs[0] = &Harl::debug;
    this->complaintFuncs[1] = &Harl::info;
    this->complaintFuncs[2] = &Harl::warning;
    this->complaintFuncs[3] = &Harl::error;
};
Harl::~Harl(void) { };

void Harl::debug(void) { 
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
};

void Harl::info(void) { 
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
};

void Harl::warning(void) { 
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void Harl::error(void) { 
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level){
	int i;
	std::string complains[4];
	complains[0] = "DEBUG";
	complains[1] = "INFO";
	complains[2] = "WARNING";
	complains[3] = "ERROR";
	for(i = 0; complains[i] != level && i < 4; i++)
		;
	if (i < 4)
		(this->*complaintFuncs[i])();
	else
		std::cout << "Invalid level" << std::endl;
}

