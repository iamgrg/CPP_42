/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:18:19 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 09:30:24 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

	public : 
	Animal();
	virtual ~Animal();
	virtual void makeSound() const;
	virtual std::string getType() const;
	

	protected :
    std::string _type;
};

#endif