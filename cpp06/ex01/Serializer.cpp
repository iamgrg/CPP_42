/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:56:28 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/06 18:56:50 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){}

Serializer::Serializer(Serializer const & src)
{
    *this = src;
}

Serializer::~Serializer(void){}

Serializer &    Serializer::operator=(Serializer const & rhs)
{
    (void)rhs;
    return (*this);
}

uintptr_t       Serializer::serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data*           Serializer::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}