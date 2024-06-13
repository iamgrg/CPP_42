/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:18:17 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/05 12:00:55 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName())
{
	*this = copy;
	return;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this != &copy)
		this->_grade = copy.getGrade();
	return (*this);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return;
}
std::ostream &	operator<<(std::ostream & os, Bureaucrat const & obj)
{
	os << "Bureaucrat \"" << obj.getName()
		<< "\" (grade: " << obj.getGrade() << ")";
	return (os);
}