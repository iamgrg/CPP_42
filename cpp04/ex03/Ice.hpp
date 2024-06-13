/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:28:00 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 12:43:36 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();
    Ice(const Ice &other);
    
    Ice &operator=(const Ice &other);
    
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
