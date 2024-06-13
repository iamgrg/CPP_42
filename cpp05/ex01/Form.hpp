/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:27 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/07 14:46:35 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private :

	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;
	

	public :
	Form();
	~Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(Form const &copy);
	Form &operator=(Form const &copy);
	const std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getSignedState() const;
	void beSigned(Bureaucrat &bureaucrat);
	

	// Exeptions :

	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char *what() const throw(){
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char *what() const throw(){
			return ("Grade too low");
		}
	};
};

std::ostream & operator<<(std::ostream & os, Form const &obj);


#endif