/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:29:13 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 15:24:31 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &other) : _type(other._type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

void AMateria::use(ICharacter& target){
	(void) target;
}

std::string const & AMateria::getType() const {
    return this->_type;
}


