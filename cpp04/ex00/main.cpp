/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:42:32 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 09:53:05 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	const Wrong_Animal* k = new Wrong_Animal();
	const Wrong_Animal* l = new Wrong_Cat();

    std::cout << j->getType() << ": "; j->makeSound();
    std::cout << i->getType() << ": "; i->makeSound();
    std::cout << meta->getType() << ": "; meta->makeSound(); std::cout << std::endl;
    std::cout << k->getType() << ": "; k->makeSound(); std::cout << std::endl;
    std::cout << l->getType() << ": "; l->makeSound();

    delete meta;
    delete j;
    delete i;
	delete k;
	delete l;

    return 0;
}
