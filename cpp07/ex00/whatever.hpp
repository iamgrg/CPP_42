/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:56:47 by gansard           #+#    #+#             */
/*   Updated: 2023/09/08 15:56:49 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T& v1, T& v2)
{
    T tmp = v1;

    v1 = v2;
    v2 = tmp;
}

template <typename T>
const T& min(const T& v1, const T& v2)
{
    return (v1 < v2 ? v1 : v2);
}

template <typename T>
const T& max(const T& v1, const T& v2)
{
    return (v1 > v2 ? v1 : v2);
}

#endif