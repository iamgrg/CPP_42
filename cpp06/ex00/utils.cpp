/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:04 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/08 13:28:05 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool convertStringToInt(const std::string& str, int& result) {
    std::istringstream iss(str);
    return !(iss >> result).fail();
}

bool convertStringToFloat(const std::string& str, float& result) {
    std::istringstream iss(str);
    return !(iss >> result).fail();
}

bool convertStringToDouble(const std::string& str, double& result) {
    std::istringstream iss(str);
    return !(iss >> result).fail();
}

bool is_int(const std::string& str)
{
    int i = 0;
    int nbr;
    
    if (str[0] == '-')
        i++;
    while(str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            return false;
        i++;
    }
    if (!convertStringToInt(str, nbr) || nbr < -2147483648 || nbr > 2147483647)
        return false;
    return true;
}

bool is_char(const std::string& str)
{
    if (str.size() != 1 || isdigit(str[0]))
        return false;
    return true;
}

bool is_float(const std::string& str)
{
    unsigned long i = 0;
    int point = 0;
    float nbr;
    
    if (str[0] == '-')
        i++;
    if (str[i] == '.' || str[str.size() - 2] == '.')
        return false;
    while(str[i] && i < str.size() - 1)
    {
        if (str[i] == '.')
            point++;
        else if (str[i] < 48 || str[i] > 57)
            return false;
        i++;
    }
    if (point != 1 || str[i] != 'f' || !convertStringToFloat(str, nbr)) 
		return false;
    if (nbr < -(std::numeric_limits<float>::max()) || nbr > std::numeric_limits<float>::max())
		return false;
    return true;
}

bool is_double(const std::string& str)
{
    int i = 0;
    int point = 0;
    double nbr = 0;
    
    if (str[0] == '-')
        i++;
    if (str[i] == '.' || str[str.size() - 1] == '.')
        return false;
    while(str[i])
    {
        if (str[i] == '.')
            point++;
        else if (str[i] < 48 || str[i] > 57)
            return false;
        i++;
    }
    if (!convertStringToDouble(str, nbr) || point != 1)
        return false;
    if (nbr < -(std::numeric_limits<double>::max()) || nbr > std::numeric_limits<double>::max())
        return false;
    return true;
}