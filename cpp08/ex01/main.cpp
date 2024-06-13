/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:48:30 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 17:46:40 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main()
{
	srand(time(NULL));
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "shortest Span of sp : " << sp.shortestSpan() << std::endl;
		std::cout << "longest Span of sp : "<< sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp2 = Span(10000);
	std::vector<int> randomNumbers;

    // Remplir le vecteur avec 10 000 nombres aléatoires
    for (int i = 0; i < 10000; ++i) {
        randomNumbers.push_back(std::rand() % 10000);
    }
	try
	{
		sp2.addNumber(randomNumbers.begin(), randomNumbers.end());
		std::cout << "shortest Span of sp2 : " << sp2.shortestSpan() << std::endl;
		std::cout << "longest Span of sp2 : " << sp2.longestSpan() << std::endl;
		sp2.addNumber(42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp2.addNumber(randomNumbers.begin(), randomNumbers.end());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}