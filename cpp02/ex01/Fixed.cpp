/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:18 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/16 10:38:04 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->fixedValue = value << this->nbBits;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue = static_cast<int> (value * (1 << this->nbBits));
}

Fixed::Fixed(Fixed const &src) : fixedValue(src.fixedValue){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
};

const int Fixed::nbBits = 8;

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedValue;
};

void Fixed::setRawBits( int const raw ){
	this->fixedValue = raw;
}


Fixed & Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->fixedValue = rhs.getRawBits();
    }
    return *this;
}

int Fixed::toInt(void) const{
	return this->fixedValue >> this->nbBits;
}
float Fixed::toFloat(void) const{
	return static_cast<float>(this->fixedValue) / (1 << this->nbBits);
}

std::ostream& operator<<( std::ostream& os, const Fixed& number )
{
	os << number.toFloat();
	return ( os );
}