/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:32:11 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 11:42:06 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int	main(void){
	std::vector<int>	v;
	std::list<int>		l;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	try{
		std::cout << *easyfind(v, 3) << std::endl;
		std::cout << *easyfind(l, 3) << std::endl;
		std::cout << *easyfind(v, 6) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << *easyfind(l, 6) << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}