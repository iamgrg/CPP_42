/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 12:01:32 by gansard           #+#    #+#             */
/*   Updated: 2023/07/25 14:32:27 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

void	cmdPrompt(void){
	std::cout << "=================== MENU ===================" << std::endl;
	std::cout << "- ADD" << std::endl;
	std::cout << "- SEARCH" << std::endl;
	std::cout << "- EXIT" << std::endl << std::endl;
	std::cout << "> ";
}
std::string getField(std::string field){
	std::string prompt = "";
	while (prompt == "")
	{
		std::cout << "- " << field << " : ";
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			return "EXIT";
	}
	return prompt;
}

std::string	addContact(Phonebook& phoneBook){
	Contact newContact;

	std::cout << std::endl << "=================== ADD ====================" << std::endl << std::endl;
	std::string name = getField("name");
	if (name == "EXIT") return name;
	std::string lastName = getField("lastName");
	if (lastName == "EXIT") return lastName;
	std::string nickName = getField("nickName");
	if (nickName == "EXIT") return nickName;
	std::string number = getField("number");
	if (number == "EXIT") return number;
	std::string darkestSecret = getField("darkestSecret");
	if (darkestSecret == "EXIT") return darkestSecret;
	newContact.setField("name", name);
	newContact.setField("lastName", lastName);
	newContact.setField("nickName", nickName);
	newContact.setField("number", number);
	newContact.setField("darkestSecret", darkestSecret);
	std::cout << std::endl << "   >>> " << name << " added to contact list !" << " <<<" << std::endl << std::endl;
	phoneBook.setContact(newContact);
	return name;
}

void	displayColumn(std::string field, bool end){
	int blanck;

	//std::cout << std::endl << "fiedl : " << field << std::endl;
	blanck = 10 - field.size();
	if(blanck < 0)
		std::cout << field.substr(0, 9) << ".";
	else {
		for (int i = 0; i < blanck; i++)
			std::cout << " ";
		std::cout << field;
	}
	if (end)
		std::cout << std::endl;
	else
		std::cout << "|";
}

void	displayContact(Contact *contact, int index) {
	if (!contact)
	{
		std::cout << "no member for this index" << std::endl;
		return ;
	}
	char c = index + 49;
	std::string str(1, c);
	displayColumn(str, false);
	displayColumn(contact->getField("name"), false);
	displayColumn(contact->getField("lastName"), false);
	displayColumn(contact->getField("nickName"), true);
}

void	displaySingleContact(Contact *contact){
	std::cout << std::endl << "     **************************" << std::endl << "     *" << std::endl;
	std::cout << "     *  name : " << contact->getField("name") << std::endl;
	std::cout << "     *  lastName : " << contact->getField("lastName") << std::endl;
	std::cout << "     *  Nickname : " << contact->getField("nickName") << std::endl;
	std::cout << "     *  Number : " << contact->getField("number") << std::endl;
	std::cout << "     *  Darkest secret : " << contact->getField("darkestSecret") << std::endl << "     *";
	std::cout << std::endl << "     **************************" << std::endl  << std::endl;
}

std::string	searchContact(Phonebook& phoneBook){
	int index = 0;
	int nbContact = phoneBook.getNbContacts();
	std::string input;
	bool validIndex = false;
	
	if (nbContact == 0)
	{
		std::cout << std::endl <<"No contact yet, use ADD to add contact" << std::endl << std::endl;
		return "CONTINUE";
	}
	std::cout << std::endl << "================== SEARCH ==================" << std::endl << std::endl;
	for (int i = 0; i < nbContact; i++)
	{
		displayContact(phoneBook.getContact(i), i);
	}
	while (!validIndex)
	{
		std::cout << std::endl << "INDEX : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return "EXIT";
		if(input.size() != 1 || input[0] < 49 || input[0] > 56)
		{
			std::cout << std::endl << "Only numbers accepted" << std::endl;
			std::cout << "Min : 1" << std::endl;
			std::cout << "Max : 8" << std::endl;
		}
		else
			validIndex = true;
	}
	index = (int) input[0] - 49; 
	if (index + 1 > nbContact)
	{
		std::cout << "No contact with this index : " << index + 1 << std::endl;
		std::cout << "Number of contacts : " << nbContact << std::endl;
	}
	else
		displaySingleContact(phoneBook.getContact(index));
	return input;
}

int	main(void){
	
	Phonebook phoneBook;
	std::string cmd;
	
	while (cmd != "EXIT")
	{
		cmdPrompt();
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
			cmd = addContact(phoneBook);
		else if (cmd == "SEARCH")
			cmd = searchContact(phoneBook);
		else if (cmd != "EXIT")
			std::cout << "Error : wrong command." << std::endl;
	}
	std::cout << std::endl << "ALL CONTACTS LOST 😭" << std::endl;
	return (0);
}