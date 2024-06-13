/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:32:33 by gregoire          #+#    #+#             */
/*   Updated: 2023/10/24 14:51:44 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){
	this->_btcData = this->readCSV("data.csv");
};
BitcoinExchange::~BitcoinExchange(){ };

double BitcoinExchange::_getExchangeRate(const std::string& date){
	std::pair<std::string, double> pDate = BitcoinExchange::getClosestPreviousDate(date, this->_btcData);
	return pDate.second;
}
double BitcoinExchange::convertToCurrency(double btcAmount, const std::string& date){
	double rate = this->_getExchangeRate(date);
	return btcAmount * rate;
}

void BitcoinExchange::printFormatedData(const std::pair<std::string, double>& data){
	if (data.second == -1)
		std::cout << "Error: bad input => " << data.first << std::endl;
	else if (data.second == -2)
		std::cout << "mauvaise date" << std::endl;
	else if (data.second == -3)
		std::cout << "Error: not a positive number." << std::endl;
	else if (data.second == -4)
		std::cout << "Error: too large a number." << std::endl;
	else if (data.second == -5)
		std::cout << "Error: empty line." << std::endl;
	else {
		double value = this->convertToCurrency(data.second, data.first);
		std::cout << data.first << " => " << value << std::endl;
	}
}
//////////// DateHandler.cpp //////////////

bool BitcoinExchange::_isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

bool BitcoinExchange::isValidDate(const std::string& date) {
    if (date.size() != 11 || date[4] != '-' || date[7] != '-' || date[10] != ' ') {
        return false;
    }
    if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]) ||
        !isdigit(date[5]) || !isdigit(date[6]) || !isdigit(date[8]) || !isdigit(date[9])) {
        return false;
    }
    std::stringstream ss(date.substr(0, 4));
    int year;
    ss >> year;

    ss.clear();
    ss.str(date.substr(5, 2));
    int month;
    ss >> month;

    ss.clear();
    ss.str(date.substr(8, 2));
    int day;
    ss >> day;

    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1) {
        return false;
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    }
    if (month == 2) {
        if (_isLeapYear(year) && day > 29) {
            return false;
        } else if (!_isLeapYear(year) && day > 28) {
            return false;
        }
    } else if (day > 31) {
        return false;
    }
    return true;
}

std::pair<std::string, double> BitcoinExchange::getClosestPreviousDate(const std::string& date, const std::map<std::string, double>& data) {
	std::map<std::string, double>::const_iterator it = data.lower_bound(date);
    if (it == data.begin())
        return *it; 
    --it;
    return *it;
}

//////////// FileReader.cpp //////////////

std::map<std::string, double> BitcoinExchange::readCSV(const std::string& filepath) {
    std::map<std::string, double> data;
    std::ifstream file(filepath.c_str());

    if (!file.is_open()) {
        throw std::runtime_error("Error : Could not open file");
    }
	std::cout << file << std::endl;
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss;
		ss.str(line);
        std::string key;
        double value;

        if (std::getline(ss, key, ',')) {
            ss >> value;
            data[key] = value;
        }
    }
    file.close();
    return data;
}

std::pair<std::string, double> BitcoinExchange::readInput(const std::string &line) {

	std::pair<std::string, double> formatedData;
    std::stringstream ss(line);
    std::string key;
    double value;

    if (std::getline(ss, key, '|')) {
        if (!(ss >> value)) { // mauvais format = -1
            formatedData.first = key;
            formatedData.second = -1;
        }
        else if (!(BitcoinExchange::isValidDate(key))) { // date non valide = -2
			formatedData.first = "error";
            formatedData.second = -2;
        }
        else if (value < 0) { // trop petit = -3
			formatedData.first = "error";
            formatedData.second = -3;
        }
		else if(value > 1000) // trop grand = -4
		{
			formatedData.first = "error";
			formatedData.second = -4;
		}
        else { // valeur valide
            formatedData.first = key;
            formatedData.second = value;
		}
    }
    else
    {
        formatedData.first = "error";
        formatedData.second = -5;
    } 
    return formatedData;
}