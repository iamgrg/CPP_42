/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:42:32 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/04 11:11:46 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    //const AAnimal* meta = new AAnimal();
     const AAnimal* j = new Dog();
     const AAnimal* i = new Cat();
	 const Wrong_Animal* k = new Wrong_Animal();
	 const Wrong_Animal* l = new Wrong_Cat();

     std::cout << j->getType() << ": "; j->makeSound();
     std::cout << i->getType() << ": "; i->makeSound();
     // std::cout << meta->getType() << ": "; meta->makeSound(); std::cout << std::endl;
     std::cout << k->getType() << ": "; k->makeSound(); std::cout << std::endl;
     std::cout << l->getType() << ": "; l->makeSound();

     // delete meta;
     delete j;
     delete i;
	 delete k;
	 delete l;

    return 0;
}
