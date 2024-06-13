/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:53:53 by gregoire          #+#    #+#             */
/*   Updated: 2023/10/24 14:30:02 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <iostream>
# include <string>
# include <sys/time.h>
# include <vector>

class PmergeMe
{
  public:
    PmergeMe();
    ~PmergeMe();
    static double calculateDuration(const timeval &start, const timeval &end);
    void printFinalDeque();
    void printFinalVector();
    int fordJohsonSortV(char **av);
    int fordJohsonSortD(char **av);

  private:
    // Deque related members
    std::deque<std::pair<int, int> > pairDeque;
    std::deque<int> deque;
    void mergeInsertD();
    int binarySearchInsert(std::deque<int> &vec, int num);

    // Vector related members
    std::vector<std::pair<int, int> > pairVector;
    std::vector<int> vector;
    void mergeInsertV();
    int binarySearchInsert(std::vector<int> &vec, int num);

    // Members applicable for both
	PmergeMe(const PmergeMe& src);
	PmergeMe& operator=(const PmergeMe& rhs);
    int checkArg(char *str);
    void swapPair(std::pair<int, int> &pair);
    template <typename T>
    T sortPair(T container);
    int getNextJacobsthal(int nb_elt);
};

#endif // PMERGEME_HPP

