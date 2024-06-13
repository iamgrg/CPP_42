/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:47:30 by gansard           #+#    #+#             */
/*   Updated: 2023/07/27 14:49:29 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << std::endl << "===== DEBUG ====" << std::endl << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "===== INFO ====" << std::endl << std::endl;
	harl.complain("INFO");
	std::cout << std::endl << "===== WARNING ====" << std::endl << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "===== ERROR ====" << std::endl << std::endl;
	harl.complain("ERROR");
}
