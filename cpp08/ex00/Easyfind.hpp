/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 11:32:13 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 11:37:24 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class NoOccurenceException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("No occurence found.");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NoOccurenceException();
	return (it);
}

#endif // EASYFIND_HPP