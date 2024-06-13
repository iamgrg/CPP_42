/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:48:34 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 16:09:50 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{

	public:

		Span( unsigned int n );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void		addNumber( int n );
		void		addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		int			shortestSpan( void );
		int			longestSpan( void );

		class FullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:

		Span();

		unsigned int		_n;
		std::vector<int>	_v;

};

#endif /* ******************************************************* SPAN_H */