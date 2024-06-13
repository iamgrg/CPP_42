/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:13:10 by gansard           #+#    #+#             */
/*   Updated: 2023/09/08 16:59:38 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>


template <typename T>
class Array
{
    public:
        Array() : _array(NULL), _size(0) {}

        Array(unsigned int n)
        {
            _array = new T[n];
            _size = n;
            for (unsigned int i = 0; i < n; i++)
                _array[i] = T();
        }

        Array& operator=(const Array& rhs)
        {
            if (this != &rhs)
            {
                delete [] _array;
                _size = rhs.size();
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++) {
                    _array[i] = rhs._array[i];
                }
            }
            return (*this);
        }

        unsigned int size(void) const {
            return (_size);
        }

        Array(const Array& cpy) : _size(cpy._size) {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = cpy._array[i];
            }
        }

        T& operator[](unsigned int n) const {
            if (n < _size)
                return (this->_array[n]);
            throw InvalidIndexException();
        }

        ~Array() 
        {
            if (_array)
                delete [] _array;
        }
        class InvalidIndexException : public std::exception {
            public:
                virtual const char* what() const throw() {
                    return ("Invalid index");
                }
        };

    private:
        T* _array;
        unsigned int _size;
};

#endif