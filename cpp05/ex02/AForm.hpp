/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:53:27 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/07 14:37:50 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private :

	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;
	const std::string _target;

	public :
	AForm();
	virtual ~AForm();
	AForm(std::string name, std::string target, int gradeToSign, int gradeToExecute);
	AForm(AForm const &copy);
	AForm &operator=(AForm const &copy);
	const std::string getName() const;
	const std::string getTarget() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getSignedState() const;
	void beSigned(Bureaucrat &bureaucrat);
	virtual void action() const = 0;  
	void execute(Bureaucrat const &executor) const;
	

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
	class NotSignedException : public std::exception
	{
		public :
		virtual const char *what() const throw(){
			return ("Document not signed");
		}
	};
};

std::ostream & operator<<(std::ostream & os, AForm const &obj);


#endif