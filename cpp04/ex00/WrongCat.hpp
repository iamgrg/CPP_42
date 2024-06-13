/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:32:24 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/21 09:51:04 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class Wrong_Cat : public Wrong_Animal {

	public : 
	Wrong_Cat();
	~Wrong_Cat();
	void makeSound() const;
};

#endif