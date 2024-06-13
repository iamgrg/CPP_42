/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:18 by gregoire          #+#    #+#             */
/*   Updated: 2023/08/17 10:39:04 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedValue(0) {
};

Fixed::~Fixed(void){
};

Fixed::Fixed(const int value){
	this->fixedValue = value << this->nbBits;
}

Fixed::Fixed(const float value){
	this->fixedValue = static_cast<int> (value * (1 << this->nbBits));
}

Fixed::Fixed(Fixed const &src) : fixedValue(src.fixedValue){
	*this = src;
};

const int Fixed::nbBits = 8;

int Fixed::getRawBits(void) const {
	return this->fixedValue;
};

void Fixed::setRawBits( int const raw ){
	this->fixedValue = raw;
}


Fixed & Fixed::operator=(Fixed const &rhs) {
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


/////////////////////////////////////////////
//OPERATOR
/////////////////////////////////////////////

bool Fixed::operator>(Fixed const &rhs) const {
	return (this->fixedValue > rhs.fixedValue);
}
bool Fixed::operator<(Fixed const &rhs) const {
	return (this->fixedValue < rhs.fixedValue);
}
bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->fixedValue <= rhs.fixedValue);
}
bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->fixedValue >= rhs.fixedValue);
}
bool Fixed::operator==(Fixed const &rhs) const {
	return (this->fixedValue == rhs.fixedValue);
}
bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->fixedValue != rhs.fixedValue);
}

Fixed Fixed::operator+(Fixed const &rhs) const {
    return Fixed(this->fixedValue + rhs.fixedValue);
}

Fixed Fixed::operator-(Fixed const &rhs) const {
    return Fixed(this->fixedValue - rhs.fixedValue);
}

// Fixed Fixed::operator*(Fixed const &rhs) const {
// 	std::cout << "this->fixedValue : " << this->fixedValue << std::endl;
// 	std::cout << "rhs.fixedValue : " << rhs.fixedValue << std::endl;
// 	float a = this->fixedValue >> this->nbBits;
// 	float b = rhs.fixedValue >> this->nbBits;
// 	std::cout << "this->fixedValue : " << a << std::endl;
// 	std::cout << "rhs.fixedValue : " << b << std::endl;
// 	return Fixed(static_cast<int>(static_cast<long long>(this->fixedValue) * rhs.fixedValue >> nbBits));
// }

Fixed Fixed::operator*(Fixed const &rhs) const {
    float a = this->toFloat();
    float b = rhs.toFloat();

    return Fixed(a * b);
}


Fixed Fixed::operator/(Fixed const &rhs) const {
    if (rhs.fixedValue == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->fixedValue / rhs.fixedValue);
}

Fixed &Fixed::operator++() {
    this->fixedValue += 1;
    return *this;
}

Fixed Fixed::operator++(int) { 
    Fixed temp(*this);
    this->fixedValue += 1;
    return temp;
}

Fixed &Fixed::operator--() {
    this->fixedValue -= 1;
    return *this;
}

Fixed Fixed::operator--(int) { 
    Fixed temp(*this);
    this->fixedValue -= 1;
    return temp;
}


Fixed & Fixed::min(Fixed &a, Fixed &b){
	return a <= b ? a : b;
}
const Fixed & Fixed::min(const Fixed &a,const Fixed &b){
	return a <= b ? a : b;
}
Fixed & Fixed::max(Fixed &a, Fixed &b){
	return a >= b ? a : b;
}
const Fixed & Fixed::max(const Fixed &a,const Fixed &b){
	return a >= b ? a : b;
}