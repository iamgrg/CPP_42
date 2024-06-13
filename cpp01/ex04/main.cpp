/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:43:15 by gansard           #+#    #+#             */
/*   Updated: 2023/08/09 11:47:57 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string getFile(std::ifstream& file){
    std::string res, line;
    while (getline(file, line)) {
        res += line + '\n';
    }
    return res;
}

std::string replace(const std::string& input, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0, lastPos = 0;

    while ((pos = input.find(s1, lastPos)) != std::string::npos) {
        result += input.substr(lastPos, pos - lastPos);
        result += s2;
        lastPos = pos + s1.length();
    }
    result += input.substr(lastPos); 
    return result;
}

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Invaid numbers of args" << std::endl;
		return 1;
	}
	std::ifstream ifs(av[1]);
	if (ifs.is_open()) {
		std::string input = getFile(ifs);
		std::string fileName = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string output = replace(input, s1, s2);
		std::ofstream outFile((fileName + ".output").c_str());
		if (outFile.is_open()) {
			outFile << output;
			outFile.close();
		} 
		else {
			std::cerr << "Erreur lors de l'ouverture du fichier input en écriture." << std::endl;
			return 2;
		}
		ifs.close();
	}
	else {
		std::cerr << "Erreur lors de l'ouverture du fichier output en écriture." << std::endl;
		return 3;
	}
	return (0);
}
