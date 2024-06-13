/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:54:49 by gregoire          #+#    #+#             */
/*   Updated: 2023/10/21 18:17:07 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int     main(int ac, char **av)
{
    PmergeMe obj;

    if (ac < 2)
        return std::cout << "Error" << std::endl, 1;
    timeval startVector, endVector, startDeque, endDeque;
    gettimeofday(&startVector, NULL);
    if (obj.fordJohsonSortV(av) == -1)
        return std::cout << "Error" << std::endl, 2;
    gettimeofday(&endVector, NULL);
    gettimeofday(&startDeque, NULL);
    if (obj.fordJohsonSortD(av) == -1)
        return std::cout << "Error" << std::endl, 3;
    gettimeofday(&endDeque, NULL);
    double durationVector = PmergeMe::calculateDuration(startVector, endVector);
    double durationDeque = PmergeMe::calculateDuration(startDeque, endDeque);
    std::cout << "Before:   ";
    for(int i = 1; i < ac ; i++)
        std::cout << av[i] << " ";
    std::cout << std::endl;
    obj.printFinalVector();
    // Uncomment to print the final deque
    //obj.printFinalDeque();
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << durationVector << " us" << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque  : " << durationDeque << " us" << std::endl;
}