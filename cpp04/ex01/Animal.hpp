/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:18:19 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/04 10:53:37 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

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