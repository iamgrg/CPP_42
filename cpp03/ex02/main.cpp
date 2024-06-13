/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:11:28 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/03 11:13:37 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    std::cout << "---- Creating ScavTrap ----" << std::endl;
    ScavTrap scavtrap1("Scavvy");
    std::cout << "---------------------------" << std::endl << std::endl;

    std::cout << "---- Creating FragTrap ----" << std::endl;
    FragTrap fragtrap1("Fraggy");
    fragtrap1.highFivesGuys();  // Demonstrate FragTrap's special ability
    std::cout << "---------------------------" << std::endl;

    return 0;
}



