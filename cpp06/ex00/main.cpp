/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:47:17 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/06 18:47:25 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void inf(const std::string& str)
{
    if (str == "-inff" || str == "+inff" || str == "+inf" || str == "-inf" || str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << str << (str == "+inff" || str == "-inff" || str == "nanf" ? "" : "f") << std::endl;
        std::cout << "double: " << (str == "nanf" ? "nan" : str) << std::endl;
        exit(0);
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong input" << std::endl;
        return 1;
    }
    inf(argv[1]);
    ScalarConverter::convert(argv[1]);
}