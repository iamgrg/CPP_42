/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:56:29 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/06 18:56:38 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data
{
    std::string s1;
    std::string s2;
    int n;
};

class Serializer
{
    public:
        Serializer(void);
        Serializer(Serializer const & src);
        ~Serializer(void);

        Serializer &    operator=(Serializer const & rhs);

        uintptr_t          serialize(Data *ptr);
        Data*          deserialize(uintptr_t raw);
};

#endif