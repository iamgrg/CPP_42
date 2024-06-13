/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:20 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/16 10:34:20 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
# include <iostream>

	class Fixed {

		public : 
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int);
		Fixed(const float);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits( int const raw );
		int toInt(void) const;
		float toFloat(void) const;

		Fixed & operator=(Fixed const &rhs);

		private :

		int fixedValue;
		const static int nbBits;

	};

	std::ostream& operator<<( std::ostream& os, const Fixed& number );
#endif