/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:27:37 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 12:47:52 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
public:
    Cure();
    virtual ~Cure();
    Cure(const Cure &other);
    
    Cure &operator=(const Cure &other);
    
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
