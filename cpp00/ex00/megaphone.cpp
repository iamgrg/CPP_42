/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:29:27 by gansard           #+#    #+#             */
/*   Updated: 2023/07/21 11:58:03 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if(ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string str;
		for( int i = 1; i < ac; i++)
  		{
			str = av[i];
			for(long unsigned int j = 0; j < str.size(); j++)
       		std::cout << (char)std::toupper(str[j]);
   		}
		std::cout << std::endl;
	}
	return (0);
}