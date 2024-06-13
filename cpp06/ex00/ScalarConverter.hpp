/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:37:06 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/08 11:29:24 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
#include <stdexcept>
#include <float.h>
#include <limits>
#include <limits.h>
#include <sstream>
#include <stdlib.h>

class ScalarConverter
{

	public:

		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

		ScalarConverter &		operator=( ScalarConverter const & rhs );
		static void convert(const std::string& str);
	private:

};
bool convertStringToInt(const std::string& str, int& result);
bool convertStringToFloat(const std::string& str, float& result);
bool convertStringToDouble(const std::string& str, double& result);
bool is_int(const std::string& str);
bool is_char(const std::string& str);
bool is_float(const std::string& str);
bool is_double(const std::string& str);
#endif /* ************************************************* SCALARCONVERTER_H */