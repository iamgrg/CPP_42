/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:20 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/02 09:00:38 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
# include <iostream>

	class Fixed {

		public : 
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits( int const raw );

		Fixed & operator=(Fixed const &rhs);

		private :

		int fixedValue;
		const static int nbBits;
	};
#endif