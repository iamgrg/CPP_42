/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:08:53 by gansard           #+#    #+#             */
/*   Updated: 2023/09/04 15:08:55 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        source[i] = 0;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
    {
        delete source[i];
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!source[i])
        {
            source[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (source[i] && source[i]->getType() == type)
        {
            return source[i]->clone();
        }
    }
    return 0;
}
