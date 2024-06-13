/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:18:19 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 10:08:27 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class AAnimal {

	public : 
	AAnimal();
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	virtual std::string getType() const;
	

	protected :
    std::string _type;
};

#endif