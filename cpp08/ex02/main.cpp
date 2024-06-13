/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:32:10 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/09 17:41:59 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>

//int main()
//{
//	MutantStack<int> mstack;
//	mstack.push(5);
//	mstack.push(17);
//	std::cout << "top : " << mstack.top() << std::endl;
//	mstack.pop();
//	std::cout << "size : " << mstack.size() << std::endl;
//	mstack.push(3);
//	mstack.push(5);
//	mstack.push(737);
//	mstack.push(0);
//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	std::cout << "MutantStack : ";
//	while (it != ite)
//	{
//		std::cout << *it << " ";
//		++it;
//	}
//	std::cout << std::endl;
//	return 0;
//}



int main() {
    std::list<int> mlist; // Remplacement de MutantStack par std::list

    mlist.push_back(5); // push_back est utilisé à la place de push
    mlist.push_back(17);
    std::cout << "top : " << mlist.back() << std::endl; // back est utilisé à la place de top
    mlist.pop_back(); // pop_back est utilisé à la place de pop
    std::cout << "size : " << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    std::list<int>::iterator it = mlist.begin(); // Utilisation directe des itérateurs de std::list
    std::list<int>::iterator ite = mlist.end();
    ++it;
    --it;
	std::cout << "std::list : ";
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
	std::cout << std::endl;
    return 0;
}
