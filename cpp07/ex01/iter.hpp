/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:11:20 by gansard           #+#    #+#             */
/*   Updated: 2023/09/08 15:56:08 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void    print(const T& elt)
{
    std::cout << elt << std::endl;    
}

template <typename T>
void iter(T* tab, size_t size, void (*func)(const T& elt))
{
    for (size_t i = 0; i < size; i++)
        func(tab[i]);
}

#endif