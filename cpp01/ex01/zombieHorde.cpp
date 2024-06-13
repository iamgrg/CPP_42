/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:24:39 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 15:43:55 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if(N > 0)
	{
		Zombie* horde = new Zombie[N];
    	for (int i = 0; i < N; i++) {
			horde[i].setName(name);
			std::cout << i << ": ";
			horde[i].announce();
    	}
    	return horde;	
	}
	return NULL;
}
