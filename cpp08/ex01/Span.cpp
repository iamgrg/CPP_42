/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:48:32 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 11:56:50 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n ) : _n(n)
{
	return;
}

Span::Span( Span const & src )
{
	*this = src;
	return;
}

Span::~Span()
{
	return;
}

Span &		Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		this->_n = rhs._n;
		this->_v = rhs._v;
	}
	return *this;
}

void		Span::addNumber( int n )
{
	if (this->_v.size() >= this->_n)
		throw Span::FullException();
	this->_v.push_back(n);
	return;
}

void		Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end )
{
	if (this->_v.size() + std::distance(begin, end) > this->_n)
		throw Span::FullException();
	this->_v.insert(this->_v.end(), begin, end);
	return;
}

int			Span::shortestSpan( void )
{
	if (this->_v.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int>	tmp(this->_v);
	std::sort(tmp.begin(), tmp.end());
	int					min = tmp[1] - tmp[0];
	for (unsigned int i = 2; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return min;
}

int			Span::longestSpan( void )
{
	if (this->_v.size() <= 1)
		throw Span::NoSpanException();
	std::vector<int>	tmp(this->_v);
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

const char* Span::FullException::what() const throw()
{
	return "Error: Span is full.";
}

const char* Span::NoSpanException::what() const throw()
{
	return "Error: Span is empty or contains only one element.";
}

/* ************************************************************************** */