/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:09:33 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 14:09:42 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

// Constructeur
Character::Character(std::string const & name) : name(name) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = 0;
    }
}

// Constructeur par copie
Character::Character(Character const & other) : name(other.name) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : 0;
    }
}

// Destructeur
Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i]) {
            delete inventory[i];
        }
    }
}

// Opérateur d'affectation
Character & Character::operator=(Character const & other) {
    if (this != &other) {
        name = other.name;

        for (int i = 0; i < 4; ++i) {
            if (inventory[i]) {
                delete inventory[i];
            }
            inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : 0;
        }
    }

    return *this;
}

// Implémentation de getName
std::string const & Character::getName() const {
    return name;
}

// Implémentation de equip
void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            return;
        }
    }
}

// Implémentation de unequip
void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4 || !inventory[idx]) {
        return;
    }
    inventory[idx] = 0;
}

// Implémentation de use
void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4 || !inventory[idx]) {
        return;
    }
    inventory[idx]->use(target);
}
