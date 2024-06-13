/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:01:42 by gansard           #+#    #+#             */
/*   Updated: 2023/07/21 18:39:15 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include "Contact.hpp"

class Phonebook {
	public :
		void setContact(Contact& newContact);
		Contact *getContact(int index);
		int	getNbContacts();
		Phonebook();
		~Phonebook();

	private :
		Contact _contacts[8];
		int	_nbContacts;
};
#endif