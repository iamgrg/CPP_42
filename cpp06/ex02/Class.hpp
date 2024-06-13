/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:59:50 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/06 19:00:29 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class Base
{
    public:
        virtual ~Base(){};
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif