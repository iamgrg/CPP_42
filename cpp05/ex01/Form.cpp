/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gansard <gansard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:57:42 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/07 14:50:18 by gansard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150){
	return ;
}

Form::~Form(){
	return ;
}


std::ostream & operator<<(std::ostream & os, Form const &obj){
	os << obj.getName() << ", form grade " << obj.getGradeToSign() << ", signed state : " << obj.getSignedState();
	return (os);
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) 
    : _name(name),_signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}


Form::Form(Form const &copy) 
    : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{}

const std::string Form::getName() const{
	return (this->_name);
}

int Form::getGradeToSign() const{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const{
	return (this->_gradeToExecute);
}

bool Form::getSignedState() const{
	return (this->_signed);
}

Form &Form::operator=(Form const &copy) {
	if (this != &copy)
		this->_signed = copy.getSignedState();
    return *this;
}

void Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}