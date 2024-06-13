/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:01:39 by gansard           #+#    #+#             */
/*   Updated: 2023/07/21 18:41:24 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _nbContacts(0)
{}

Phonebook::~Phonebook(void){}

void Phonebook::setContact(Contact& newContact)
{
	if(this->_nbContacts < 8)
	{
		this->_contacts[this->_nbContacts] = newContact;
		this->_nbContacts++;
	}
	else
	{
		for (int j = 0; j < 7; j++)
		{
			this->_contacts[j] = this->_contacts[j + 1];
		}
		this->_contacts[7] = newContact;
	}
}

Contact *Phonebook::getContact(int index)
{
	if (index >= 0 && index < 8)
		return &(this->_contacts[index]);
	else
		return NULL;
}

int Phonebook::getNbContacts()
{
	return this->_nbContacts;
}