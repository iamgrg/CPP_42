/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:18:19 by gregoire          #+#    #+#             */
/*   Updated: 2023/10/21 18:11:29 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdlib.h>

PmergeMe::PmergeMe(){};
PmergeMe::~PmergeMe(){};

// ------------------------------------------------------------------------------
// ----------------------------- HELPER FUNCTIONS -------------------------------
// ------------------------------------------------------------------------------

void PmergeMe::swapPair(std::pair<int, int> &pair)
{
    int tmp = pair.first;
    pair.first = pair.second;
    pair.second = tmp;
}

int PmergeMe::checkArg(char *str)
{
    int i = -1;
    while (str[++i])
        if (str[i] < '0' || str[i] > '9')
            return 1;
    return 0;
}

int PmergeMe::getNextJacobsthal(int nb_elt)
{
    static int i = 0;
    int tab_jacob[15] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845};
    while (i < 15)
    {
        if (nb_elt >= tab_jacob[i])
            return i++, tab_jacob[i - 1];
        i++;
    }
    return 0;
}

template <typename T>
T PmergeMe::sortPair(T container)
{
    if (container.size() <= 1)
        return container;

    T left;
    T right;
    typename T::iterator it = container.begin();
    std::pair<int, int> pivot = *it;
    it++;

    while (it != container.end())
    {
        if (it->first <= pivot.first)
            left.push_back(*it);
        else
            right.push_back(*it);
        it++;
    }

    left = sortPair(left);
    right = sortPair(right);
    left.push_back(pivot);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}

double PmergeMe::calculateDuration(const timeval &start, const timeval &end)
{
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    return seconds + microseconds / 1000000.0;
}

// ------------------------------------------------------------------------------
// ----------------------------- VECTOR FUNCTIONS -------------------------------
// ------------------------------------------------------------------------------

int PmergeMe::fordJohsonSortV(char **av)
{
    int i = 1;

    while (av[i] && av[i + 1])
    {
        if (checkArg(av[i]) == 1 || checkArg(av[i + 1]) == 1)
            return -1;
        pairVector.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
        i += 2;
    }
    for (std::vector<std::pair<int, int> >::iterator it = pairVector.begin(); it != pairVector.end(); ++it)
        if (it->first < it->second)
            swapPair(*it);
    if (av[i])
    {
        if (checkArg(av[i]) == 1)
            return -1;
        pairVector.push_back(std::make_pair(atoi(av[i]), -1));
    }
    this->pairVector = sortPair(this->pairVector);
    mergeInsertV();
    if (*vector.begin() == -1)
        this->vector.erase(this->vector.begin());
    return 0;
}

int PmergeMe::binarySearchInsert(std::vector<int>& vec, int num)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right)
    {
        int midle = left + (right - left) / 2;
        if (vec[midle] == num)
        {
            // ------ Passer les doublons ------
            while (midle > 0 && vec[midle - 1] == num)
                --midle;
            vec.insert(vec.begin() + midle, num);
            return midle;
        }
        else if (vec[midle] < num)
            left = midle + 1;
        else
            right = midle - 1;
    }
    vec.insert(vec.begin() + left, num);
    return left;
}

void    PmergeMe::mergeInsertV()
{
    std::vector<std::pair<int, int> >::iterator cur = this->pairVector.begin();    
	std::vector<std::pair<int, int> >::iterator prev = cur, tmp = cur;
	int curJacobsthal;
    this->vector.push_back(cur->second);
    this->vector.push_back(cur->first);
    while (this->vector.size() < this->pairVector.size() * 2)
    {
        curJacobsthal = getNextJacobsthal(this->pairVector.size());
        if (curJacobsthal == 0)
            cur = tmp + 1;
        else
            cur = this->pairVector.begin() + curJacobsthal - 1;
        tmp = cur;
        while (cur > prev)
        {
            binarySearchInsert(this->vector, cur->second);
			binarySearchInsert(this->vector, cur->first);
			--cur;
        }
        prev = tmp;
    }
}
void PmergeMe::printFinalVector()
{
    std::cout << "After:    ";
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}
// ------------------------------------------------------------------------------
// ----------------------------- DEQUE FUNCTIONS ---------------------------------
// ------------------------------------------------------------------------------

int PmergeMe::fordJohsonSortD(char **av)
{
    int i = 1;

    while (av[i] && av[i + 1])
    {
        if (checkArg(av[i]) == 1 || checkArg(av[i + 1]) == 1)
            return -1;
        pairDeque.push_back(std::make_pair(atoi(av[i]), atoi(av[i + 1])));
        i += 2;
    }
    for (std::deque<std::pair<int, int> >::iterator it = pairDeque.begin(); it != pairDeque.end(); ++it)
        if (it->first < it->second)
            swapPair(*it);
    if (av[i])
    {
        if (checkArg(av[i]) == 1)
            return -1;
        pairDeque.push_back(std::make_pair(atoi(av[i]), -1));
    }
    this->pairDeque = sortPair(this->pairDeque);
    mergeInsertD();
    if (*deque.begin() == -1)
        this->deque.erase(this->deque.begin());
    return 0;
}

int PmergeMe::binarySearchInsert(std::deque<int>& vec, int num)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right)
    {
        int midle = left + (right - left) / 2;
        if (vec[midle] == num)
        {
            while (midle > 0 && vec[midle - 1] == num)
                --midle;
            vec.insert(vec.begin() + midle, num);
            return midle;
        }
        else if (vec[midle] < num)
            left = midle + 1;
        else
            right = midle - 1;
    }
    vec.insert(vec.begin() + left, num);
    return left;
}

void    PmergeMe::mergeInsertD()
{
    std::deque<std::pair<int, int> >::iterator cur = this->pairDeque.begin();    
	std::deque<std::pair<int, int> >::iterator prev = cur, tmp = cur;
	int curJacobsthal;
	this->deque.push_back(cur->second);
    this->deque.push_back(cur->first);
    while (this->deque.size() < this->pairDeque.size() * 2)
    {
        curJacobsthal = getNextJacobsthal(this->pairDeque.size());
        if (curJacobsthal == 0)
            cur = tmp + 1;
        else
            cur = this->pairDeque.begin() + curJacobsthal - 1;
        tmp = cur;
        while (cur > prev)
        {
            binarySearchInsert(this->deque, cur->second);
			binarySearchInsert(this->deque, cur->first);
			--cur;
        }
        prev = tmp;
    }
}
void PmergeMe::printFinalDeque()
{
    std::cout << "After:    ";
    for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}
