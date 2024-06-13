/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:18:17 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 13:31:54 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack( void ) : std::stack<T>()
		{
			return;
		}

		MutantStack( MutantStack const & src ) : std::stack<T>(src)
		{
			return;
		}

		~MutantStack( void )
		{
			return;
		}

		MutantStack &		operator=( MutantStack const & rhs )
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin( void )
		{
			return std::stack<T>::c.begin();
		}

		iterator	end( void )
		{
			return std::stack<T>::c.end();
		}

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */