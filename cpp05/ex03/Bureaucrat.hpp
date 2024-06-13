/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:18:16 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/07 14:53:34 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include<cstdlib>

class AForm;

class Bureaucrat
{
	private :

	const std::string _name;
	int _grade;

	public :
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &copy);
	const std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm& form);
	void executeForm(AForm const & form);

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

std::ostream & operator<<(std::ostream & os, Bureaucrat const &obj);


#endif