/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:47:30 by gansard           #+#    #+#             */
/*   Updated: 2023/08/09 12:32:51 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int    level(std::string str)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == str)
            return (i);
        i++;
    }
    return (-1);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }

    Harl harl;
    
    switch(level(av[1])) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break ;
        default:
            std::cout << "Invalid level" << std::endl;
    }
    return (0);
}

//#include "Harl.hpp"

//int index(std::string msg){
//	if(msg == "DEBUG")
//		return (0);
//	else if(msg == "INFO")
//		return (1);
//	else if(msg == "WARNING")
//		return (2);
//	else if(msg == "ERROR")
//		return (3);
//	return (-1);
//}

//int main(int ac, char **av)
//{
//	Harl harl;
//	(void) ac;
//	switch (index(av[1])) {
//		case 0 :
//			harl.complain("DEBUG");
//		case 1 :
//			harl.complain("INFO");
//		case 2 :
//			harl.complain("WARNING");
//		case 3 :
//			harl.complain("ERROR");
//			break ;
//		default :
//			std::cout << std::endl << "Invalid level" << std::endl << std::endl;		
//}

	
	//std::cout << std::endl << "===== DEBUG ====" << std::endl << std::endl;
	//harl.complain("DEBUG");
	//std::cout << std::endl << "===== INFO ====" << std::endl << std::endl;
	//harl.complain("INFO");
	//std::cout << std::endl << "===== WARNING ====" << std::endl << std::endl;
	//harl.complain("WARNING");
	//std::cout << std::endl << "===== ERROR ====" << std::endl << std::endl;
	//harl.complain("ERROR");
//}
