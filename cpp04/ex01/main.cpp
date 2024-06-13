/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:42:32 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/04 10:45:35 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

	Animal *animalTab[20];
	
	for(int i = 0; i < 4 ; i++)
	{
		if (i < 2)
			animalTab[i] = new Cat();
		else
			animalTab[i] = new Dog();
	}
	std::cout << std::endl << "----- Delete -----" << std::endl << std::endl;
	for(int i = 0; i < 4 ; i++)
		delete animalTab[i];

    return 0;
}
