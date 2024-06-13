/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:40:06 by gregoire          #+#    #+#             */
/*   Updated: 2023/10/24 14:10:55 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <cstring>
#include <stdexcept>

void printMap(const std::map<std::string, double>& m) {
    std::map<std::string, double>::const_iterator it;
    for (it = m.begin(); it != m.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./btc [file]" << std::endl;
		return (1);
	}
	try
	{
		BitcoinExchange Btc;
		std::map<std::string, double> data;
		std::ifstream file(av[1]);
		if (!file.is_open()) {
			throw std::runtime_error("Could not open file");
		}
		std::string line;
		bool isFirstLine = true;
		std::pair<std::string, double> formatedData;
		while (std::getline(file, line)) {
			if (isFirstLine) {
				isFirstLine = false;
				if(std::strcmp(line.c_str(), "date | value") == 0)
					continue;
				else
					throw std::runtime_error("Wrong Format file");
			}
			formatedData = Btc.readInput(line);
			Btc.printFormatedData(formatedData);
		}
		file.close();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}