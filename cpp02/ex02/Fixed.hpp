/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:20 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/17 09:23:41 by gregoire         ###   ########.fr       */
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
		Fixed & operator++();
		Fixed operator++(int);
		Fixed & operator--();
		Fixed operator--(int);
		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;
		static Fixed & min(Fixed &a, Fixed &b);
		static const Fixed & min(const Fixed &a,const Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & max(const Fixed &a,const Fixed &b);

		private :

		int fixedValue;
		const static int nbBits;

	};

	std::ostream& operator<<( std::ostream& os, const Fixed& number );
#endif