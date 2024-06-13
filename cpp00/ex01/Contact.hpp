/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:01:30 by gansard           #+#    #+#             */
/*   Updated: 2023/07/21 18:38:16 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

class Contact {
	public :
		std::string getField(std::string field);
		void setField(std::string field, std::string value);
		Contact();
		~Contact();

	private :
		std::string _name;
		std::string _lastName;
		std::string _nickName;
		std::string _number;
		std::string _darkestSecret;
};

#endif