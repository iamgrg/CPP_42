/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:01:27 by gansard           #+#    #+#             */
/*   Updated: 2023/07/21 18:59:38 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) : _name("NULL"),_lastName("NULL"),_nickName("NULL"),_number("NULL"),_darkestSecret("NULL")
{}

Contact::~Contact(void)
{}

std::string Contact::getField(std::string field)
{
	if(field == "name")
		return this->_name;
	if(field == "lastName")
		return this->_lastName;
	if(field == "nickName")
		return this->_nickName;
	if(field == "number")
		return this->_number;
	if(field == "darkestSecret")
		return this->_darkestSecret;
	else
		return NULL;
}

void Contact::setField(std::string field, std::string value)
{
	if(field == "name")
		this->_name = value;
	if(field == "lastName")
		this->_lastName = value;
	if(field == "nickName")
		this->_nickName = value;
	if(field == "number")
		this->_number = value;
	if(field == "darkestSecret")
		this->_darkestSecret = value;
}