/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:40:34 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 10:10:36 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "AAnimal.hpp"

class Dog : public AAnimal {

	public : 
	Dog();
	~Dog();
	void makeSound() const;
};

#endif