/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:06:23 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/04 14:23:55 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACHTER_HPP
#define ICHARACHTER_HPP

#include <iostream>

class AMateria;  // Déclaration anticipée

class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
#endif