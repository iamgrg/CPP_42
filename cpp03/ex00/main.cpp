/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:11:28 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/17 12:21:51 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    // Créer une instance de ClapTrap
    ClapTrap claptrap1("Clappy");

    // Attaquer une cible fictive
    claptrap1.attack("TargetDummy"); // Clappy a 0 points de dégât, donc l'attaque ne devrait pas faire grand-chose

    // Démontrer la fonctionnalité de prendre des dégâts
    claptrap1.takeDamage(3); // Clappy devrait perdre 3 points de vie

    // Démontrer la fonctionnalité de réparation
    claptrap1.beRepaired(2); // Clappy devrait récupérer 2 points de vie

    // Démontrer que les points d'énergie sont consommés
    for (int i = 0; i < 12; i++)
    {
        claptrap1.attack("TargetDummy"); // Clappy devrait manquer d'énergie à un moment donné
    }

    // Démontrer la réparation lorsque l'énergie est épuisée
    claptrap1.beRepaired(2); // Clappy devrait ne pas être en mesure de réparer à cause du manque d'énergie

    return 0;
}

