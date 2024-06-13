/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:32:24 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 10:10:39 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "AAnimal.hpp"

class Cat : public AAnimal {

	public : 
	Cat();
	~Cat();
	void makeSound() const;
};

#endif