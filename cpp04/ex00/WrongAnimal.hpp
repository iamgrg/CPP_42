/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:18:19 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 09:43:25 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class Wrong_Animal {

	public : 
	Wrong_Animal();
	virtual ~Wrong_Animal();
	virtual void makeSound() const;
	virtual std::string getType() const;
	

	protected :
    std::string _type;
};

#endif